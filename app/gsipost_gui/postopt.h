/*------------------------------------------------------------------------------
* postopt.h
*
*    Copyright (C) 2014 by Geospatial Information Authority of Japan,
*    All rights reserved.
*
*
*  Original software: RTKLIB ver.2.4.2 p4
*
*    Copyright (C) 2007-2013 by T.Takasu, All rights reserved.
*
*
* references :
*
* history : 2015/01/08  1.0  new
*-----------------------------------------------------------------------------*/

#ifndef postoptH
#define postoptH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Dialogs.hpp>
#include <ComCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TOptDialog : public TForm
{
__published:
	TButton *BtnCancel;
	TButton *BtnOk;
	TOpenDialog *OpenDialog;
	TButton *BtnSave;
	TButton *BtnLoad;
	TSaveDialog *SaveDialog;
	TPageControl *Misc;
	TTabSheet *TabSheet1;
	TLabel *Label3;
	TLabel *Label8;
	TLabel *LabelPosMode;
	TLabel *LabelFreq;
	TLabel *LabelSolution;
	TLabel *LabelElMask;
	TLabel *Label32;
	TLabel *Label35;
	TLabel *Label9;
	TLabel *Label52;
	TLabel *Label53;
	TComboBox *DynamicModel;
	TComboBox *IonoOpt;
	TComboBox *TropOpt;
	TComboBox *PosMode;
	TComboBox *Solution;
	TComboBox *SatEphem;
	TEdit *ExSats;
	TCheckBox *NavSys1;
	TCheckBox *NavSys2;
	TCheckBox *NavSys3;
	TCheckBox *NavSys4;
	TCheckBox *NavSys5;
	TComboBox *TideCorr;
	TCheckBox *NavSys6;
	TComboBox *ElMask;
	TComboBox *L2Cod;
	TComboBox *TimSys;
	TTabSheet *TabSheet2;
	TLabel *Label25;
	TLabel *Label24;
	TLabel *Label13;
	TLabel *LabelHold;
	TLabel *Label22;
	TLabel *Label14;
	TLabel *Label11;
	TLabel *Label37;
	TLabel *Label33;
	TLabel *Label55;
	TComboBox *AmbRes;
	TEdit *ValidThresAR;
	TEdit *LockCntFixAmb;
	TEdit *OutCntResetAmb;
	TEdit *ElMaskAR;
	TEdit *SlipThres;
	TEdit *MaxAgeDiff;
	TEdit *RejectThres;
	TEdit *NumIter;
	TEdit *BaselineLen;
	TEdit *BaselineSig;
	TCheckBox *BaselineConst;
	TComboBox *GloAmbRes;
	TEdit *FixCntHoldAmb;
	TEdit *ElMaskHold;
	TEdit *RejectGdop;
	TComboBox *PhaCyc;
	TTabSheet *TabSheet8;
	TLabel *Label12;
	TSpeedButton *PhaCycSBtn;
	TSpeedButton *GloIfbSBtn;
	TSpeedButton *ErrModSBtn;
	TButton *PhaCycBtn;
	TEdit *PhaCycFile;
	TEdit *GloIfbFile;
	TEdit *ErrModFile;
	TButton *ErrModBtn;
	TButton *GloIfbBtn;
	TGroupBox *GroupBox1;
	TLabel *Label49;
	TLabel *Label50;
	TLabel *Label17;
	TLabel *Label68;
	TLabel *Label66;
	TLabel *Label61;
	TLabel *Label60;
	TLabel *Label48;
	TLabel *Label70;
	TLabel *Label71;
	TLabel *Label54;
	TLabel *Label23;
	TLabel *Label75;
	TLabel *Label78;
	TLabel *Label79;
	TComboBox *EstSatClo;
	TComboBox *EstSatFCB;
	TEdit *SemiDCPara;
	TButton *SemiDCParaBtn;
	TEdit *SolDirFile;
	TButton *SolDirBtn;
	TEdit *EstIntES;
	TEdit *RanWalSigZen;
	TEdit *ThrO;
	TEdit *EstIntZ;
	TEdit *ConCri;
	TEdit *MaxIte;
	TEdit *RanWalSigEW;
	TEdit *RanWalSigNS;
	TEdit *ThrC;
	TEdit *JudValWL;
	TEdit *JudValL1;
	TEdit *TemStoFile;
	TButton *TemStoFileBut;
	TEdit *Minsd;
	TEdit *Mindd;
	TEdit *Fixwl;
	TEdit *Fixnl;
	TEdit *Mobstadn;
	TEdit *Mobstade;
	TEdit *Mobstadu;
	TEdit *Basestadu;
	TEdit *Basestade;
	TEdit *Basestadn;
	TGroupBox *GroupBox2;
	TLabel *FCBLabel;
	TEdit *FCBFile;
	TButton *FCBBtn;
	TTabSheet *TabSheet3;
	TLabel *LabelSolFormat;
	TLabel *LabelTimeFormat;
	TLabel *LabelLatLonFormat;
	TLabel *LabelFieldSep;
	TLabel *Label2;
	TLabel *Label18;
	TLabel *Label20;
	TLabel *Label36;
	TLabel *Label21;
	TLabel *Label31;
	TComboBox *SolFormat;
	TComboBox *TimeFormat;
	TComboBox *LatLonFormat;
	TEdit *FieldSep;
	TComboBox *OutputDatum;
	TComboBox *OutputHeight;
	TComboBox *OutputGeoid;
	TComboBox *OutputHead;
	TComboBox *OutputOpt;
	TComboBox *DebugTrace;
	TComboBox *DebugStatus;
	TEdit *TimeDecimal;
	TEdit *NmeaIntv1;
	TEdit *NmeaIntv2;
	TComboBox *SolStatic;
	TTabSheet *TabSheet4;
	TLabel *Label29;
	TGroupBox *GroupBox3;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label16;
	TLabel *Label64;
	TLabel *Label56;
	TLabel *Label57;
	TEdit *MeasErrR1;
	TEdit *MeasErr2;
	TEdit *MeasErr3;
	TEdit *MeasErr4;
	TEdit *MeasErr5;
	TEdit *MeasErrR2;
	TComboBox *ErrMod;
	TEdit *MeasErr6;
	TGroupBox *GroupBox4;
	TLabel *Label26;
	TLabel *Label27;
	TLabel *Label28;
	TLabel *Label10;
	TEdit *PrNoise1;
	TEdit *PrNoise2;
	TEdit *PrNoise3;
	TEdit *PrNoise4;
	TEdit *PrNoise5;
	TEdit *SatClkStab;
	TTabSheet *TabSheet5;
	TLabel *Label4;
	TLabel *Label30;
	TSpeedButton *BtnStaPosView;
	TGroupBox *GroupRovAnt;
	TLabel *LabelRovAntD;
	TLabel *Label58;
	TEdit *RovAntE;
	TEdit *RovAntN;
	TEdit *RovAntU;
	TEdit *RovPos1;
	TEdit *RovPos2;
	TEdit *RovPos3;
	TButton *BtnRovPos;
	TCheckBox *RovAntPcv;
	TComboBox *RovAnt;
	TComboBox *RovPosType;
	TEdit *RovRecTyp;
	TGroupBox *GroupRefAnt;
	TLabel *LabelRefAntD;
	TLabel *Label59;
	TEdit *RefAntE;
	TEdit *RefAntN;
	TEdit *RefAntU;
	TEdit *RefPos1;
	TEdit *RefPos2;
	TEdit *RefPos3;
	TButton *BtnRefPos;
	TCheckBox *RefAntPcv;
	TComboBox *RefAnt;
	TComboBox *RefPosType;
	TEdit *RefRecTyp;
	TEdit *StaPosFile;
	TButton *BtnStaPosFile;
	TTabSheet *TabSheet7;
	TLabel *Label1;
	TSpeedButton *BtnAntPcvView;
	TLabel *Label38;
	TSpeedButton *BtnSatPcvView;
	TLabel *Label63;
	TLabel *Label15;
	TSpeedButton *BtnDCBView;
	TLabel *Label47;
	TSpeedButton *BtnIonoView;
	TLabel *Label51;
	TEdit *AntPcvFile;
	TButton *BtnAntPcvFile;
	TButton *BtnGoogleEarthFile;
	TEdit *GoogleEarthFile;
	TEdit *SatPcvFile;
	TButton *BtnSatPcvFile;
	TEdit *GeoidDataFile;
	TButton *BtnGeoidDataFile;
	TEdit *DCBFile;
	TButton *BtnDCBFile;
	TEdit *IonoFile;
	TButton *BtnIonoFile;
	TEdit *BIPMCircularTFile;
	TButton *BtnBIPMCircularTFile;
	TTabSheet *TabSheet6;
	TLabel *Label19;
	TLabel *Label39;
	TLabel *Label40;
	TLabel *Label41;
	TLabel *Label42;
	TLabel *Label44;
	TLabel *Label45;
	TMemo *RovList;
	TMemo *BaseList;
	TComboBox *IntpRefObs;
	TEdit *SbasSat;
	TComboBox *ComboBox1;
	TPanel *Panel1;
	TSpeedButton *SpeedButton1;
	TLabel *Label46;
	TLabel *Label62;
	TLabel *Label43;
	TLabel *Label65;
	TEdit *ISBFile;
	TLabel *Label5;
	TButton *BtnISBFile;
	TSpeedButton *BtnISBView;
	TLabel *Label67;
	TComboBox *Isb;
	TComboBox *Diff;
	TLabel *Label69;
	TEdit *PrNoise6;
	TEdit *PrNoise7;
	TEdit *PrNoise8;
	TLabel *Label72;
	TLabel *Label73;
	TLabel *Label74;
	TEdit *ISBOutFile;
	TLabel *Label76;
	TSpeedButton *BtnISBOutView;
	TButton *BtnISBOutFile;
	TComboBox *IsbOut;
	TComboBox *PppAmbRes;
	TLabel *Label77;
	TComboBox *L2CPBias;
	TLabel *Label80;
	TButton *BtnMask;
	TLabel *Label81;
	TEdit *EOPFile;
	TLabel *Label82;
	TEdit *BLQFile;
	TButton *BtnBLQFile;
	TSpeedButton *BtnBLQFileView;
	TButton *BtnEOPFile;
	TSpeedButton *BtnEOPView;
	TLabel *LabelConf;
	TEdit *ThresAR2;
	TEdit *ThresAR3;
	TCheckBox *PosOpt5;
	TCheckBox *PosOpt4;
	TCheckBox *PosOpt3;
	TCheckBox *PosOpt2;
	TCheckBox *PosOpt1;
	TEdit *MeasErrR3;
	TLabel *Label34;
	TLabel *Label83;
	TComboBox *Freqs;
	TComboBox *AmbResMethod;
	TLabel *Label84;
	TEdit *RnxOpts1;
	TEdit *RnxOpts2;
	TLabel *Label85;
	TLabel *Label86;
	TEdit *GloCodePri1;
	TLabel *Label87;
	TLabel *Label88;
	TEdit *GloCodePri2;
	TComboBox *OutSatelliteClock;
	TComboBox *OutReceiverClock;
	TLabel *Label89;
	TLabel *Label90;
	TComboBox *OutPosSinex;
	TLabel *Label91;
	TComboBox *OutIon;
	TComboBox *OutTrop;
	TLabel *Label92;
	TComboBox *Gl2Out;
	TSpeedButton *BtnGL2OutView;
	TButton *BtnGL2OutFile;
	TEdit *GL2OutFile;
	TEdit *NLFcb;
	TLabel *Label93;
	TLabel *Label94;
	TLabel *Label95;
	TComboBox *OutStatic;
	TLabel *Label96;
	TEdit *FCBOutFile;
	TSpeedButton *BtnFCBOutView;
	TButton *BtnFCBOutFile;
	TComboBox *FCBOut;

	void __fastcall BtnOkClick(TObject *Sender);
	void __fastcall RovAntPcvClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall BtnAntPcvFileClick(TObject *Sender);
	void __fastcall BtnGoogleEarthFileClick(TObject *Sender);
	void __fastcall BtnAntPcvViewClick(TObject *Sender);
	void __fastcall AmbResChange(TObject *Sender);
	void __fastcall NetRSCorrClick(TObject *Sender);
	void __fastcall SatClkCorrClick(TObject *Sender);
	void __fastcall PosModeChange(TObject *Sender);
	void __fastcall SolFormatChange(TObject *Sender);
	void __fastcall IsbOutChange(TObject *Sender);
	void __fastcall BtnLoadClick(TObject *Sender);
	void __fastcall BtnSaveClick(TObject *Sender);
	void __fastcall FreqChange(TObject *Sender);
	void __fastcall BtnRefPosClick(TObject *Sender);
	void __fastcall BtnRovPosClick(TObject *Sender);
	void __fastcall RovPosClick(TObject *Sender);
	void __fastcall RefPosClick(TObject *Sender);
	void __fastcall BtnStaPosViewClick(TObject *Sender);
	void __fastcall BtnStaPosFileClick(TObject *Sender);
	void __fastcall SbasCorrClick(TObject *Sender);
	void __fastcall OutputHeightClick(TObject *Sender);
	void __fastcall RefPosTypeChange(TObject *Sender);
	void __fastcall RovPosTypeChange(TObject *Sender);
	void __fastcall GetPos(int type, TEdit **edit, double *pos);
	void __fastcall SetPos(int type, TEdit **edit, double *pos);
	void __fastcall BtnSatPcvFileClick(TObject *Sender);
	void __fastcall BtnSatPcvViewClick(TObject *Sender);
	void __fastcall SatEphemClick(TObject *Sender);
	void __fastcall BtnGeoidDataFileClick(TObject *Sender);
	void __fastcall BaselineConstClick(TObject *Sender);
	void __fastcall NavSys2Click(TObject *Sender);
	void __fastcall IonoOptChange(TObject *Sender);
	void __fastcall TropOptChange(TObject *Sender);
	void __fastcall DynamicModelChange(TObject *Sender);
	void __fastcall SatEphemChange(TObject *Sender);
	void __fastcall RovAntClick(TObject *Sender);
	void __fastcall RefAntClick(TObject *Sender);
	void __fastcall BtnDCBViewClick(TObject *Sender);
	void __fastcall BtnDCBFileClick(TObject *Sender);
	void __fastcall BtnISBViewClick(TObject *Sender);
	void __fastcall BtnISBFileClick(TObject *Sender);
	void __fastcall BtnISBOutViewClick(TObject *Sender);
	void __fastcall BtnISBOutFileClick(TObject *Sender);
	void __fastcall BtnGL2OutViewClick(TObject *Sender);
	void __fastcall BtnGL2OutFileClick(TObject *Sender);
	void __fastcall BtnFCBOutViewClick(TObject *Sender);
	void __fastcall BtnFCBOutFileClick(TObject *Sender);
	void __fastcall BtnEOPViewClick(TObject *Sender);
	void __fastcall BtnEOPFileClick(TObject *Sender);
	void __fastcall BtnBLQViewClick(TObject *Sender);
	void __fastcall BtnBLQFileClick(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall BtnIonoViewClick(TObject *Sender);
	void __fastcall BtnIonoFileClick(TObject *Sender);
	void __fastcall PhaCycBtnClick(TObject *Sender);
	void __fastcall GloIfbBtnClick(TObject *Sender);
	void __fastcall ErrModBtnClick(TObject *Sender);
	void __fastcall PhaCycSBtnClick(TObject *Sender);
	void __fastcall GloIfbSBtnClick(TObject *Sender);
	void __fastcall ErrModSBtnClick(TObject *Sender);
	void __fastcall BtnBIPMCircularTFileClick(TObject *Sender);
	void __fastcall EstSatFCBChange(TObject *Sender);
	void __fastcall EstSatCloChange(TObject *Sender);
	void __fastcall SemiDCParaBtnClick(TObject *Sender);
	void __fastcall SolDirBtnClick(TObject *Sender);
	void __fastcall FCBBtnClick(TObject *Sender);
	void __fastcall TemStoFileButClick(TObject *Sender);
	void __fastcall BtnMaskClick(TObject *Sender);
	void __fastcall GloCodePri1KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall GloCodePri2KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall L2CPBiasChange(TObject *Sender);
	void __fastcall IsbChange(TObject *Sender);
	void __fastcall Gl2OutChange(TObject *Sender);
	void __fastcall FCBOutChange(TObject *Sender);

	
private:
	snrmask_t SnrMask;
	int RovPosTypeP,RefPosTypeP;
	void __fastcall GetOpt(void);
	void __fastcall SetOpt(void);
	void __fastcall LoadOpt(UnicodeString file);
	void __fastcall SaveOpt(UnicodeString file);
	void __fastcall ReadAntList(void);
	void __fastcall UpdateEnable(void);
public:
	__fastcall TOptDialog(TComponent* Owner);
	wchar_t* __fastcall char2wchar(char *str, int length);
	char* __fastcall wchar2char(wchar_t *wstr, int length);
};
//---------------------------------------------------------------------------
extern PACKAGE TOptDialog *OptDialog;
//---------------------------------------------------------------------------
#endif
