#include <systemc.h>

int sc_main(int argc, char* argv[]) {

	/* Elaboration step */
	cout << sc_time_stamp() << ": ELABORATION" <<endl;



	/* Simulation step */
	cout << sc_time_stamp() << ": START SIMULATION" <<endl;

	sc_start();

	/* End of Simulation */
	cout << sc_time_stamp() << ": END OF SIMULATION" << endl; ;
				
	return 0;
}


