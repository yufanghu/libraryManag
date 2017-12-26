; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CReturn
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "libraryManage.h"
LastPage=0

ClassCount=8
Class1=CLibraryManageApp
Class2=CLibraryManageDoc
Class3=CLibraryManageView
Class4=CMainFrame

ResourceCount=9
Resource1=IDR_MAINFRAME
Resource2=IDD_ABOUTBOX
Class5=CAboutDlg
Resource3=IDD_BORROW
Resource4=IDD_BOOK_SEARCHE
Class6=CReturn
Class7=CBookBorrow
Resource5=IDD_BOOK_DELETE
Resource6=IDD_BOOK_ADD
Resource7=IDD_RETURN
Resource8=IDD_READER_ADD
Class8=CBookDelete
Resource9=IDD_READER_DELETE

[CLS:CLibraryManageApp]
Type=0
HeaderFile=libraryManage.h
ImplementationFile=libraryManage.cpp
Filter=N

[CLS:CLibraryManageDoc]
Type=0
HeaderFile=libraryManageDoc.h
ImplementationFile=libraryManageDoc.cpp
Filter=N

[CLS:CLibraryManageView]
Type=0
HeaderFile=libraryManageView.h
ImplementationFile=libraryManageView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=ID_MENU_BORROW




[CLS:CAboutDlg]
Type=0
HeaderFile=libraryManage.cpp
ImplementationFile=libraryManage.cpp
Filter=D
LastObject=CAboutDlg

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
Command1=ID_MENU_BORROW
Command2=ID_MENU_BORROW
Command3=ID_DELETE
Command4=ID_ADD
Command5=ID_SEARCH
Command6=ID_READER_ADD
Command7=ID_READER_DELETE
Command8=ID_READER_DELETE
Command9=ID_READER_SEARCHE
Command10=ID_READER_OUT
Command11=ID_APP_ABOUT
CommandCount=11

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_UNDO
Command5=ID_EDIT_CUT
Command6=ID_EDIT_COPY
Command7=ID_EDIT_PASTE
Command8=ID_EDIT_UNDO
Command9=ID_EDIT_CUT
Command10=ID_EDIT_COPY
Command11=ID_EDIT_PASTE
Command12=ID_NEXT_PANE
Command13=ID_PREV_PANE
CommandCount=13

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_FILE_PRINT
Command8=ID_APP_ABOUT
Command9=ID_DELETE
CommandCount=9

[DLG:IDD_BORROW]
Type=1
Class=CBookBorrow
ControlCount=15
Control1=IDC_STATIC,static,1342308352
Control2=IDC_EDIT1,edit,1350631552
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT2,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT3,edit,1350631552
Control7=IDC_STATIC,static,1342308352
Control8=IDC_EDIT4,edit,1350631552
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_EDIT6,edit,1350633600
Control12=IDC_DATETIMEPICKER1,SysDateTimePick32,1342242864
Control13=IDC_STATIC,static,1342308352
Control14=IDC_BUTTON1,button,1342242816
Control15=IDC_BUTTON2,button,1342242816

[DLG:IDD_RETURN]
Type=1
Class=CReturn
ControlCount=14
Control1=IDC_STATIC,static,1342308352
Control2=IDC_EDIT1,edit,1350631552
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT2,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT7,edit,1350633600
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_EDIT3,edit,1350631552
Control11=IDC_STATIC,static,1342308352
Control12=IDC_DATETIMEPICKER1,SysDateTimePick32,1342242848
Control13=IDC_BUTTON1,button,1342242816
Control14=IDC_BUTTON2,button,1342242816

[CLS:CBorrow]
Type=0
HeaderFile=Borrow.h
ImplementationFile=Borrow.cpp
BaseClass=CDialog

[CLS:CReturn]
Type=0
HeaderFile=Return.h
ImplementationFile=Return.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT1
VirtualFilter=dWC

[CLS:CBookBorrow]
Type=0
HeaderFile=BookBorrow.h
ImplementationFile=BookBorrow.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_EDIT6

[DLG:IDD_READER_ADD]
Type=1
Class=?
ControlCount=10
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT2,edit,1350631552
Control7=IDC_STATIC,static,1342308352
Control8=IDC_EDIT3,edit,1350631552
Control9=IDC_LIST1,listbox,1352728835
Control10=IDC_STATIC,static,1342308352

[DLG:IDD_BOOK_ADD]
Type=1
Class=?
ControlCount=20
Control1=IDC_STATIC,static,1342308352
Control2=IDC_EDIT1,edit,1350631552
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT2,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT3,edit,1350631552
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_EDIT4,edit,1350631552
Control10=IDC_STATIC,static,1342308352
Control11=IDC_EDIT5,edit,1350633600
Control12=IDC_DATETIMEPICKER1,SysDateTimePick32,1342242848
Control13=IDC_STATIC,static,1342308352
Control14=IDC_EDIT6,edit,1350631552
Control15=IDC_STATIC,static,1342308352
Control16=IDC_STATIC,static,1342308352
Control17=IDC_STATIC,static,1342308352
Control18=IDC_STATIC,static,1342308352
Control19=IDC_EDIT7,edit,1350633600
Control20=IDC_STATIC,static,1342308352

[DLG:IDD_BOOK_DELETE]
Type=1
Class=CBookDelete
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT2,edit,1350631552
Control7=IDC_STATIC,static,1342308352
Control8=IDC_EDIT3,edit,1350633600

[DLG:IDD_BOOK_SEARCHE]
Type=1
Class=?
ControlCount=13
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT2,edit,1350631552
Control7=IDC_STATIC,static,1342308352
Control8=IDC_EDIT3,edit,1350631552
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_EDIT4,edit,1350631552
Control12=IDC_STATIC,static,1342308352
Control13=IDC_EDIT5,edit,1350633600

[DLG:IDD_READER_DELETE]
Type=1
Class=?
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_EDIT2,edit,1350633600

[CLS:CBookDelete]
Type=0
HeaderFile=BookDelete.h
ImplementationFile=BookDelete.cpp
BaseClass=CDialog
Filter=D

