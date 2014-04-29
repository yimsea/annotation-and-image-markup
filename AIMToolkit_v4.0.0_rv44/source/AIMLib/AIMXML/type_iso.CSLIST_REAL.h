/*
*  2007 � 2013 Copyright Northwestern University
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/

#ifndef _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CSLIST_REAL
#define _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CSLIST_REAL

#include "type_iso.CANY.h"


namespace AIMXML
{

namespace iso
{	

class CSLIST_REAL : public ::AIMXML::iso::CANY
{
public:
	AIMXML_EXPORT CSLIST_REAL(xercesc::DOMNode* const& init);
	AIMXML_EXPORT CSLIST_REAL(CSLIST_REAL const& init);
	void operator=(CSLIST_REAL const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_iso_altova_CSLIST_REAL); }
	MemberElement<iso::CREAL, _altova_mi_iso_altova_CSLIST_REAL_altova_origin> origin;
	struct origin { typedef Iterator<iso::CREAL> iterator; };
	MemberElement<iso::CQTY, _altova_mi_iso_altova_CSLIST_REAL_altova_scale> scale;
	struct scale { typedef Iterator<iso::CQTY> iterator; };
	MemberElement<iso::CINT, _altova_mi_iso_altova_CSLIST_REAL_altova_digit> digit;
	struct digit { typedef Iterator<iso::CINT> iterator; };
	AIMXML_EXPORT void SetXsiType();
};



} // namespace iso

}	// namespace AIMXML

#endif // _ALTOVA_INCLUDED_AIMXML_ALTOVA_iso_ALTOVA_CSLIST_REAL