class Persona
{
public:
	Persona(int edad);
	~Persona(); // alt gr + 4 + espacio
	int getEdad();
	bool esMujer();
	void setEdad(int edad);
	void mostrar();
	
private:
	bool genero;
	int edad;
	char dni[10];
};