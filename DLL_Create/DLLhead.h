// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the LOG_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// LOG_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.


#ifdef DLL_CREATE_EXPORTS
#define DLL_CREATE_API __declspec(dllexport) 
#else
#define DLL_CREATE_API __declspec(dllimport) 
#endif

namespace NameChecker
{
	class LocalName
	{
	public:
		static DLL_CREATE_API void GetLocalName();
	};
}