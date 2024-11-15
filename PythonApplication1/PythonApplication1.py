def fib(n):
    if n <= 1:
        return n
    return fib(n - 1) + fib(n - 2)

n = int(input("Enter the number: "))

if n < 0:
    print("Fibonacci is not defined for negative numbers.")
else:
    print(f"Fibonacci({n}) = {fib(n)}")

