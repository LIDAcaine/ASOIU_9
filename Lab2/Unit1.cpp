//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
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


//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
	  Form4->ShowModal();
	  ADOTable3->Refresh();
	  ADOTable3->Requery();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
if (ADOTable3->RecordCount > 0 && ADOTable3->Active)
        {
			Form5->SetData(ADOTable3);
			Form5->ShowModal();
			ADOTable3->Refresh();

        }
        else
        {
            ShowMessage("Нет записей для редактирования.");
        }
		ADOTable3->Requery();
		ADOTable1->Refresh();
		ADOTable1->Requery();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
		if(!ADOTable3->IsEmpty())
	{
		if(MessageDlg("Вы точно хотите удалить эту запись?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
		{
			ADOTable3->Delete();
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
		if(!ADOTable2->IsEmpty())
	{
		if(MessageDlg("Вы точно хотите удалить эту запись?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0) == mrYes)
		{
			ADOTable2->Delete();
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	 Form6->ShowModal();
	  ADOTable2->Refresh();
	  ADOTable2->Requery();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
if (ADOTable2->RecordCount > 0 && ADOTable2->Active)
        {
			Form7->SetData(ADOTable2);
			Form7->ShowModal();
			ADOTable2->Refresh();

        }
        else
		{
            ShowMessage("Нет записей для редактирования.");
        }
		ADOTable2->Requery();
		ADOTable1->Refresh();
		ADOTable1->Requery();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	  Form8->Show();
	  Form8->frxReport1->ShowReport();
}
//---------------------------------------------------------------------------

