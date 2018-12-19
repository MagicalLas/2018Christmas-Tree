
namespace ChristMas
{
    template<class T>
    class Tree
    {
    private:
        T root;
        Tree* left, right;
    public:
        Tree(T data){
            root = data;
        };
        void SetLeft(Tree<T> reaf){
            left = reaf;
        };
        void SetRight(Tree<T> reaf){
            right = reaf;
        };
        void SetPresent(T toy){
            root = toy;
        };
        Tree<T>* GetLeft(){
            return left;
        };
        Tree<T>* GetRight(){
            return right;
        };
    };
} // ChristMas
