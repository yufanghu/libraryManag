#if !defined(AFX_READEROUTDLG_H__10B62700_2D63_4215_B4F7_9BD5E2318D09__INCLUDED_)
#define AFX_READEROUTDLG_H__10B62700_2D63_4215_B4F7_9BD5E2318D09__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ReaderOutDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CReaderOutDlg dialog

class CReaderOutDlg : public CDialog
{
// Construction
public:
	CReaderOutDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CReaderOutDlg)
	enum { IDD = IDD_DIALOG2 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReaderOutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CReaderOutDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_READEROUTDLG_H__10B62700_2D63_4215_B4F7_9BD5E2318D09__INCLUDED_)
