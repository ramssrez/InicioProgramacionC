typedef int TipoDeDato; // tipo de los elementos de la pila
// archivo de cabecera pilalineal.h
const int TAMPILA = 49;
class PilaLineal{
	private:
	int cima;
	TipoDeDato listaPila[TAMPILA];
	public:
	PilaLineal(){
	cima = -1; // condición de pila vacía
	}
	// operaciones que modifican la pila
	void insertar(TipoDeDato elemento);
	TipoDeDato quitar();
	void limpiarPila();
	// operación de acceso a la pila
	TipoDeDato cimaPila();
	// verificación estado de la pila
	bool pilaVacia();
	bool pilaLlena();
};
