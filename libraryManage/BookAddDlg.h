#if !defined(AFX_BOOKADDDLG_H__15785F88_6DE5_43CE_AEA4_082F15986262__INCLUDED_)
#define AFX_BOOKADDDLG_H__15785F88_6DE5_43CE_AEA4_082F15986262__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BookAddDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBookAddDlg dialog

class CBookAddDlg : public CDialog
{
// Construction
public:
	CBookAddDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CBookAddDlg)
	enum { IDD = IDD_BOOK_ADD };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBookAddDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CBookAddDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOOKADDDLG_H__15785F88_6DE5_43CE_AEA4_082F15986262__INCLUDED_)
