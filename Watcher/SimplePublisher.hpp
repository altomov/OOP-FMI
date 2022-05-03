#pragma once
#include "Averager.hpp"
#include "Message.hpp"
#include "MovingAverager.hpp"
#include "PeriodicSampler.hpp"
#include "Publisher.hpp"

class SimplePublisher : public Publisher{
public:
	void subscribe(Subscriber*) override;

	void unsubscribe(Subscriber*) override;

	void signal(Message) override;
};