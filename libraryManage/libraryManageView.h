// libraryManageView.h : interface of the CLibraryManageView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_LIBRARYMANAGEVIEW_H__F2C18A79_CCAE_40F1_8AF6_0941E1125013__INCLUDED_)
#define AFX_LIBRARYMANAGEVIEW_H__F2C18A79_CCAE_40F1_8AF6_0941E1125013__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include "BookBorrow.h"
#include "BookDelete.h"
#include "BookAddDlg.h"
#include "BookSearchDlg.h"
#include "ReaderAddDlg.h"
#include "ReaderDelete.h"
#include "Return.h"
#include "ReaderSearchDlg.h"
#include "ReaderModDlg.h"
#include "ReaderOutDlg.h"
#include "Book.h"


class CLibraryManageView : public CView
{
protected: // create from serialization only
	CLibraryManageView();
	DECLARE_DYNCREATE(CLibraryManageView)

// Attributes
public:
	CBookBorrow*  borr;
	CBookDelete* m_pBookDelete;
	CBookAddDlg* m_pBookAdd;
	CBookSearchDlg* m_pBookSearch;
	CReaderAddDlg* m_pReaderAdd;
	CReaderDelete* m_pReaderDelete;
	CReturn* m_pReturn;
	CReaderSearchDlg* m_pReaderSearch;
	CReaderModDlg* m_pReaderMod;
	CReaderOutDlg* m_pReaderOut;

	CLibraryManageDoc* GetDocument();
	CBook m_book;

// Operations
public:


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLibraryManageView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual BOOL Create(LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, CCreateContext* pContext = NULL);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CLibraryManageView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif



protected:
afx_msg void OnBorrow();
// Generated message map functions
protected:
	//{{AFX_MSG(CLibraryManageView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnMenuReturn();
	afx_msg void OnBookDelete();
	afx_msg void OnBookAdd();
	afx_msg void OnBookSearch();
	afx_msg void OnReaderAdd();
	afx_msg void OnReaderDelete();
	afx_msg void OnReaderModify();
	afx_msg void OnReaderSearche();
	afx_msg void OnReaderOut();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()


};

#ifndef _DEBUG  // debug version in libraryManageView.cpp
inline CLibraryManageDoc* CLibraryManageView::GetDocument()
   { return (CLibraryManageDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LIBRARYMANAGEVIEW_H__F2C18A79_CCAE_40F1_8AF6_0941E1125013__INCLUDED_)
