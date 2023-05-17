//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "ABOUT.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	 PageControl1->Pages[0]->Caption = "�����";
	 PageControl1->Pages[1]->Caption = "ĳ��";
	 PageControl1->Pages[2]->Caption = "������";
	 PageControl1->Pages[3]->Caption = "��������";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
	if(Edit5->Text.IsEmpty()){
		Application->Title="���������";
		ShowMessage("��������� ���� �����!");
	}
	else
	{
		if(ADOTable1->Locate("�����",Edit5->Text,TLocateOptions())){
			Application->Title="���������";
			ShowMessage("����� ��������!");
			DBGrid1->SetFocus();
		}
		else
		{
			Application->Title="���������";
			ShowMessage("����� �� ��������!");
		}

	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DBGrid1TitleClick(TColumn *Column)
{
	try{
	if ((ADOTable1->Sort.Pos(Column->FieldName) > 0) && (ADOTable1->Sort.Pos("ASC") > 0))
	 ADOTable1->Sort = Column->FieldName + " DESC";//���������� �� ��������
   else
	 ADOTable1->Sort = Column->FieldName + " ASC";//�� �����������
	}
	catch(...)
	{
		Application->Title="�������";
		MessageDlg("�������! ���������� �� ����� ����� ���������!", mtWarning, TMsgDlgButtons() << mbOK, 0);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
	if(SpeedButton1->Down==true)
	{
		ADOTable1->Filter = "[��� �����] = " + QuotedStr(ComboBox1->Text);
		ADOTable1->Filtered=true;
		SpeedButton1->Caption="³������" ;
	}
	else {ADOTable1->Filtered=false;
		ComboBox1->Text = "������ ��� ����� ��� �������";
		SpeedButton1->Caption="Գ����" ;}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ADOTable2CalcFields(TDataSet *DataSet)
{
	ADOTable2->FieldByName("³�")->Value = (Now().operator int() - (ADOTable2->FieldByName("���� ����������")->Value).operator int()-1)/365;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::DBGrid2TitleClick(TColumn *Column)
{
 try{
	if ((ADOTable2->Sort.Pos(Column->FieldName) > 0) && (ADOTable1->Sort.Pos("ASC") > 0))
	 ADOTable2->Sort = Column->FieldName + " DESC";//���������� �� ��������
   else
	 ADOTable2->Sort = Column->FieldName + " ASC";//�� �����������
	}
	catch(...)
	{
		Application->Title="�������";
		MessageDlg("�������! ���������� �� ����� ����� ���������!", mtWarning, TMsgDlgButtons() << mbOK, 0);
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::DBGrid4TitleClick(TColumn *Column)
{
try{
	if ((ADOTable4->Sort.Pos(Column->FieldName) > 0) && (ADOTable1->Sort.Pos("ASC") > 0))
	 ADOTable4->Sort = Column->FieldName + " DESC";//���������� �� ��������
   else
	 ADOTable4->Sort = Column->FieldName + " ASC";//�� �����������
	}
	catch(...)
	{
		Application->Title="�������";
		MessageDlg("�������! ���������� �� ����� ����� ���������!", mtWarning, TMsgDlgButtons() << mbOK, 0);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N2Click(TObject *Sender)
{
	Form1->Hide();
	Form3->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
	if(SpeedButton2->Down==true)
	{
		ADOTable4->Filter = "[������]= " + QuotedStr(ComboBox2->Text);
		ADOTable4->Filtered=true;
		SpeedButton2->Caption="³������" ;
	}
	else {ADOTable4->Filtered=false;
		ComboBox2->Text = "������ ������ ��� �������";
		SpeedButton2->Caption="Գ����" ;}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit5Click(TObject *Sender)
{
    Edit5->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	TfrxReport *Report;
	Report = Form2->frxReport1;
	Report->Preview = Form2->frxPreview1;
	Report->ShowReport();
	Form2->WindowState=wsMaximized; //������ �� ����� ������
	Form2->Caption = "�����";
	Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	TfrxReport *Report;
	Report = Form2->frxReport2;
	Report->Preview = Form2->frxPreview1;
	Report->ShowReport();
	Form2->WindowState=wsMaximized; //������ �� ����� ������
	Form2->Caption = "ĳ��";
	Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	TfrxReport *Report;
	Report = Form2->frxReport3;
	ADOTable3->Sort = "[� �����] ASC";
	Report->Preview = Form2->frxPreview1;
	Report->ShowReport();
	Form2->WindowState=wsMaximized; //������ �� ����� ������
	Form2->Caption = "������";
	Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	TfrxReport *Report;
	ADOTable4->Sort = "������ ASC";
	Report = Form2->frxReport4;
	Report->Preview = Form2->frxPreview1;
	Report->ShowReport();
	Form2->WindowState=wsMaximized; //������ �� ����� ������
	Form2->Caption = "����������";
	Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N3Click(TObject *Sender)
{
	ShellExecute(Handle,L"open",L"D:\\�������\\builder\\Kindergarten\\guide.chm",NULL,NULL,SW_SHOW);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1Click(TObject *Sender)
{
	Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
	TLocateOptions Options;
	Options << loPartialKey << loCaseInsensitive;
	if(Edit1->Text.IsEmpty()){
		Application->Title="���������";
		ShowMessage("��������� ���� �����!");
	}
	else
	{
		if(ADOTable2->Locate("ϲ�",Edit1->Text, Options)){
			Application->Title="���������";
			ShowMessage("������ ��������!");
			DBGrid2->SetFocus();
		}
		else
		{
			Application->Title="���������";
			ShowMessage("������ �� ��������!");
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
if(SpeedButton3->Down==true)
	{
		ADOTable2->Filter = "[���� ����������] = " + QuotedStr(DateTimePicker1->DateTime.FormatString("dd MMM yy"));
		ADOTable2->Filtered=true;
		SpeedButton3->Caption="³������" ;
	}
	else {ADOTable2->Filtered=false;
		SpeedButton3->Caption="Գ����" ;}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit2Click(TObject *Sender)
{
    Edit2->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton4Click(TObject *Sender)
{
	if(SpeedButton4->Down==true)
	{
		ADOTable3->Filter = "[���� �����������] = " + QuotedStr(DateTimePicker2->DateTime.FormatString("dd MMM yy"));
		ADOTable3->Filtered=true;
		SpeedButton4->Caption="³������" ;
	}
	else {ADOTable3->Filtered=false;
		SpeedButton4->Caption="Գ����" ;}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	TLocateOptions Options;
	Options << loPartialKey << loCaseInsensitive;
	if(Edit2->Text.IsEmpty()){
		Application->Title="���������";
		ShowMessage("��������� ���� �����!");
	}
	else
	{
		if(ADOTable3->Locate("� ������",Edit2->Text, Options)){
			Application->Title="���������";
			ShowMessage("������ ��������!");
			DBGrid3->SetFocus();
		}
		else
		{
			Application->Title="���������";
			ShowMessage("������ �� ��������!");
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit3Click(TObject *Sender)
{
    Edit3->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
	TLocateOptions Options;
	Options << loPartialKey << loCaseInsensitive;
	if(Edit3->Text.IsEmpty()){
		Application->Title="���������";
		ShowMessage("��������� ���� �����!");
	}
	else
	{
		if(ADOTable4->Locate("ϲ�",Edit3->Text, Options)){
			Application->Title="���������";
			ShowMessage("���������� ��������!");
			DBGrid4->SetFocus();
		}
		else
		{
			Application->Title="���������";
			ShowMessage("���������� �� ��������!");
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N4Click(TObject *Sender)
{
    AboutBox->ShowModal();
}
//---------------------------------------------------------------------------

