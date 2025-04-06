# Basics of Strings in c++

 ### using for loop in lowering case , assuming sentence is already declared

 ```cpp
 for(char &c: sentence){
		c = std::tolower(c); // COMES from the <cctype> header
	}
```
### Using transform from algorithm header


### In astring, lets remove anything not from a to z

```cpp
sentence.erase(std::remove_if(sentence.begin(), sentence.end(), [] (char c){
	return !(c >= 'a' && c <= 'z');
}), sentence.end());
// erase comes from <string> header and remove_if from the standard library and a component of <algorithm> header
```