// ReaderDelete.cpp : implementation file
//

#include "stdafx.h"
#include "libraryManage.h"
#include "ReaderDelete.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CReaderDelete dialog


CReaderDelete::CReaderDelete(CWnd* pParent /*=NULL*/)
	: CDialog(CReaderDelete::IDD, pParent)
{
	//{{AFX_DATA_INIT(CReaderDelete)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CReaderDelete::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReaderDelete)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CReaderDelete, CDialog)
	//{{AFX_MSG_MAP(CReaderDelete)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReaderDelete message handlers
