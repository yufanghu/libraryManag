// libraryManageView.cpp : implementation of the CLibraryManageView class
//

#include "stdafx.h"
#include "libraryManage.h"

#include "libraryManageDoc.h"
#include "libraryManageView.h"

#include "BookBorrow.h"
#include "resource.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLibraryManageView

IMPLEMENT_DYNCREATE(CLibraryManageView, CView)

BEGIN_MESSAGE_MAP(CLibraryManageView, CView)
	//{{AFX_MSG_MAP(CLibraryManageView)
	ON_WM_CREATE()
	ON_WM_SIZE()
	ON_COMMAND(ID_DELETE, OnBookDelete)
	ON_COMMAND(ID_ADD, OnBookAdd)
	ON_COMMAND(ID_SEARCH, OnBookSearch)
	ON_COMMAND(ID_READER_ADD, OnReaderAdd)
	ON_COMMAND(ID_READER_DELETE, OnReaderDelete)
	ON_COMMAND(ID_READER_MODIFY, OnReaderModify)
	ON_COMMAND(ID_READER_SEARCHE, OnReaderSearche)
	ON_COMMAND(ID_READER_OUT, OnReaderOut)
	//}}AFX_MSG_MAP
	ON_COMMAND(ID_MENU_BORROW, OnBorrow)
	ON_COMMAND(ID_MENU_RETURN, OnMenuReturn)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLibraryManageView construction/destruction

CLibraryManageView::CLibraryManageView()
{
	// TODO: add construction code here
	m_pReturn = NULL;
	borr = NULL;
	m_pBookDelete = NULL;
	m_pBookAdd = NULL;
	m_pBookSearch = NULL;
	m_pReaderAdd = NULL;
	m_pReaderDelete = NULL;
	m_pReaderSearch = NULL;
	m_pReaderMod = NULL;
	m_pReaderOut = NULL;
	m_book.getAllData();
	m_reader.getAllData();
	

}

CLibraryManageView::~CLibraryManageView()
{
	m_book.saveAllData();
	
}

BOOL CLibraryManageView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CLibraryManageView drawing

void CLibraryManageView::OnDraw(CDC* pDC)
{
	CLibraryManageDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CRect rect;
	GetClientRect(rect);

	pDC->FillSolidRect(rect, RGB(240,240,240));
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CLibraryManageView diagnostics

#ifdef _DEBUG
void CLibraryManageView::AssertValid() const
{
	CView::AssertValid();
}

void CLibraryManageView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CLibraryManageDoc* CLibraryManageView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLibraryManageDoc)));
	return (CLibraryManageDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLibraryManageView message handlers

void CLibraryManageView::OnBorrow()
{
	
	borr->CenterWindow(this);
	borr->ShowWindow(SW_SHOW);
	m_pReturn->ShowWindow(SW_HIDE);

	
}

BOOL CLibraryManageView::Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CWnd::Create(lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, pContext);
}

int CLibraryManageView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	// TODO: Add your specialized creation code here
	
	if ( borr == NULL)
	{
		borr = new CBookBorrow();
		borr->Create(IDD_BORROW, this);
		//borr->CenterWindow(this);
		borr->ShowWindow(SW_SHOW);
		
	
	}
 	if (m_pReturn == NULL)
 	{
 		m_pReturn = new CReturn();
 		m_pReturn->Create(IDD_RETURN,this);
 		m_pReturn->ShowWindow(SW_HIDE);
 	}
	if ( m_pBookDelete == NULL)
	{
		m_pBookDelete = new CBookDelete();
		m_pBookDelete->Create(IDD_BOOK_DELETE,this);
		m_pBookDelete->ShowWindow(SW_HIDE);
	}
	if ( m_pBookAdd == NULL)
	{
		m_pBookAdd = new CBookAdd();
		m_pBookAdd->Create(IDD_BOOK_ADD,this);
		m_pBookAdd->ShowWindow(SW_HIDE);
	}
 	if ( m_pBookSearch == NULL)
 	{
 		m_pBookSearch = new CBookSearchDlg();
 		m_pBookSearch->Create(IDD_BOOK_SEARCHE,this);
 		m_pBookSearch->ShowWindow(SW_HIDE);
 	}
 	if ( m_pReaderAdd == NULL)
 	{
 		m_pReaderAdd = new CReadAdd();
 		m_pReaderAdd->Create(IDD_READER_ADD,this);
 		m_pReaderAdd->ShowWindow(SW_HIDE);
 	}
 	if ( m_pReaderDelete == NULL)
 	{
 		m_pReaderDelete = new CReaderDeleteDlg();
 		m_pReaderDelete->Create(IDD_READER_DELETE,this);
 		m_pReaderDelete->ShowWindow(SW_HIDE);
 	}
   	if ( m_pReaderMod == NULL)
  	{
		m_pReaderMod = new CReaderModDlg();
		m_pReaderMod->Create(IDD_DIALOG1,this);
 		m_pReaderMod->ShowWindow(SW_HIDE);
   	}
 	if ( m_pReaderSearch == NULL)
 	{
 		m_pReaderSearch = new CReaderSearchDlg();
 		m_pReaderSearch->Create(IDD_READER_SEARCH,this);
 		m_pReaderSearch->ShowWindow(SW_HIDE);
 	}
	if ( m_pReaderOut == NULL)
	{
		m_pReaderOut = new CReaderOutDlg();
		m_pReaderOut->Create(IDD_DIALOG2,this);
		m_pReaderOut->ShowWindow(SW_HIDE);
	}
 
 

//	borr->CenterWindow(this);
	
	return 0;
}

void CLibraryManageView::OnSize(UINT nType, int cx, int cy) 
{
	CView::OnSize(nType, cx, cy);
	// TODO: Add your message handler code here
	
}

void CLibraryManageView::OnMenuReturn() 
{
	// TODO: Add your command handler code here
 	
 	m_pReturn->ShowWindow(SW_SHOW);
	//m_pReturn->CenterWindow(this);
 	borr->ShowWindow(SW_HIDE);
	m_pBookAdd->ShowWindow(SW_HIDE);
	m_pBookDelete->ShowWindow(SW_HIDE);
	m_pBookSearch->ShowWindow(SW_HIDE);
	m_pReaderAdd->ShowWindow(SW_HIDE);
	m_pReaderDelete->ShowWindow(SW_HIDE);
	m_pReaderMod->ShowWindow(SW_HIDE);
	m_pReaderSearch->ShowWindow(SW_HIDE);
	m_pReaderOut->ShowWindow(SW_HIDE);
}

void CLibraryManageView::OnBookDelete() 
{
	// TODO: Add your command handler code here
	m_pBookDelete->ShowWindow(SW_HIDE);
	m_pReturn->ShowWindow(SW_HIDE);
 	borr->ShowWindow(SW_HIDE);
	m_pBookAdd->ShowWindow(SW_HIDE);
	m_pBookDelete->ShowWindow(SW_SHOW);
	m_pBookSearch->ShowWindow(SW_HIDE);
	m_pReaderAdd->ShowWindow(SW_HIDE);
	m_pReaderDelete->ShowWindow(SW_HIDE);
	m_pReaderMod->ShowWindow(SW_HIDE);
	m_pReaderSearch->ShowWindow(SW_HIDE);
	m_pReaderOut->ShowWindow(SW_HIDE);
	
}

void CLibraryManageView::OnBookAdd() 
{
	// TODO: Add your command handler code here
	m_pBookDelete->ShowWindow(SW_HIDE);
	m_pReturn->ShowWindow(SW_HIDE);
	borr->ShowWindow(SW_HIDE);
	m_pBookAdd->ShowWindow(SW_SHOW);
	m_pBookDelete->ShowWindow(SW_HIDE);
	m_pBookSearch->ShowWindow(SW_HIDE);
	m_pReaderAdd->ShowWindow(SW_HIDE);
	m_pReaderDelete->ShowWindow(SW_HIDE);
	m_pReaderMod->ShowWindow(SW_HIDE);
	m_pReaderSearch->ShowWindow(SW_HIDE);
	m_pReaderOut->ShowWindow(SW_HIDE);
}

void CLibraryManageView::OnBookSearch() 
{
	// TODO: Add your command handler code here
	m_pBookDelete->ShowWindow(SW_HIDE);
	m_pReturn->ShowWindow(SW_HIDE);
	borr->ShowWindow(SW_HIDE);
	m_pBookAdd->ShowWindow(SW_HIDE);
	m_pBookDelete->ShowWindow(SW_HIDE);
	m_pBookSearch->ShowWindow(SW_SHOW);
	m_pReaderAdd->ShowWindow(SW_HIDE);
	m_pReaderDelete->ShowWindow(SW_HIDE);
	m_pReaderMod->ShowWindow(SW_HIDE);
	m_pReaderSearch->ShowWindow(SW_HIDE);
	m_pReaderOut->ShowWindow(SW_SHOW);
}

void CLibraryManageView::OnReaderAdd() 
{
	// TODO: Add your command handler code here
	m_pBookDelete->ShowWindow(SW_HIDE);
	m_pReturn->ShowWindow(SW_HIDE);
	borr->ShowWindow(SW_HIDE);
	m_pBookAdd->ShowWindow(SW_HIDE);
	m_pBookDelete->ShowWindow(SW_HIDE);
	m_pBookSearch->ShowWindow(SW_HIDE);
	m_pReaderAdd->ShowWindow(SW_SHOW);
	m_pReaderDelete->ShowWindow(SW_HIDE);
	m_pReaderMod->ShowWindow(SW_HIDE);
	m_pReaderSearch->ShowWindow(SW_HIDE);
	m_pReaderOut->ShowWindow(SW_SHOW);
}

void CLibraryManageView::OnReaderDelete() 
{
	// TODO: Add your command handler code here
	m_pBookDelete->ShowWindow(SW_HIDE);
	m_pReturn->ShowWindow(SW_HIDE);
	borr->ShowWindow(SW_HIDE);
	m_pBookAdd->ShowWindow(SW_HIDE);
	m_pBookDelete->ShowWindow(SW_HIDE);
	m_pBookSearch->ShowWindow(SW_HIDE);
	m_pReaderAdd->ShowWindow(SW_HIDE);
	m_pReaderDelete->ShowWindow(SW_SHOW);
	m_pReaderMod->ShowWindow(SW_HIDE);
	m_pReaderSearch->ShowWindow(SW_HIDE);
	m_pReaderOut->ShowWindow(SW_SHOW);
}

void CLibraryManageView::OnReaderModify() 
{
	// TODO: Add your command handler code here
	m_pBookDelete->ShowWindow(SW_HIDE);
	m_pReturn->ShowWindow(SW_HIDE);
	borr->ShowWindow(SW_HIDE);
	m_pBookAdd->ShowWindow(SW_HIDE);
	m_pBookDelete->ShowWindow(SW_HIDE);
	m_pBookSearch->ShowWindow(SW_HIDE);
	m_pReaderAdd->ShowWindow(SW_HIDE);
	m_pReaderDelete->ShowWindow(SW_HIDE);
	m_pReaderMod->ShowWindow(SW_SHOW);
	m_pReaderSearch->ShowWindow(SW_HIDE);
	m_pReaderOut->ShowWindow(SW_SHOW);
	
}

void CLibraryManageView::OnReaderSearche() 
{
	// TODO: Add your command handler code here
	m_pBookDelete->ShowWindow(SW_HIDE);
	m_pReturn->ShowWindow(SW_HIDE);
	borr->ShowWindow(SW_HIDE);
	m_pBookAdd->ShowWindow(SW_HIDE);
	m_pBookDelete->ShowWindow(SW_HIDE);
	m_pBookSearch->ShowWindow(SW_HIDE);
	m_pReaderAdd->ShowWindow(SW_HIDE);
	m_pReaderDelete->ShowWindow(SW_HIDE);
	m_pReaderMod->ShowWindow(SW_HIDE);
	m_pReaderSearch->ShowWindow(SW_SHOW);
	m_pReaderOut->ShowWindow(SW_SHOW);
	
}

void CLibraryManageView::OnReaderOut() 
{
	// TODO: Add your command handler code here
	m_pBookDelete->ShowWindow(SW_HIDE);
	m_pReturn->ShowWindow(SW_HIDE);
	borr->ShowWindow(SW_HIDE);
	m_pBookAdd->ShowWindow(SW_HIDE);
	m_pBookDelete->ShowWindow(SW_HIDE);
	m_pBookSearch->ShowWindow(SW_HIDE);
	m_pReaderAdd->ShowWindow(SW_HIDE);
	m_pReaderDelete->ShowWindow(SW_HIDE);
	m_pReaderMod->ShowWindow(SW_HIDE);
	m_pReaderSearch->ShowWindow(SW_HIDE);
	m_pReaderOut->ShowWindow(SW_SHOW);
}
