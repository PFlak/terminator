#include <CLI/CLI.hpp>
#include <iostream>
#include "Colors.h"
#include <filesystem>
#include "Controller/Controller.h"



int main(int argc, char** argv) {
    CLI::App app{"Terminator CLI"};
    
    // Subcommands
    CLI::App* threads = app.add_subcommand("threads", "Manage threads");
    CLI::App* create = app.add_subcommand("create", "Create a new item");
    CLI::App* activate = app.add_subcommand("activate", "Activate an item");
    CLI::App* deactivate = app.add_subcommand("deactivate", "Deactivate an item");
    CLI::App* config = app.add_subcommand("config", "Configure API settings");
    CLI::App* export_cmd = app.add_subcommand("export", "Export data");
    CLI::App* remove = app.add_subcommand("remove", "Remove an item");
    CLI::App* init = app.add_subcommand("init", "Initialize system");
    
    // Arguments for 'threads'

    CLI::App* threads_list = threads->add_subcommand("list", "List all threads");
    
    // Arguments for 'create'
    std::string file, name, message;
    create->add_option("-f,--file", file, "File to use");
    create->add_option("-n,--name", name, "Name of the item")->required();
    create->add_option("-m,--message", message, "Optional message");
    
    // Arguments for 'activate'
    std::string activate_name;
    bool shorten = false;
    activate->add_option("<name>", activate_name, "Name to activate")->required();
    activate->add_flag("-s,--shorten", shorten, "Use shortened activation");
    
    // Arguments for 'deactivate' - no additional options
    
    // Arguments for 'config'
    std::string api_key;
    config->add_option("--api-key", api_key, "API key for configuration");
    
    // Arguments for 'export'
    std::string export_name;
    export_cmd->add_option("-n,--name", export_name, "Name to export");
    
    // Arguments for 'remove'
    remove->add_option("-n,--name", name, "Name to remove");
    
    // Arguments for 'init'
    std::string init_api_key = "";
    init->add_option("--api-key", init_api_key, "API key for initialization");
    
    CLI11_PARSE(app, argc, argv);

    const std::string CACHE_DIR = std::string(CMAKE_SOURCE_DIR) + "/.cache";

    if (*init)
    {
       if (init_api_key == "")
       {
        std::cout<<colors::BOLD::YELLOW + "! For terminator purpose - OpenAI API key is required\n" + colors::RESET + "Type your API Key here: ";
        std::cin>>init_api_key;
        std::cout<<std::endl;
       }

        try {
            if (std::filesystem::create_directory(CACHE_DIR))
            {
                
            } else 
            {
                std::cout << colors::TEXT::RED + "Could not initialize terminator" + colors::RESET << std::endl;
                return 1;
            }
            
        } catch (const std::filesystem::filesystem_error& e) 
        {
            std::cerr << "Error: " << e.what() << std::endl;
        }
        
    }
    

}
