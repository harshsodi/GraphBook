#include <jni.h>
#include "Test.h"
#include <stdio.h>
#include <stdlib.h>
 
JNIEXPORT void JNICALL Java_Test_displayHelloWorld
  (JNIEnv * env, jobject jObject, jstring javaString)
{
	const char *nativeString = (*env)->GetStringUTFChars(env, javaString, 0);
	
	// use your string
// 	printf("%s\n", nativeString);
	
	
	FILE *fp;
	char path[1035];
	
	/* Open the command for reading. */
	fp = popen(nativeString, "r");
	if (fp == NULL) {
		printf("Failed to run command\n" );
		exit(1);
	}
	
	/* Read the output a line at a time - output it. */
// 	double ret;
// 	while (fgets(path, sizeof(path)-1, fp) != NULL) {
// 		printf("%lf \n", atof(path));
// 		ret = atof(path);
// 	}
	
	/* close */
	(*env)->ReleaseStringUTFChars(env, javaString, nativeString);
	pclose(fp);
	
//     return ret;
}