//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}

//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonAddClick(TObject *Sender)
{
	TForm2 *addForm = new TForm2(this);
	addForm->ShowModal();
	ADOTable1->Requery();
	ADOTable1->Active=false;
	ADOTable1->Active=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonDeleteClick(TObject *Sender)
{

	if(!ADOTable1->IsEmpty())
	{
		if(MessageDlg("Вы точно хотите удалить эту запись?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
		{
			ADOTable1->Delete();
		}
	}

}

//---------------------------------------------------------------------------


void __fastcall TForm1::ButtonExitClick(TObject *Sender)
{
if (MessageDlg("Вы действительно хотите выйти?", mtConfirmation, mbYesNo, 0) == mrYes)

	Close();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::ButtonEditClick(TObject *Sender)
{

    if (ADOTable1->RecordCount > 0 && ADOTable1->Active)
		{

			Form3->SetData(ADOTable1); // Передаем текущую таблицу в Form3
             Form3->ShowModal();
			 // Обновляем данные в таблице после редактирования
			ADOTable1->Refresh();
		}
		else
		{
			ShowMessage("Нет записей для редактирования.");
		}
}
//---------------------------------------------------------------------------

