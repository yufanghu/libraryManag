// ReadAdd.cpp : implementation file
//

#include "stdafx.h"
#include "libraryManage.h"
#include "ReadAdd.h"
#include "Reader.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif



/////////////////////////////////////////////////////////////////////////////
// CReadAdd dialog


CReadAdd::CReadAdd(CWnd* pParent /*=NULL*/)
	: CDialog(CReadAdd::IDD, pParent)
{
	//{{AFX_DATA_INIT(CReadAdd)
	m_reader_name = _T("");
	m_reader_sex = _T("");
	m_reader_card = _T("");
	m_reader_id = _T("");
	//}}AFX_DATA_INIT
}


void CReadAdd::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CReadAdd)
	DDX_Text(pDX, IDC_EDIT1, m_reader_name);
	DDX_Text(pDX, IDC_EDIT2, m_reader_sex);
	DDX_Text(pDX, IDC_EDIT3, m_reader_card);
	DDX_LBString(pDX, IDC_LIST1, m_reader_id);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CReadAdd, CDialog)
	//{{AFX_MSG_MAP(CReadAdd)
	ON_BN_CLICKED(IDOK, OnReaderAdd)
	ON_BN_CLICKED(IDCANCEL, OnReaderClear)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CReadAdd message handlers

void CReadAdd::OnReaderAdd() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	struct ReaderInfo rInfo;
	rInfo.strName = m_reader_name;
	rInfo.strId = m_reader_id;
	rInfo.isReturn = "1";
	rInfo.strBackDate="";
	rInfo.strBookName = "";
	rInfo.strCompany = "";
	rInfo.strBorrowDate = "";
	
	CReader reader;
	reader.addReader(rInfo);
	
}

void CReadAdd::OnReaderClear() 
{
	// TODO: Add your control notification handler code here
	m_reader_name = _T("");
	m_reader_sex = _T("");
	m_reader_card = _T("");
	m_reader_id = _T("");
}
