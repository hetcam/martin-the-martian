#ifndef __TEXTURECOMPONENT_H__
#define __TEXTURECOMPONENT_H__


#include <ECS/Component/component.h>
#include <memory>
#include <string>

#include <glm/vec2.hpp>

namespace ECS{

    class TextureComponent_;
    using TextureComponent = std::shared_ptr<TextureComponent_>;
    class TextureComponent_ : public Component_ {

        SDL_Texture*    m_pTexture;
    public:

        TextureComponent_() = default;
        TextureComponent_(std::string path);
        TextureComponent_(const char* path);

        SDL_Texture* GetTexture();
        const unsigned long * GetSize();

        void SetTexture(SDL_Texture* pt);
        void SetTexture(const char* path);
        void SetTexture(std::string path);

        unsigned long   m_sz;


    };

}



#endif