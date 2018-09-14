#include <cstdlib>

#include <hello_lib.hxx>

int main()
{
    bool is_good = greetings("Siamion");

    int result = is_good ? EXIT_SUCCESS : EXIT_FAILURE;
    return result;
}
