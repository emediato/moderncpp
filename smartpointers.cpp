
#include <iostream>
#include <string>
#include <memory>

class Entity{
    public:
        Entity()
        {
            std::cout << "created entity" << std:endl;
        }
        ~Entity()
        {
            std::cout << "destroyed entity" << std:endl;
        }
        void Print( ){ }


};

int main()
{
    { 

        // unique_ptr
        //std::unique_ptr<Entity> entity = new Entity()
        // std::unique_ptr<Entity> entity(new Entity());
        // enitty -> Print();
        // cannot shared into functions
        // cannot copy


        // weak_ptr -- no reference!
        std::weak_ptr<Entity> weakEntity = sharedEntity ; // it does not increase the ref count
        // ownership of the reference
        // you can ask if its alive or not but does not keep it

        
        // shared_ptr -- allocate reference! tricky because of overhead
        //std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();

        std::shared_ptr<Entity> sharedEntity(new Entity());

        std::shared_ptr<Entity> e0 ;
        e0 = sharedEntity;
        // all the references are gone : underline gets deleted




    }
    std::cin.get();
}