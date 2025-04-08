# All about dictionaries
## More on unordered_map of c++

### getting key and value
Assuming all necessary headers are included and runs on main
```cpp
	std::unordered_map<char, char> maps = {
		{'A' , 'A'},{'E', '3'}, {'H','H'}, {'I','I'}, {'J','L'}, {'L','J'},
		 {'M','M'}, {'O','O'}, {'S', '2'}, {'T','T'}, {'U','U'}, {'V','V'},
		  {'W','W'}, {'X','X'}, {'Y','Y'}, {'Z', '5'}, {'1','1'}, {'2','S'},
		   {'3' , 'E'},
		  {'5' , 'Z'}, {'8' , '8'}
		  };
	// debugging 
	for(const auto& pair : maps){
		std::cout<<pair.first<<"=>"<<pair.second<<'\n';
	}
```