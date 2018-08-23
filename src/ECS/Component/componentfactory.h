#ifndef __COMPONENTFACTORY_H__
#define __COMPONENTFACTORY_H__

#include "component.h"
#include <iostream>

namespace ECS {

    class ComponentFactory {
    public:
        static unsigned int m_int;
        template <typename T>
        static Component CreateComponent(){
            Component pComp = std::make_shared<T>();
            std::cout<< "ComponentFactory::ComponentFactory "<<pComp << std::endl;
            pComp->m_id = ++m_int;
            return pComp;
        }
    };
    
}

#endif //__COMPONENTFACTORY_H__
