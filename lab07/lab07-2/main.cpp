#include <iostream>

class Osoba {
public:
    Osoba() { std::cout << "Uruchomiono konstruktor klasy Osoba" << std::endl; }
    Osoba(const Osoba&) { std::cout << "Uruchomiono konstruktor kopiuj�cy klasy Osoba" << std::endl; }
    ~Osoba() { std::cout << "Uruchomiono destruktor klasy Osoba" << std::endl; }
};

class Student : public Osoba {
public:
    Student() { std::cout << "Uruchomiono konstruktor klasy Student" << std::endl; }
    Student(const Student&) { std::cout << "Uruchomiono konstruktor kopiuj�cy klasy Student" << std::endl; }
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
Odpowiedzi do pyta�:
Konstruktory s� wywo�ywane w nast�puj�cej kolejno�ci:
Konstruktor klasy bazowej (Osoba).
Konstruktor klasy potomnej (Student).
Destruktory s� wywo�ywane w odwrotnej kolejno�ci:
Destruktor klasy potomnej (Student).
Destruktor klasy bazowej (Osoba).

Je�li destruktor klasy bazowej nie jest oznaczony jako wirtualny, 
to podczas usuwania obiektu wskazuj�cego na obiekt klasy potomnej 
(za pomoc� wska�nika klasy bazowej), mo�e nie zosta� wywo�any 
destruktor klasy potomnej. Oznaczenie destruktora jako wirtualnego 
rozwi��e ten problem, zapewniaj�c wywo�anie odpowiedniego destruktora 
nawet w przypadku usuwania obiektu przez wska�nik klasy bazowej.

S�owo kluczowe virtual m�wi kompilatorowi, �e funkcja mo�e by� 
przes�oni�ta (overridden) w klasach pochodnych. W przypadku 
destruktora, zapewnia to wywo�anie odpowiedniego destruktora 
nawet w przypadku usuwania obiektu przez wska�nik klasy bazowej.

virtual jest stosowane przed funkcjami w klasie bazowej, kt�re s� 
zaprojektowane do bycia przes�oni�tymi (overridden) w klasach pochodnych.

Elementy oznaczone jako protected s� dost�pne wewn�trz klasy, jak r�wnie� w klasach pochodnych.
Oznacza to, �e klasy pochodne mog� odziedziczy� i u�ywa� element�w chronionych, ale klasy zewn�trzne (nie b�d�ce klasami pochodnymi) nie mog� ich bezpo�rednio u�ywa�.
protected jest szczeg�lnie przydatne, gdy chcemy udost�pni� pewne elementy tylko klasom dziedzicz�cym, ale nie chcemy, aby by�y one publicznie dost�pne.

override jest u�ywane przy przes�anianiu funkcji w klasach pochodnych, aby zapewni�, �e funkcja faktycznie przes�ania funkcj� z klasy bazowej.
Jest to rodzaj bezpieczno�ci kompilacji, kt�ry pomaga wykry� b��dy, takie jak pr�ba przes�oni�cia funkcji, kt�rej nie ma w klasie bazowej.
Je�li funkcja oznaczona jako override nie przes�ania istniej�cej funkcji z klasy bazowej, kompilator zg�osi b��d.
U�ycie override jest opcjonalne, ale zalecane, aby zapobiec przypadkowym b��dom w kodzie.
*/