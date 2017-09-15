/*
 *  Author: bwilliams
 *  Created: Nov 16, 2015
 *
 *  Copyright (c) 2015 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 */

#ifndef CPersistenceDoc_h_
#define CPersistenceDoc_h_

namespace Caf {

/// A simple container for objects of type PersistenceEnvelope
class PERSISTENCEDOC_LINKAGE CPersistenceDoc {
public:
	CPersistenceDoc();
	virtual ~CPersistenceDoc();

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const SmartPtrCLocalSecurityDoc& localSecurity = SmartPtrCLocalSecurityDoc(),
		const SmartPtrCRemoteSecurityCollectionDoc& remoteSecurityCollection = SmartPtrCRemoteSecurityCollectionDoc(),
		const SmartPtrCPersistenceProtocolCollectionDoc& persistenceProtocolCollection = SmartPtrCPersistenceProtocolCollectionDoc(),
		const std::string version = "1.0");

public:
	/// Accessor for the LocalSecurity
	SmartPtrCLocalSecurityDoc getLocalSecurity() const;

	/// Accessor for the Protocol Collection
	SmartPtrCRemoteSecurityCollectionDoc getRemoteSecurityCollection() const;

	/// Accessor for the PersistenceProtocol
	SmartPtrCPersistenceProtocolCollectionDoc getPersistenceProtocolCollection() const;

	/// Accessor for the version
	std::string getVersion() const;

private:
	SmartPtrCLocalSecurityDoc _localSecurity;
	SmartPtrCRemoteSecurityCollectionDoc _remoteSecurityCollection;
	SmartPtrCPersistenceProtocolCollectionDoc _persistenceProtocolCollection;
	std::string _version;

	bool _isInitialized;

private:
	CAF_CM_DECLARE_NOCOPY(CPersistenceDoc);
};

CAF_DECLARE_SMART_POINTER(CPersistenceDoc);

}

#endif
