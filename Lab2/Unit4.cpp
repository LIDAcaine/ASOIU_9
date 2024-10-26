//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
	ADOTable1->Active = true;
	DataSource1->DataSet = ADOTable1;

	DBLookupComboBox1->ListSource = DataSource1;
	DBLookupComboBox1->ListField = "���";
	DBLookupComboBox1->KeyField = "ID_�������";
    DBLookupComboBox1->DataSource = nullptr;

	ADOTable2->Active = true;
	DataSource2->DataSet = ADOTable2;

	DBLookupComboBox2->ListSource = DataSource2;
	DBLookupComboBox2->ListField = "������������";
	DBLookupComboBox2->KeyField = "ID_���������";
	DBLookupComboBox2->DataSource = nullptr;
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{
try
  {
        if (!ADOTable3->Active)
        {
            ADOTable3->Open();
        }
		ADOTable3->Append();
        int selectedID = DBLookupComboBox1->KeyValue;
		ADOTable3->FieldByName("ID_�������")->AsInteger = selectedID;
		int selectedID2 = DBLookupComboBox2->KeyValue;
		ADOTable3->FieldByName("ID_���������")->AsInteger = selectedID2;

		ADOTable3->FieldByName("�����")->AsString = Edit4->Text;
        ADOTable3->Edit();
		ADOTable3->Post();

        ShowMessage("������ ������� ���������.");
		Edit4->Text = "";

        ModalResult = mrOk;
		Form4->Close();

  }
  catch (const Exception &e)
  {
    ShowMessage("������ ��� ���������� ����� ������: " + e.Message);
  }
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm4::ButtonNoNClick(TObject *Sender)
{
	if (MessageDlg("��������?", mtConfirmation, mbYesNo, 0) == mrYes)
		 ModalResult = mrCancel;
}
//----------------------------------------------------------------------------------------------------------------------------------------------------
