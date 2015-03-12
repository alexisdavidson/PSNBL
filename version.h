#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "12";
	static const char MONTH[] = "03";
	static const char YEAR[] = "2015";
	static const char UBUNTU_VERSION_STYLE[] =  "15.03";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 2;
	static const long MINOR  = 2;
	static const long BUILD  = 1458;
	static const long REVISION  = 6351;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 2374;
	#define RC_FILEVERSION 2,2,1458,6351
	#define RC_FILEVERSION_STRING "2, 2, 1458, 6351\0"
	static const char FULLVERSION_STRING [] = "2.2.1458.6351";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 69;
	

}
#endif //VERSION_H
