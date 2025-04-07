# Basics of Strings in c++

 ### using for loop in lowering case , assuming sentence is already declared

 ```cpp
 for(char &c: sentence){
		c = std::tolower(c); // COMES from the <cctype> header
	}
```
### Using transform from algorithm header
Here we need two headers algorithm and cctype for tolower()
```cpp
#include<iostream>
#include<string>
#include<algorithm> // for std::transform
#include<cctype> // for std::tolower

// the function to lowercase
std::string processString(std::string sentence){
	// Use transform to convert each character to lowercase
	std::transform(sentence.begin(), sentence.end(), sentence.begin(), [](unsigned char c){
		return std::tolower(c);
	});
	return sentence;
}
```

### In astring, lets remove anything not from a to z

```cpp
sentence.erase(std::remove_if(sentence.begin(), sentence.end(), [] (char c){
	return !(c >= 'a' && c <= 'z');
}), sentence.end());
// erase comes from <string> header and remove_if from the standard library and a component of <algorithm> header
```