/////////////////////////////////////////////////////////////////////////////
// Name:        wxMACAddressUtilityApp.h
// Purpose:     
// Author:      Volodymir (T-Rex) Tryapichko
// Modified by: 
// Created:     28/08/2009 18:23:02
// RCS-ID:      
// Copyright:   Volodymir (T-Rex) Tryapichko, 2009
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _WXMACADDRESSUTILITYAPP_H_
#define _WXMACADDRESSUTILITYAPP_H_


/*!
 * Includes
 */

////@begin includes
#include "wx/image.h"
#include "wxMACAddressUtilityMainFrame.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
////@end control identifiers

/*!
 * wxMACAddressUtilityApp class declaration
 */

class wxMACAddressUtilityApp: public wxApp
{    
    DECLARE_CLASS( wxMACAddressUtilityApp )
    DECLARE_EVENT_TABLE()

public:
    /// Constructor
    wxMACAddressUtilityApp();

    void Init();

    /// Initialises the application
    virtual bool OnInit();

    /// Called on exit
    virtual int OnExit();

////@begin wxMACAddressUtilityApp event handler declarations

////@end wxMACAddressUtilityApp event handler declarations

////@begin wxMACAddressUtilityApp member function declarations

////@end wxMACAddressUtilityApp member function declarations

////@begin wxMACAddressUtilityApp member variables
////@end wxMACAddressUtilityApp member variables
};

/*!
 * Application instance declaration 
 */

////@begin declare app
DECLARE_APP(wxMACAddressUtilityApp)
////@end declare app

#endif
    // _WXMACADDRESSUTILITYAPP_H_
