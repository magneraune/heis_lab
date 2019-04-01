


/**
  Check for order on all floors and in elevator
  returns 1 if there exists an order, 0 else
*/
void Add_order(int button);



/**
  Check for order on all floors and in elevator
  returns 1 if there exists an order, 0 else
*/
int check_queue();


/**
  Check for order on input floor 
  returns 1 if there exists an order in the floor, 0 else
*/
int check_queue_floor(int floor);



/**
  
*/
int should_stop(int floor);


/**
  delete all orders on input floor
*/
void delete_floor_order(int floor);


/**
  deletes arr_opp, arr_ned, arr_destination on all floors using delete_floor_order
*/
void delete_all_orders();


/**
  Check for order on all floors and in elevator
  returns true if there exists an order
*/
void set_direction();

int should_stop();

int get_direction();

