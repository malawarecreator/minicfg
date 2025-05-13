# minicfg<br>
Parse `.cfg` files in C++.<br>

Deserialization Example:<br>
```cfg
FOO=BAR
```


```c++
#include <minicfg.h>
#include <iostream>

int main() {
  CfgParser parser("file.cfg");
  parser.deserialize();
  std::cout << parser.get("FOO") << '\n';
  // BAR
}
```
