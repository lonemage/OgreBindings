////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef __GUI_OGREFILESYSTEM_H__
#define __GUI_OGREFILESYSTEM_H__


#include <Noesis.h>
#include <NsCore/ReflectionDeclare.h>
#include <NsCore/Map.h>
#include <NsCore/Ptr.h>
#include <NsFile/IFileSystem.h>
#include <NsFile/FileId.h>
#include <NsFile/BaseFileSystem.h>
#include <OgrePrerequisites.h>


namespace Noesis
{
	namespace Gui
	{
		////////////////////////////////////////////////////////////////////////////////////////////////////
		/// OgreFileSystem
		////////////////////////////////////////////////////////////////////////////////////////////////////
		class OgreNsGuiFileSystem: public File::BaseFileSystem
		{
		public:
			/// Constructor
			OgreNsGuiFileSystem();

			/// Destructor
			virtual ~OgreNsGuiFileSystem();

			/// From IFileSystem
			//@{
			NsBool FileExists(const File::FileId& filename) const;
			Ptr<Core::IStream> OpenRead(const File::FileId& filename) const;
			//@}

		private:
			NS_DECLARE_REFLECTION(OgreNsGuiFileSystem, File::BaseFileSystem)
		};

	}
}
#endif
