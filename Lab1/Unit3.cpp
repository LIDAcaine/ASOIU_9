//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::ButtonNoClick(TObject *Sender)
{
	if (MessageDlg("��������?", mtConfirmation, mbYesNo, 0) == mrYes)
		 ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
 void __fastcall TForm3::SetData(TADOTable *Table)
{
    // ������������� ������� �������
	ADOTable1 = Table;  // ����� ������������� ��������� �� ������� �������

	if (!ADOTable1->Active)
    {
        ADOTable1->Open();  // ���������, ��� ������� �������
	}
	ADOTable1->Edit();
	// ��������� ���� ����� ���������� �� ������� ������ �������
	Edit1->Text = Table->FieldByName("���")->AsString;
	Edit2->Text = Table->FieldByName("����_��������")->AsString;
	Edit3->Text = Table->FieldByName("����������_������")->AsString;
	Edit4->Text = Table->FieldByName("���")->AsString;

}
void __fastcall TForm3::ButtonSaveClick(TObject *Sender)
{
   try
	{
		if (!ADOTable1->Active)
		{
			ADOTable1->Open();

		}
		// ��������� � ����� ��������������

		

		ADOTable1->Edit();
		ADOTable1->FieldByName("���")->AsString = Edit1->Text;
		ADOTable1->FieldByName("����_��������")->AsString = Edit2->Text;
		ADOTable1->FieldByName("����������_������")->AsString = Edit3->Text;
		ADOTable1->FieldByName("���")->AsString = Edit4->Text;

		// ��������� ���������

	   	ADOTable1->Post();

		ShowMessage("������ ������� ��������.");
		ModalResult = mrOk;
		Form3->Close();
	}
	catch (const Exception &e)
	{
		ShowMessage("������ ��� �������������� ������: " + e.Message);
	}
}
//---------------------------------------------------------------------------

