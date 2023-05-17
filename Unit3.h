//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.CheckLst.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label2;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TDBGrid *DBGrid1;
	TADOQuery *ADOQuery1;
	TDataSource *DataSource1;
	TTabSheet *TabSheet2;
	TDBGrid *DBGrid2;
	TADOQuery *ADOQuery2;
	TDataSource *DataSource2;
	TTabSheet *TabSheet3;
	TDBGrid *DBGrid3;
	TADOQuery *ADOQuery3;
	TDataSource *DataSource3;
	TCheckListBox *CheckListBox1;
	TMenuItem *N3;
	TMenuItem *N4;
	void __fastcall N2Click(TObject *Sender);
	void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
	void __fastcall CheckListBox1ClickCheck(TObject *Sender);
	void __fastcall N3Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
