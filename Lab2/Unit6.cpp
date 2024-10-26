//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
	if (!ADOTable2->Active)
	{
		ADOTable2->Open();
	}
			ADOTable2->Append();
			ADOTable2->FieldByName("Наименование")->AsString = Edit1->Text;
			ADOTable2->Edit();
			ADOTable2->Post();
	Edit1->Text = "";

	ModalResult = mrOk;
	Form6->Close();
	ADOTable2->Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::ButtonNoNClick(TObject *Sender)
{
if (MessageDlg("Отменить?", mtConfirmation, mbYesNo, 0) == mrYes)
		 ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
