#ifndef NODO_H
#define NODO_H


class Nodo
{
    public:
        Nodo();
        virtual ~Nodo();
        Nodo(const Nodo& other);
        Nodo& operator=(const Nodo& other);

        int Getdato() { return dato; }
        void Setdato(int val) { dato = val; }
        Nodo* Getnext() { return next; }
        void Setnext(Nodo* val) { next = val; }

    protected:

    private:
        int dato;
        Nodo *next;
};

#endif // NODO_H
