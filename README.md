# minicfg<br>
Parse `.cfg` files in C++.<br>

Example:<br>
```c++
#include <minicfg.h>
#include <iostream>
// currently, minicfg is unable to parse from files, but it can parse from lines. Deserialization and even serialization will soon be added.
int main() {
  CfgLine line("FOO=BAR");
  std::cout << line.key << " " << line.value << std::endl;
}
```
