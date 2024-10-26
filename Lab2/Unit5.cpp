//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
 #include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{

}
void __fastcall TForm5::SetData(TADOTable *Table)
{
  	ADOTable3 = Table;
	if (!ADOTable3->Active) {
		ADOTable3->Open();
	}
    ADOTable3->Edit();

    ADOTable1->Active = true;
	ADOTable2->Active = true;


	Edit4->Text = Table->FieldByName("�����")->AsString;


	DBLookupComboBox1->ListSource = DataSource1;
	DBLookupComboBox1->ListField = "���";
	DBLookupComboBox1->KeyField = "ID_�������";
	DBLookupComboBox1->KeyValue = Table->FieldByName("ID_�������")->AsInteger;


	DBLookupComboBox2->ListSource = DataSource2;
	DBLookupComboBox2->ListField = "������������";
	DBLookupComboBox2->KeyField = "ID_���������";
	DBLookupComboBox2->KeyValue = Table->FieldByName("ID_���������")->AsInteger;
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
try
    {
        if (!ADOTable3->Active)
        {
            ADOTable3->Open();
        }

        // ��������� � ����� ��������������
		ADOTable3->Edit();
        int selectedID = DBLookupComboBox1->KeyValue;
		ADOTable3->FieldByName("ID_�������")->AsInteger = selectedID;
		int selectedID2 = DBLookupComboBox2->KeyValue;
		ADOTable3->FieldByName("ID_���������")->AsInteger = selectedID2;
		ADOTable3->FieldByName("�����")->AsString = Edit4->Text;

		// ��������� ���������
        ADOTable3->Post();

        ShowMessage("������ ������� ��������.");
        ModalResult = mrOk;
        Form5->Close();
    }
    catch (const Exception &e)
    {
        ShowMessage("������ ��� �������������� ������: " + e.Message);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::ButtonNoNClick(TObject *Sender)
{
if (MessageDlg("��������?", mtConfirmation, mbYesNo, 0) == mrYes)
		 ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
