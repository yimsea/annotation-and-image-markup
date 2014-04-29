/*
*  2010 � 2012 Copyright Northwestern University and Stanford University 
*
*  Distributed under the OSI-approved BSD 3-Clause License.
*  See http://ncip.github.com/annotation-and-image-markup/LICENSE.txt for details.
*/



package edu.stanford.isis.atb.domain.template;

/**
 * @author Vitaliy Semeshko
 */
public interface Persistent {

	public Identifier getUid();
	
	public String getFileName();
	
}