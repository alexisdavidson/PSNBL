#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "16";
	static const char MONTH[] = "03";
	static const char YEAR[] = "2015";
	static const char UBUNTU_VERSION_STYLE[] =  "15.03";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 2;
	static const long MINOR  = 8;
	static const long BUILD  = 2088;
	static const long REVISION  = 9932;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 3650;
	#define RC_FILEVERSION 2,8,2088,9932
	#define RC_FILEVERSION_STRING "2, 8, 2088, 9932\0"
	static const char FULLVERSION_STRING [] = "2.8.2088.9932";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 99;
	

}
#endif //VERSION_H
