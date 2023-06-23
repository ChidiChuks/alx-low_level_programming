import ctypes

lib = ctypes.CDLL('./lib_putchar.so')

# Define the argument types for the _putchar function
lib._putchar.argtypes = [ctypes.c_char]

# Call the _putchar function
lib._putchar(b'H')
lib._putchar(b'e')
lib._putchar(b'l')
lib._putchar(b'l')
lib._putchar(b'o')
lib._putchar(b'\n')
