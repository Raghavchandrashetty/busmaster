/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * \file      ErrHandlerDlg.h
 * \brief     This file contain the definition of CErrHandlerDlg class
 * \author    Ratnadip Choudhury
 * \copyright Copyright (c) 2011, Robert Bosch Engineering and Business Solutions. All rights reserved.
 *
 * This file contain the definition of CErrHandlerDlg class
 */
#if !defined(AFX_ERRHANDLERDLGLIN_H__38C4D237_3752_11D7_80A0_0010B599CE39__INCLUDED_)
#define AFX_ERRHANDLERDLGLIN_H__38C4D237_3752_11D7_80A0_0010B599CE39__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ErrHandlerDlg.h : header file
//

#include "NodeSimEx_resource.h"
/////////////////////////////////////////////////////////////////////////////
// CErrHandlerDlg dialog

class CErrHandlerDlgLIN : public CDialog
{
    // Construction
public:
    CStringArray m_omStrArrayErrorHandler;
    // standard constructor
    CErrHandlerDlgLIN(CFunctionEditorDoc* pDoc, CWnd* pParent = NULL,BOOL bIsDelete = FALSE);

    // Dialog Data
    //{{AFX_DATA(CErrHandlerDlg)
    enum { IDD = IDD_DLG_ERR_HANDLER_LIN };
    //}}AFX_DATA


    // Overrides
    // ClassWizard generated virtual function overrides
    //{{AFX_VIRTUAL(CErrHandlerDlg)
protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
    //}}AFX_VIRTUAL

    // Implementation
protected:

    // Generated message map functions
    //{{AFX_MSG(CErrHandlerDlg)
    virtual BOOL OnInitDialog();
    afx_msg void OnCbtnErrorCancel();
    afx_msg void OnCbtnErrorOk();
    //}}AFX_MSG
    DECLARE_MESSAGE_MAP()
private:
    CFunctionEditorDoc* m_pDoc;
    BOOL m_bIsDelete;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ERRHANDLERDLG_H__38C4D237_3752_11D7_80A0_0010B599CE39__INCLUDED_)
