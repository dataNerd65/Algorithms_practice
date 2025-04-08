# Basics of Strings in c++

### getting the size or length of a string
```cpp
int lenOfString = line.length();
	// also can use line.size()
/*@@string indexes start at 0
*/
```

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

### .find method for substrings(from qn 282A codeforces)
```cpp
std::string name = "++x";
if(state.find("++") != std::string::npos){
			x++;
		}else if(state.find("--") != std::string::npos){
			x--;
		}
```
### Substrings
```cpp
std::string name = "Wambui";
std::cout<<name.substr(0, 3); // we use (start_index, length) 3 is length and not ending index
// output: 
```

### Getting index of a char in astring
```cpp
// find method in characters
#include <iostream>

int main()
{
    std::string hello = "Hello World";
    size_t t = hello.find('e');
    std::cout<<t<<'\n';

    return 0;
}
```
