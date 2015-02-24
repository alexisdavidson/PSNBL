#ifndef VERSION_H
#define VERSION_H

namespace AutoVersion{
	
	//Date Version Types
	static const char DATE[] = "24";
	static const char MONTH[] = "02";
	static const char YEAR[] = "2015";
	static const char UBUNTU_VERSION_STYLE[] =  "15.02";
	
	//Software Status
	static const char STATUS[] =  "Alpha";
	static const char STATUS_SHORT[] =  "a";
	
	//Standard Version Type
	static const long MAJOR  = 1;
	static const long MINOR  = 2;
	static const long BUILD  = 270;
	static const long REVISION  = 1470;
	
	//Miscellaneous Version Types
	static const long BUILDS_COUNT  = 429;
	#define RC_FILEVERSION 1,2,270,1470
	#define RC_FILEVERSION_STRING "1, 2, 270, 1470\0"
	static const char FULLVERSION_STRING [] = "1.2.270.1470";
	
	//These values are to keep track of your versioning state, don't modify them.
	static const long BUILD_HISTORY  = 70;
	

}
#endif //VERSION_H
