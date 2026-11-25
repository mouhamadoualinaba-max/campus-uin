#include "uincampus/uincampus.hpp"
#include <cstdlib>
#include <format>
#include <print>
#include <span>
#include <string>
#include <string_view>
#include <vector>
namespace {
enum class Suite { Continuer, Terminer, Erreur };
void afficherAide()
{
std::println("Usage : uin-campus [--version] [--aide]");
std::println(" --version
affiche la version et les informations de construction");
std::println(" --aide
affiche cette aide");
}
[[nodiscard]] Suite traiterOptions(std::span<char*> arguments)
{
if (arguments.size() <= 1) {
return Suite::Continuer;
}
for (const std::string_view option : arguments.subspan(1)) {
if (option == "--version") {
std::println("{}", uin::informationsConstruction());
return Suite::Terminer;
}
if (option == "--aide") {
afficherAide();
return Suite::Terminer;
}
std::println(stderr, "Option inconnue : {}", option);
afficherAide();
return Suite::Erreur;
}
return Suite::Continuer;
};
// afficherLigne : inchangée par rapport au chapitre 5