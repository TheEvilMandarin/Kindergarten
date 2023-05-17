//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
#include "ABOUT.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
	PageControl1->Pages[0]->Caption = "������, �����, ���������";
	PageControl1->Pages[1]->Caption = "ʳ������ ���� �� ����������";
	PageControl1->Pages[2]->Caption = "���������� �� ������ ����";
}
//---------------------------------------------------------------------------
void __fastcall TForm3::N2Click(TObject *Sender)
{
	Form3->Close();
	Form1->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCloseQuery(TObject *Sender, bool &CanClose)
{
	Form1->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::CheckListBox1ClickCheck(TObject *Sender)
{
	ADOQuery3->Active = false;
	ADOQuery3->SQL->Text="SELECT ĳ��.ϲ� AS [ϲ� ������], �����.[� �����], �����.����� AS [����� �����], ��������.ϲ� AS [ϲ� ����������], ��������.������ FROM (ĳ�� INNER JOIN (����� INNER JOIN ������ ON �����.[� �����] = ������.[� �����]) ON ĳ��.[� ������] = ������.[� ������]) INNER JOIN �������� ON �����.[� �����] = ��������.[� �����] WHERE (((�����.�����) In (p1,p2,p3,p4,p5,p6,p7,p8))) ORDER BY �����.[� �����];";
	if (CheckListBox1->Checked[0] == true)
		ADOQuery3->Parameters->ParamByName("p1")->Value = CheckListBox1->Items->Strings[0];
	else
		ADOQuery3->Parameters->ParamByName("p1")->Value = ' ';
	if (CheckListBox1->Checked[1] == true)
		ADOQuery3->Parameters->ParamByName("p2")->Value = CheckListBox1->Items->Strings[1];
	else
		ADOQuery3->Parameters->ParamByName("p2")->Value = ' ';
	if (CheckListBox1->Checked[2] == true)
		ADOQuery3->Parameters->ParamByName("p3")->Value = CheckListBox1->Items->Strings[2];
	else
		ADOQuery3->Parameters->ParamByName("p3")->Value = ' ';
	if (CheckListBox1->Checked[3] == true)
		ADOQuery3->Parameters->ParamByName("p4")->Value = CheckListBox1->Items->Strings[3];
	else
		ADOQuery3->Parameters->ParamByName("p4")->Value = ' ';
	if (CheckListBox1->Checked[4] == true)
		ADOQuery3->Parameters->ParamByName("p5")->Value = CheckListBox1->Items->Strings[4];
	else
		ADOQuery3->Parameters->ParamByName("p5")->Value = ' ';
	if (CheckListBox1->Checked[5] == true)
		ADOQuery3->Parameters->ParamByName("p6")->Value = CheckListBox1->Items->Strings[5];
	else
		ADOQuery3->Parameters->ParamByName("p6")->Value = ' ';
	if (CheckListBox1->Checked[6] == true)
		ADOQuery3->Parameters->ParamByName("p7")->Value = CheckListBox1->Items->Strings[6];
	else
		ADOQuery3->Parameters->ParamByName("p7")->Value = ' ';
	if (CheckListBox1->Checked[7] == true)
		ADOQuery3->Parameters->ParamByName("p8")->Value = CheckListBox1->Items->Strings[7];
	else
		ADOQuery3->Parameters->ParamByName("p8")->Value = ' ';
	ADOQuery3->Active = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::N3Click(TObject *Sender)
{
    ShellExecute(Handle,L"open",L"D:\\�������\\builder\\Kindergarten\\guide.chm",NULL,NULL,SW_SHOW);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::N4Click(TObject *Sender)
{
	AboutBox->ShowModal();
}
//---------------------------------------------------------------------------

