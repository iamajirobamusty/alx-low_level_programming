<<<<<<< HEAD
=======
#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
>>>>>>> 4f557861cd6eb45e2899fdb2b693fb5b08b9b654
