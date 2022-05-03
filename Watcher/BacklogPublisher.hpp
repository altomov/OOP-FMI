#pragma once
#include "Averager.hpp"
#include "Message.hpp"
#include "MovingAverager.hpp"
#include "PeriodicSampler.hpp"
#include "Publisher.hpp"

class BacklogPublisher : public Publisher{
private:
	std::vector<Message> messages;

public:

	void subscribe(Subscriber*) override;

	void unsubscribe(Subscriber*) override;

	void signal(Message) override;
};