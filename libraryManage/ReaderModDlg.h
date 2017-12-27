#if !defined(AFX_READERMODDLG_H__F4427B65_F89E_409F_97AF_F65AEA6A5405__INCLUDED_)
#define AFX_READERMODDLG_H__F4427B65_F89E_409F_97AF_F65AEA6A5405__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ReaderModDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CReaderModDlg dialog

class CReaderModDlg : public CDialog
{
// Construction
public:
	CReaderModDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CReaderModDlg)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CReaderModDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CReaderModDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_READERMODDLG_H__F4427B65_F89E_409F_97AF_F65AEA6A5405__INCLUDED_)
