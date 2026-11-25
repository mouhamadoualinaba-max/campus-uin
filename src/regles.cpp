#include "uincampus/regles.hpp"

namespace uin {

Mention mentionPour(double moyenne)
{
    if (moyenne < seuilValidation) { return uin::Mention::Ajourne; }
    if (moyenne < 12.0) { return uin::Mention::Passable; }
    if (moyenne < 14.0) { return uin::Mention::AssezBien; }
    if (moyenne < 16.0) { return uin::Mention::Bien; }
    return uin::Mention::TresBien;
}

std::string_view libelle(uin::Mention mention)
{
    using enum uin::Mention;

    switch (mention) {
        case Ajourne: return "Ajourné";
        case Passable: return "Passable";
        case AssezBien: return "Assez bien";
        case Bien: return "Bien";
        case TresBien: return "Très bien";
    }

    return "Inconnue";
}

Mention mentionPour(double moyenne)
{
int rang{0};
for (double seuil : seuilsMentions) {
if (moyenne >= seuil) {
++rang;
}
}
return static_cast<Mention>(rang);
}
} // namespace uin