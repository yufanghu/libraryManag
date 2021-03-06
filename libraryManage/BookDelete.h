#if !defined(AFX_BOOKDELETE_H__1EF19A9A_A24A_4CB8_84DD_39E5B0E48EC1__INCLUDED_)
#define AFX_BOOKDELETE_H__1EF19A9A_A24A_4CB8_84DD_39E5B0E48EC1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BookDelete.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBookDelete dialog

#include "Book.h"
class CBookDelete : public CDialog
{
// Construction
public:
	CBookDelete(CWnd* pParent = NULL);   // standard constructor
	CBook m_book;

// Dialog Data
	//{{AFX_DATA(CBookDelete)
	enum { IDD = IDD_BOOK_DELETE };
	CString	m_book_id;
	CString	m_book_name;
	CString	m_book_info;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBookDelete)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CBookDelete)
	afx_msg void OnDelete();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOOKDELETE_H__1EF19A9A_A24A_4CB8_84DD_39E5B0E48EC1__INCLUDED_)
