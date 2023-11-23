#pragma once

#include <string/string_engine.hpp>

namespace Pong
{

class Game : public String::Application
{
public:
	Game(const String::ApplicationSpecification& specification);
	~Game() = default;

    void on_setup();
    void on_update();
    void on_close();
};

} // namespace Pong

String::Application* String::CreateApplication(String::ApplicationCommandLineArgs args)
{
	String::ApplicationSpecification spec;
	spec.name = "Pong";
	spec.command_line_args = args;

	return new Pong::Game(spec);
}
