#ifndef MODULE_NETWORK_H
#define MODULE_NETWORK_H

#include <string>
#include <vector>
#include "state_map.h"       // For state_map, state_vector_map, string_vector
#include "module_creator.h"  // For mc_vector
#include "module.h"          // For module_vector

class module_network
{
   public:
    const string_vector inputs;
    const string_vector tangent;

   private:
    const mc_vector module_creators;

    module_network(const mc_vector& mcs) : module_creators{mcs}
    {
    }
};

#endif
