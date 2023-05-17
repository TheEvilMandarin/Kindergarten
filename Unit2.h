//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "frxClass.hpp"
#include "frxPreview.hpp"
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include "frxDBSet.hpp"
#include <Vcl.Dialogs.hpp>
#include "frxExportBaseDialog.hpp"
#include "frxExportPDF.hpp"
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TfrxPreview *frxPreview1;
	TfrxDBDataset *frxDBDataset1;
	TfrxDBDataset *frxDBDataset2;
	TfrxDBDataset *frxDBDataset3;
	TButton *Button1;
	TButton *Button2;
	TfrxPDFExport *frxPDFExport1;
	TfrxReport *frxReport4;
	TfrxDBDataset *frxDBDataset4;
	TfrxReport *frxReport1;
	TfrxReport *frxReport2;
	TfrxReport *frxReport3;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
