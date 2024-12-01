#include <iostream>

class Osoba {
public:
    Osoba() { std::cout << "Uruchomiono konstruktor klasy Osoba" << std::endl; }
    Osoba(const Osoba&) { std::cout << "Uruchomiono konstruktor kopiuj¹cy klasy Osoba" << std::endl; }
    ~Osoba() { std::cout << "Uruchomiono destruktor klasy Osoba" << std::endl; }
};

class Student : public Osoba {
public:
    Student() { std::cout << "Uruchomiono konstruktor klasy Student" << std::endl; }
    Student(const Student&) { std::cout << "Uruchomiono konstruktor kopiuj¹cy klasy Student" << std::endl; }
    ~Student() { std::cout << "Uruchomiono destruktor klasy Student" << std::endl; }
};

int main() {
    {
        Student* student = new Student();
        delete student;
    }

    {
        Osoba* o = new Student();
        delete o;
    }

    return 0;
}

/*
Odpowiedzi do pytañ:
Konstruktory s¹ wywo³ywane w nastêpuj¹cej kolejnoœci:
Konstruktor klasy bazowej (Osoba).
Konstruktor klasy potomnej (Student).
Destruktory s¹ wywo³ywane w odwrotnej kolejnoœci:
Destruktor klasy potomnej (Student).
Destruktor klasy bazowej (Osoba).

Jeœli destruktor klasy bazowej nie jest oznaczony jako wirtualny, 
to podczas usuwania obiektu wskazuj¹cego na obiekt klasy potomnej 
(za pomoc¹ wskaŸnika klasy bazowej), mo¿e nie zostaæ wywo³any 
destruktor klasy potomnej. Oznaczenie destruktora jako wirtualnego 
rozwi¹¿e ten problem, zapewniaj¹c wywo³anie odpowiedniego destruktora 
nawet w przypadku usuwania obiektu przez wskaŸnik klasy bazowej.

S³owo kluczowe virtual mówi kompilatorowi, ¿e funkcja mo¿e byæ 
przes³oniêta (overridden) w klasach pochodnych. W przypadku 
destruktora, zapewnia to wywo³anie odpowiedniego destruktora 
nawet w przypadku usuwania obiektu przez wskaŸnik klasy bazowej.

virtual jest stosowane przed funkcjami w klasie bazowej, które s¹ 
zaprojektowane do bycia przes³oniêtymi (overridden) w klasach pochodnych.

Elementy oznaczone jako protected s¹ dostêpne wewn¹trz klasy, jak równie¿ w klasach pochodnych.
Oznacza to, ¿e klasy pochodne mog¹ odziedziczyæ i u¿ywaæ elementów chronionych, ale klasy zewnêtrzne (nie bêd¹ce klasami pochodnymi) nie mog¹ ich bezpoœrednio u¿ywaæ.
protected jest szczególnie przydatne, gdy chcemy udostêpniæ pewne elementy tylko klasom dziedzicz¹cym, ale nie chcemy, aby by³y one publicznie dostêpne.

override jest u¿ywane przy przes³anianiu funkcji w klasach pochodnych, aby zapewniæ, ¿e funkcja faktycznie przes³ania funkcjê z klasy bazowej.
Jest to rodzaj bezpiecznoœci kompilacji, który pomaga wykryæ b³êdy, takie jak próba przes³oniêcia funkcji, której nie ma w klasie bazowej.
Jeœli funkcja oznaczona jako override nie przes³ania istniej¹cej funkcji z klasy bazowej, kompilator zg³osi b³¹d.
U¿ycie override jest opcjonalne, ale zalecane, aby zapobiec przypadkowym b³êdom w kodzie.
*/