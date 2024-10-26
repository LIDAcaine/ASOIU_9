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
	DBLookupComboBox1->ListField = "ФИО";
	DBLookupComboBox1->KeyField = "ID_клиента";
    DBLookupComboBox1->DataSource = nullptr;

	ADOTable2->Active = true;
	DataSource2->DataSet = ADOTable2;

	DBLookupComboBox2->ListSource = DataSource2;
	DBLookupComboBox2->ListField = "Наименование";
	DBLookupComboBox2->KeyField = "ID_категории";
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
		ADOTable3->FieldByName("ID_клиента")->AsInteger = selectedID;
		int selectedID2 = DBLookupComboBox2->KeyValue;
		ADOTable3->FieldByName("ID_категории")->AsInteger = selectedID2;

		ADOTable3->FieldByName("Сумма")->AsString = Edit4->Text;
        ADOTable3->Edit();
		ADOTable3->Post();

        ShowMessage("Запись успешно добавлена.");
		Edit4->Text = "";

        ModalResult = mrOk;
		Form4->Close();

  }
  catch (const Exception &e)
  {
    ShowMessage("Ошибка при добавлении новой записи: " + e.Message);
  }
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm4::ButtonNoNClick(TObject *Sender)
{
	if (MessageDlg("Отменить?", mtConfirmation, mbYesNo, 0) == mrYes)
		 ModalResult = mrCancel;
}
//----------------------------------------------------------------------------------------------------------------------------------------------------
