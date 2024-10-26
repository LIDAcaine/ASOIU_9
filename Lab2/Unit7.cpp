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
    // Устанавливаем текущую таблицу
	ADOTable2 = Table;  // Здесь устанавливаем указатель на текущую таблицу

	if (!ADOTable2->Active)
    {
		ADOTable2->Open();  // Убедитесь, что таблица открыта
	}
	ADOTable2->Edit();
	// Заполняем поля формы значениями из текущей записи таблицы
	Edit1->Text = Table->FieldByName("Наименование")->AsString;

}
//---------------------------------------------------------------------------
void __fastcall TForm7::ButtonNoNClick(TObject *Sender)
{
if (MessageDlg("Отменить?", mtConfirmation, mbYesNo, 0) == mrYes)
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
		// Переходим в режим редактирования



		ADOTable2->Edit();
		ADOTable2->FieldByName("Наименование")->AsString = Edit1->Text;

		// Сохраняем изменения

		ADOTable2->Post();

		ShowMessage("Запись успешно изменена.");
		ModalResult = mrOk;
		Form7->Close();
	}
	catch (const Exception &e)
	{
		ShowMessage("Ошибка при редактировании записи: " + e.Message);
	}
}
//---------------------------------------------------------------------------
