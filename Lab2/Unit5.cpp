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


	Edit4->Text = Table->FieldByName("Сумма")->AsString;


	DBLookupComboBox1->ListSource = DataSource1;
	DBLookupComboBox1->ListField = "ФИО";
	DBLookupComboBox1->KeyField = "ID_клиента";
	DBLookupComboBox1->KeyValue = Table->FieldByName("ID_клиента")->AsInteger;


	DBLookupComboBox2->ListSource = DataSource2;
	DBLookupComboBox2->ListField = "Наименование";
	DBLookupComboBox2->KeyField = "ID_категории";
	DBLookupComboBox2->KeyValue = Table->FieldByName("ID_категории")->AsInteger;
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

        // Переходим в режим редактирования
		ADOTable3->Edit();
        int selectedID = DBLookupComboBox1->KeyValue;
		ADOTable3->FieldByName("ID_клиента")->AsInteger = selectedID;
		int selectedID2 = DBLookupComboBox2->KeyValue;
		ADOTable3->FieldByName("ID_категории")->AsInteger = selectedID2;
		ADOTable3->FieldByName("Сумма")->AsString = Edit4->Text;

		// Сохраняем изменения
        ADOTable3->Post();

        ShowMessage("Запись успешно изменена.");
        ModalResult = mrOk;
        Form5->Close();
    }
    catch (const Exception &e)
    {
        ShowMessage("Ошибка при редактировании записи: " + e.Message);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::ButtonNoNClick(TObject *Sender)
{
if (MessageDlg("Отменить?", mtConfirmation, mbYesNo, 0) == mrYes)
		 ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
