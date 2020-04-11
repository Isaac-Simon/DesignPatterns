#include <iostream>
#include "concrete_strategy.h"
#include "context.h"

int main()
{
	IStrategy *bike = new BikeStrategy();
	IStrategy *car = new CarStrategy();
	IStrategy *train = new TrainStrategy();

	Context *bikeContext = new Context(bike);
	Context *carContext = new Context(car);
	Context *trainContext = new Context(train);

	bikeContext->Travel();
	carContext->Travel();
	trainContext->Travel();

	return 0;
}

