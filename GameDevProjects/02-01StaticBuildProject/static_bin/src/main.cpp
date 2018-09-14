#include <cstdlib>

#include <static_lib.hpp>

int main()
{
    bool is_good = greetings("Siamion");

    int result = is_good ? EXIT_SUCCESS : EXIT_FAILURE;
    return result;
}
