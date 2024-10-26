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
	if (MessageDlg("Отменить?", mtConfirmation, mbYesNo, 0) == mrYes)
		 ModalResult = mrCancel;
}
//---------------------------------------------------------------------------
 void __fastcall TForm3::SetData(TADOTable *Table)
{
    // Устанавливаем текущую таблицу
	ADOTable1 = Table;  // Здесь устанавливаем указатель на текущую таблицу

	if (!ADOTable1->Active)
    {
        ADOTable1->Open();  // Убедитесь, что таблица открыта
	}
	ADOTable1->Edit();
	// Заполняем поля формы значениями из текущей записи таблицы
	Edit1->Text = Table->FieldByName("ФИО")->AsString;
	Edit2->Text = Table->FieldByName("Дата_рождения")->AsString;
	Edit3->Text = Table->FieldByName("Паспортные_данные")->AsString;
	Edit4->Text = Table->FieldByName("Пол")->AsString;

}
void __fastcall TForm3::ButtonSaveClick(TObject *Sender)
{
   try
	{
		if (!ADOTable1->Active)
		{
			ADOTable1->Open();

		}
		// Переходим в режим редактирования

		

		ADOTable1->Edit();
		ADOTable1->FieldByName("ФИО")->AsString = Edit1->Text;
		ADOTable1->FieldByName("Дата_рождения")->AsString = Edit2->Text;
		ADOTable1->FieldByName("Паспортные_данные")->AsString = Edit3->Text;
		ADOTable1->FieldByName("Пол")->AsString = Edit4->Text;

		// Сохраняем изменения

	   	ADOTable1->Post();

		ShowMessage("Запись успешно изменена.");
		ModalResult = mrOk;
		Form3->Close();
	}
	catch (const Exception &e)
	{
		ShowMessage("Ошибка при редактировании записи: " + e.Message);
	}
}
//---------------------------------------------------------------------------

