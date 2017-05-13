; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CTickTackView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "TickTack.h"
LastPage=0

ClassCount=8
Class1=CTickTackApp
Class2=CTickTackDoc
Class3=CTickTackView
Class4=CMainFrame

ResourceCount=4
Resource1=IDR_MAINFRAME
Resource2=IDR_TICKTATYPE
Class5=CChildFrame
Class6=CAboutDlg
Resource3=IDD_ABOUTBOX
Class7=CInputDlg
Class8=CTickTackDlg
Resource4=IDD_DIALOG_INPUT

[CLS:CTickTackApp]
Type=0
HeaderFile=TickTack.h
ImplementationFile=TickTack.cpp
Filter=N

[CLS:CTickTackDoc]
Type=0
HeaderFile=TickTackDoc.h
ImplementationFile=TickTackDoc.cpp
Filter=N

[CLS:CTickTackView]
Type=0
HeaderFile=TickTackView.h
ImplementationFile=TickTackView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CTickTackView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T


[CLS:CChildFrame]
Type=0
HeaderFile=ChildFrm.h
ImplementationFile=ChildFrm.cpp
Filter=M


[CLS:CAboutDlg]
Type=0
HeaderFile=TickTack.cpp
ImplementationFile=TickTack.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_PRINT_SETUP
Command4=ID_FILE_MRU_FILE1
Command5=ID_APP_EXIT
Command6=ID_VIEW_TOOLBAR
Command7=ID_VIEW_STATUS_BAR
Command8=ID_APP_ABOUT
CommandCount=8

[TB:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
CommandCount=8

[MNU:IDR_TICKTATYPE]
Type=1
Class=CTickTackView
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_CLOSE
Command4=ID_FILE_SAVE
Command5=ID_FILE_SAVE_AS
Command6=ID_FILE_PRINT
Command7=ID_FILE_PRINT_PREVIEW
Command8=ID_FILE_PRINT_SETUP
Command9=ID_FILE_MRU_FILE1
Command10=ID_APP_EXIT
Command11=ID_EDIT_UNDO
Command12=ID_EDIT_CUT
Command13=ID_EDIT_COPY
Command14=ID_EDIT_PASTE
Command15=ID_VIEW_TOOLBAR
Command16=ID_VIEW_STATUS_BAR
Command17=ID_WINDOW_NEW
Command18=ID_WINDOW_CASCADE
Command19=ID_WINDOW_TILE_HORZ
Command20=ID_WINDOW_ARRANGE
Command21=ID_APP_ABOUT
CommandCount=21

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_PRINT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_EDIT_COPY
Command12=ID_EDIT_PASTE
Command13=ID_NEXT_PANE
Command14=ID_PREV_PANE
CommandCount=14

[CLS:CInputDlg]
Type=0
HeaderFile=InputDlg.h
ImplementationFile=InputDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

[DLG:IDD_DIALOG_INPUT]
Type=1
Class=CTickTackDlg
ControlCount=10
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT_ROW,static,1342308352
Control5=IDC_EDIT_COL,static,1342308352
Control6=IDC_INPUT_ROW,edit,1350631552
Control7=IDC_INPUT_COL,edit,1350631552
Control8=IDC_STATIC,static,1342308352
Control9=IDC_RADIO_X,button,1342373897
Control10=IDC_RADIO_O,button,1342242825

[CLS:CTickTackDlg]
Type=0
HeaderFile=TickTackDlg.h
ImplementationFile=TickTackDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CTickTackDlg
VirtualFilter=dWC

