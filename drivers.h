#ifndef MODULE_NETWORK_H
#define MODULE_NETWORK_H

#include <string>
#include <vector>
#include "state_map.h"  // For state_map, state_vector_map, string_vector

class module_network
{
   public:
    drivers;

    double start_time() const noexcept
    {
        return _times.front();
    }
    double end_time() const noexcept
    {
        return _times.back();
    }

    state_map operator()(double t) const;

   private:
    const std::string _time_name;
    const std::vector<double> _times;
    const state_vector_map _values;
};

#endif
