// ReaderSearchDlg1.cpp : implementation file
//

#include "stdafx.h"
#include "libraryManage.h"
#include "ReaderSearchDlg1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CReaderSearchDlg dialog


CReaderSearchDlg::CReaderSearchDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CReaderSearchDlg::IDD, pParent)
{
	EnableAutomation();

	//{{AFX_DATA_INIT(CReaderSearchDlg)
	m_reader_card = _T("");
	m_reader_id = _T("");
	//}}AFX_DATA_INIT
}


void CReaderSearchDlg::OnFinalRelease()
{
	// When the last reference for an automation object is released
	// OnFinalRelease is called.  The base class will automatically
	// deletes the object.  Add additional cleanup required for your
	// object before calling the base class.

	CDialog::OnFinalRelease();
}

void CReaderSearchDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReaderSearchDlg)
	DDX_Text(pDX, IDC_EDIT1, m_reader_card);
	DDX_Text(pDX, IDC_EDIT3, m_reader_id);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CReaderSearchDlg, CDialog)
	//{{AFX_MSG_MAP(CReaderSearchDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CReaderSearchDlg, CDialog)
	//{{AFX_DISPATCH_MAP(CReaderSearchDlg)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_DISPATCH_MAP
END_DISPATCH_MAP()

// Note: we add support for IID_IReaderSearchDlg to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the 
//  dispinterface in the .ODL file.

// {A99699F9-A790-47FA-8232-59C59B1A197D}
static const IID IID_IReaderSearchDlg =
{ 0xa99699f9, 0xa790, 0x47fa, { 0x82, 0x32, 0x59, 0xc5, 0x9b, 0x1a, 0x19, 0x7d } };

BEGIN_INTERFACE_MAP(CReaderSearchDlg, CDialog)
	INTERFACE_PART(CReaderSearchDlg, IID_IReaderSearchDlg, Dispatch)
END_INTERFACE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReaderSearchDlg message handlers
