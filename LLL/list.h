//list.h

struct node
{
    int data;
    node * next;

    node();
    node(int x);
    void display() const;
};

class list
{
    public:
        list();
        list(int x);
        void insert_beginning(int x);
        //void insert_beginning(node *& current, int x);
        void insert_end(int x);
        void insert_end(node *& current, int x);
        int remove(int rm);
        void display() const;
        void display(node * current) const;

    private:
        node * head;
};
