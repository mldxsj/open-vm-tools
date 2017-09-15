/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *
 */

#ifndef CDataClassInstanceCollectionDoc_h_
#define CDataClassInstanceCollectionDoc_h_

namespace Caf {

/// A simple container for objects of type DataClassInstanceCollection
class SCHEMATYPESDOC_LINKAGE CDataClassInstanceCollectionDoc {
public:
	CDataClassInstanceCollectionDoc();
	virtual ~CDataClassInstanceCollectionDoc();

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const std::deque<SmartPtrCDataClassInstanceDoc> dataClassInstanceCollection = std::deque<SmartPtrCDataClassInstanceDoc>());

public:
	/// Accessor for the DataClassInstance
	std::deque<SmartPtrCDataClassInstanceDoc> getDataClassInstanceCollection() const;

private:
	bool _isInitialized;

	std::deque<SmartPtrCDataClassInstanceDoc> _dataClassInstanceCollection;

private:
	CAF_CM_DECLARE_NOCOPY(CDataClassInstanceCollectionDoc);
};

CAF_DECLARE_SMART_POINTER(CDataClassInstanceCollectionDoc);

}

#endif
