//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
void __fastcall TForm7::SetData(TADOTable *Table)
{
    // ������������� ������� �������
	ADOTable2 = Table;  // ����� ������������� ��������� �� ������� �������

	if (!ADOTable2->Active)
    {
		ADOTable2->Open();  // ���������, ��� ������� �������
	}
	ADOTable2->Edit();
	// ��������� ���� ����� ���������� �� ������� ������ �������
	Edit1->Text = Table->FieldByName("������������")->AsString;

}
//---------------------------------------------------------------------------
void __fastcall TForm7::ButtonNoNClick(TObject *Sender)
{
if (MessageDlg("��������?", mtConfirmation, mbYesNo, 0) == mrYes)
		 ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button1Click(TObject *Sender)
{
    try
	{
		if (!ADOTable2->Active)
		{
			ADOTable2->Open();

		}
		// ��������� � ����� ��������������



		ADOTable2->Edit();
		ADOTable2->FieldByName("������������")->AsString = Edit1->Text;

		// ��������� ���������

		ADOTable2->Post();

		ShowMessage("������ ������� ��������.");
		ModalResult = mrOk;
		Form7->Close();
	}
	catch (const Exception &e)
	{
		ShowMessage("������ ��� �������������� ������: " + e.Message);
	}
}
//---------------------------------------------------------------------------
