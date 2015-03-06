#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "06";
	static const char MONTH[] = "03";
	static const char YEAR[] = "2015";
	static const char UBUNTU_VERSION_STYLE[] =  "15.03";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 1;
	static const long MINOR  = 7;
	static const long BUILD  = 887;
	static const long REVISION  = 3322;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 1220;
	#define RC_FILEVERSION 1,7,887,3322
	#define RC_FILEVERSION_STRING "1, 7, 887, 3322\0"
	static const char FULLVERSION_STRING [] = "1.7.887.3322";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 98;
	

}
#endif //VERSION_H
