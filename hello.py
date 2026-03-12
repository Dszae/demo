import sys


def greet(name="World"):
    """Return a greeting message for the given name."""
    return f"Hello, {name}!"


def main():
    name = sys.argv[1] if len(sys.argv) > 1 else "World"
    print(greet(name))


if __name__ == "__main__":
    main()
