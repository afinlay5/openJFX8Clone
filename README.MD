# How to build openJFX 8 on Windows from source
![alt text](https://raw.githubusercontent.com/afinlay5/openJFX8Clone/master/blog.png)

Clone of openJFX8 modified to work with adoptOpenJDK8 out of the box on Windows 10, CentOS5+.

# Platform 
- Any supporting a JavaFX compatible JVM for Java SE 8+ (so far only test on Windows 10 x64).

# Requirements
- Gradle 4.7 
- Java 8 or greater.

# Known Problems
- "%WINSDKPATH%\Bin\SetEnv.Cmd" does not exist (~/rt/buildSrc/genVSproperties.bat) 12/24/2018.

# Execution Screenshot
![alt text](https://raw.githubusercontent.com/afinlay5/openJFX8Clone/master/gradle_jfxRun.png)
