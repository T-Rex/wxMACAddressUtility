/////////////////////////////////////////////////////////////////////////////
// Name:        wxMACAddressUtilityMainFrame.h
// Purpose:     
// Author:      Volodymir (T-Rex) Tryapichko
// Modified by: 
// Created:     28/08/2009 18:23:29
// RCS-ID:      
// Copyright:   Volodymir (T-Rex) Tryapichko, 2009
// Licence:     
/////////////////////////////////////////////////////////////////////////////

#ifndef _WXMACADDRESSUTILITYMAINFRAME_H_
#define _WXMACADDRESSUTILITYMAINFRAME_H_


/*!
 * Includes
 */

////@begin includes
#include "wx/frame.h"
#include "wx/valgen.h"
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
#define ID_WXMACADDRESSUTILITYMAINFRAME 10000
#define ID_PANEL 10001
#define ID_TEXTCTRL 10002
#define SYMBOL_WXMACADDRESSUTILITYMAINFRAME_STYLE wxCAPTION|wxSYSTEM_MENU|wxCLOSE_BOX
#define SYMBOL_WXMACADDRESSUTILITYMAINFRAME_TITLE _("MAC Address")
#define SYMBOL_WXMACADDRESSUTILITYMAINFRAME_IDNAME ID_WXMACADDRESSUTILITYMAINFRAME
#define SYMBOL_WXMACADDRESSUTILITYMAINFRAME_SIZE wxSize(400, 300)
#define SYMBOL_WXMACADDRESSUTILITYMAINFRAME_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * wxMACAddressUtilityMainFrame class declaration
 */

class wxMACAddressUtilityMainFrame: public wxFrame
{    
    DECLARE_CLASS( wxMACAddressUtilityMainFrame )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    wxMACAddressUtilityMainFrame();
    wxMACAddressUtilityMainFrame( wxWindow* parent, wxWindowID id = SYMBOL_WXMACADDRESSUTILITYMAINFRAME_IDNAME, const wxString& caption = SYMBOL_WXMACADDRESSUTILITYMAINFRAME_TITLE, const wxPoint& pos = SYMBOL_WXMACADDRESSUTILITYMAINFRAME_POSITION, const wxSize& size = SYMBOL_WXMACADDRESSUTILITYMAINFRAME_SIZE, long style = SYMBOL_WXMACADDRESSUTILITYMAINFRAME_STYLE );

    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_WXMACADDRESSUTILITYMAINFRAME_IDNAME, const wxString& caption = SYMBOL_WXMACADDRESSUTILITYMAINFRAME_TITLE, const wxPoint& pos = SYMBOL_WXMACADDRESSUTILITYMAINFRAME_POSITION, const wxSize& size = SYMBOL_WXMACADDRESSUTILITYMAINFRAME_SIZE, long style = SYMBOL_WXMACADDRESSUTILITYMAINFRAME_STYLE );

    /// Destructor
    ~wxMACAddressUtilityMainFrame();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin wxMACAddressUtilityMainFrame event handler declarations

////@end wxMACAddressUtilityMainFrame event handler declarations

////@begin wxMACAddressUtilityMainFrame member function declarations

    wxString GetMACAddress() const { return m_MACAddress ; }
    void SetMACAddress(wxString value) { m_MACAddress = value ; }

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end wxMACAddressUtilityMainFrame member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();

////@begin wxMACAddressUtilityMainFrame member variables
    wxString m_MACAddress;
////@end wxMACAddressUtilityMainFrame member variables
};

#endif
    // _WXMACADDRESSUTILITYMAINFRAME_H_
