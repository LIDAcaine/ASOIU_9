//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm2::ButtonNoNClick(TObject *Sender)
{
	if (MessageDlg("��������?", mtConfirmation, mbYesNo, 0) == mrYes)
		 ModalResult = mrCancel;

}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	if (!ADOTable1->Active)
	{
		ADOTable1->Open();
	}
			ADOTable1->Append();
			ADOTable1->FieldByName("���")->AsString = Edit1->Text;
			ADOTable1->FieldByName("����_��������")->AsString = Edit2->Text;
			ADOTable1->FieldByName("����������_������")->AsString =  Edit3->Text;
			ADOTable1->FieldByName("���")->AsString = Edit4->Text;
			ADOTable1->Edit();
			ADOTable1->Post();
	Edit1->Text = "";
	Edit2->Text = "";
	Edit3->Text = "";
	Edit4->Text = "";
	ModalResult = mrOk;
	Form2->Close();
	ADOTable1->Refresh();

}
//---------------------------------------------------------------------------

