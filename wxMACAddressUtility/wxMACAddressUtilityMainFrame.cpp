/////////////////////////////////////////////////////////////////////////////
// Name:        wxMACAddressUtilityMainFrame.cpp
// Purpose:     
// Author:      Volodymir (T-Rex) Tryapichko
// Modified by: 
// Created:     28/08/2009 18:23:29
// RCS-ID:      
// Copyright:   Volodymir (T-Rex) Tryapichko, 2009
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// For compilers that support precompilation, includes "wx/wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include "wx/wx.h"
#endif

////@begin includes
////@end includes

#include "wxMACAddressUtilityMainFrame.h"
#include "wxMACAddressUtility.h"

////@begin XPM images
////@end XPM images


/*
 * wxMACAddressUtilityMainFrame type definition
 */

IMPLEMENT_CLASS( wxMACAddressUtilityMainFrame, wxFrame )


/*
 * wxMACAddressUtilityMainFrame event table definition
 */

BEGIN_EVENT_TABLE( wxMACAddressUtilityMainFrame, wxFrame )

////@begin wxMACAddressUtilityMainFrame event table entries
////@end wxMACAddressUtilityMainFrame event table entries

END_EVENT_TABLE()


/*
 * wxMACAddressUtilityMainFrame constructors
 */

wxMACAddressUtilityMainFrame::wxMACAddressUtilityMainFrame()
{
    Init();
}

wxMACAddressUtilityMainFrame::wxMACAddressUtilityMainFrame( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
    Init();
    Create( parent, id, caption, pos, size, style );
}


/*
 * wxMACAddressUtilityMainFrame creator
 */

bool wxMACAddressUtilityMainFrame::Create( wxWindow* parent, wxWindowID id, const wxString& caption, const wxPoint& pos, const wxSize& size, long style )
{
////@begin wxMACAddressUtilityMainFrame creation
    SetExtraStyle(wxWS_EX_VALIDATE_RECURSIVELY);
    wxFrame::Create( parent, id, caption, pos, size, style );

    CreateControls();
    if (GetSizer())
    {
        GetSizer()->SetSizeHints(this);
    }
    Centre();
////@end wxMACAddressUtilityMainFrame creation
    return true;
}


/*
 * wxMACAddressUtilityMainFrame destructor
 */

wxMACAddressUtilityMainFrame::~wxMACAddressUtilityMainFrame()
{
////@begin wxMACAddressUtilityMainFrame destruction
////@end wxMACAddressUtilityMainFrame destruction
}


/*
 * Member initialisation
 */

void wxMACAddressUtilityMainFrame::Init()
{
////@begin wxMACAddressUtilityMainFrame member initialisation
////@end wxMACAddressUtilityMainFrame member initialisation
}


/*
 * Control creation for wxMACAddressUtilityMainFrame
 */

void wxMACAddressUtilityMainFrame::CreateControls()
{    
////@begin wxMACAddressUtilityMainFrame content construction
    wxMACAddressUtilityMainFrame* itemFrame1 = this;

    wxBoxSizer* itemBoxSizer2 = new wxBoxSizer(wxVERTICAL);
    itemFrame1->SetSizer(itemBoxSizer2);

    wxPanel* itemPanel3 = new wxPanel( itemFrame1, ID_PANEL, wxDefaultPosition, wxDefaultSize, wxNO_BORDER|wxTAB_TRAVERSAL );
    itemBoxSizer2->Add(itemPanel3, 1, wxGROW, 0);

    wxBoxSizer* itemBoxSizer4 = new wxBoxSizer(wxVERTICAL);
    itemPanel3->SetSizer(itemBoxSizer4);

    wxTextCtrl* itemTextCtrl5 = new wxTextCtrl( itemPanel3, ID_TEXTCTRL, wxEmptyString, wxDefaultPosition, wxSize(200, -1), wxTE_READONLY );
    itemBoxSizer4->Add(itemTextCtrl5, 0, wxGROW|wxALL, 5);

    // Set validators
    itemTextCtrl5->SetValidator( wxGenericValidator(& m_MACAddress) );
////@end wxMACAddressUtilityMainFrame content construction
	m_MACAddress = wxMACAddressUtility::GetMACAddress();
	TransferDataToWindow();
}


/*
 * Should we show tooltips?
 */

bool wxMACAddressUtilityMainFrame::ShowToolTips()
{
    return true;
}

/*
 * Get bitmap resources
 */

wxBitmap wxMACAddressUtilityMainFrame::GetBitmapResource( const wxString& name )
{
    // Bitmap retrieval
////@begin wxMACAddressUtilityMainFrame bitmap retrieval
    wxUnusedVar(name);
    return wxNullBitmap;
////@end wxMACAddressUtilityMainFrame bitmap retrieval
}

/*
 * Get icon resources
 */

wxIcon wxMACAddressUtilityMainFrame::GetIconResource( const wxString& name )
{
    // Icon retrieval
////@begin wxMACAddressUtilityMainFrame icon retrieval
    wxUnusedVar(name);
    return wxNullIcon;
////@end wxMACAddressUtilityMainFrame icon retrieval
}
