import ctypes
import random

Calc = ctypes.CDLL('./100-operations.so')

a = random.randint(-111, 111)
b = random.randint(-111, 111)

Calc.add.argtypes = (ctypes.c_int, ctypes.c_int)
Calc.add.restype = ctypes.c_int

Calc.sub.argtypes = (ctypes.c_int, ctypes.c_int)
Calc.sub.restype = ctypes.c_int

Calc.mul.argtypes = (ctypes.c_int, ctypes.c_int)
Calc.mul.restype = ctypes.c_int

Calc.div.argtypes = (ctypes.c_int, ctypes.c_int)
Calc.div.restype = ctypes.c_int

Calc.mod.argtypes = (ctypes.c_int, ctypes.c_int)
Calc.mod.restype = ctypes.c_int

result = Calc.add(a, b)
print("{} + {} = {}".format(a, b, result))

result = Calc.sub(a, b)
print("{} - {} = {}".format(a, b, result))


result = Calc.mul(a, b)
print("{} * {} = {}".format(a, b, result))


result = Calc.div(a, b)
print("{} + {} = {}".format(a, b, result))


result = Calc.mod(a, b)
print("{} + {} = {}".format(a, b, result))
