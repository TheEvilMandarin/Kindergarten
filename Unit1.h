//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TDataSource *DataSource1;
	TADOConnection *ADOConnection1;
	TADOTable *ADOTable1;
	TADOTable *ADOTable2;
	TADOTable *ADOTable3;
	TDataSource *DataSource2;
	TDataSource *DataSource3;
	TLabel *Label1;
	TDataSource *DataSource4;
	TADOTable *ADOTable4;
	TAutoIncField *ADOTable4��������;
	TWideStringField *ADOTable4ϲ�;
	TWideStringField *ADOTable4������;
	TIntegerField *ADOTable4�����;
	TIntegerField *ADOTable4����;
	TDateTimeField *ADOTable4��������������;
	TWideStringField *ADOTable4�������;
	TAutoIncField *ADOTable1�����;
	TWideStringField *ADOTable1�����;
	TIntegerField *ADOTable1������������������������;
	TWideStringField *ADOTable1��������;
	TAutoIncField *ADOTable2������;
	TWideStringField *ADOTable2ϲ�;
	TWideStringField *ADOTable2ϲ�������;
	TDateTimeField *ADOTable2��������������;
	TWideStringField *ADOTable2������;
	TWideStringField *ADOTable2������������;
	TAutoIncField *ADOTable3������������;
	TIntegerField *ADOTable3������;
	TIntegerField *ADOTable3�����;
	TDateTimeField *ADOTable3���������������;
	TDateTimeField *ADOTable3ʳ������������������;
	TStringField *ADOTable4����������;
	TStringField *ADOTable3ϲ�������;
	TStringField *ADOTable3����������;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TIntegerField *ADOTable2³�;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TSpeedButton *SpeedButton1;
	TDBGrid *DBGrid1;
	TDBNavigator *DBNavigator1;
	TEdit *Edit5;
	TButton *Button2;
	TTabSheet *TabSheet2;
	TDBGrid *DBGrid2;
	TDBNavigator *DBNavigator2;
	TTabSheet *TabSheet3;
	TDBGrid *DBGrid3;
	TDBNavigator *DBNavigator3;
	TTabSheet *TabSheet4;
	TDBGrid *DBGrid4;
	TDBNavigator *DBNavigator4;
	TComboBox *ComboBox1;
	TComboBox *ComboBox2;
	TSpeedButton *SpeedButton2;
	TButton *Button1;
	TButton *Button3;
	TButton *Button4;
	TButton *Button5;
	TMenuItem *N3;
	TEdit *Edit1;
	TButton *Button6;
	TSpeedButton *SpeedButton3;
	TDateTimePicker *DateTimePicker1;
	TLabel *Label2;
	TEdit *Edit2;
	TButton *Button7;
	TDateTimePicker *DateTimePicker2;
	TLabel *Label3;
	TSpeedButton *SpeedButton4;
	TEdit *Edit3;
	TButton *Button8;
	TMenuItem *N4;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall DBGrid1TitleClick(TColumn *Column);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall ADOTable2CalcFields(TDataSet *DataSet);
	void __fastcall DBGrid2TitleClick(TColumn *Column);
	void __fastcall DBGrid4TitleClick(TColumn *Column);
	void __fastcall N2Click(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall Edit5Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
	void __fastcall Edit1Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall Edit2Click(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Edit3Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
