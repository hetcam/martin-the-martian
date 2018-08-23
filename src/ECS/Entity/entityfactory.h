#ifndef __ENTITYFACTORY_H__
#define __ENTITYFACTORY_H__
#include "entity.h"
#include <iostream>

namespace ECS {
    class EntityFactory {

    public:
        static unsigned int m_int;

        static Entity CreateEntity(){

            Entity pEnt = std::make_shared<Entity_>();
            std::cout<< "EntityFactory::CreateEntity "<<pEnt << std::endl;
            pEnt->m_id = ++m_int;
            return pEnt;

        }

    };
    

}
#endif //__ENTITYFACTORY_H__
