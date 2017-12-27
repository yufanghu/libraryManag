#if !defined(AFX_BOOKBORROW_H__A59F36A8_3647_4263_8450_1CD0E85958FA__INCLUDED_)
#define AFX_BOOKBORROW_H__A59F36A8_3647_4263_8450_1CD0E85958FA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BookBorrow.h : header file
//
#include "Book.h"
#include "Reader.h"
/////////////////////////////////////////////////////////////////////////////
// CBookBorrow dialog

class CBookBorrow : public CDialog
{
// Construction
public:
	CBookBorrow(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CBookBorrow)
	enum { IDD = IDD_BORROW };
	CButton	m_clear;
	CButton	m_sure;
	CString	m_borrow_reader;
	CString	m_borrow_id;
	CString	m_borrow_book;
	CString	m_back_date;
	CString	m_borrow_company;
	CTime	m_borrow_date;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBookBorrow)
	public:
	virtual int DoModal();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

	CBook  m_book;
	CReader m_reader;
	struct BorrowInfo m_borrowInfo;
// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CBookBorrow)
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnPaint();
	afx_msg void OnBookBorrow();
	afx_msg void OnBorrowClear();
	afx_msg void OnDatetimechangeDatetimepicker1(NMHDR* pNMHDR, LRESULT* pResult);
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOOKBORROW_H__A59F36A8_3647_4263_8450_1CD0E85958FA__INCLUDED_)
