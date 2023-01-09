#include "NuklearConsole.h"

NuklearConsole::NuklearConsole()
{
}

NuklearConsole::~NuklearConsole()
{
}

void UNITY_INTERFACE_EXPORT NuklearConsole::Render(nk_context* context)
{
    if (nk_begin(context, "Console", nk_rect(50, 50, 230, 250),
        NK_WINDOW_BORDER | NK_WINDOW_MOVABLE | NK_WINDOW_SCALABLE |
        NK_WINDOW_MINIMIZABLE | NK_WINDOW_TITLE))
    {
        enum { EASY, HARD };
        static int op = EASY;
        static int property = 20;
        nk_layout_row_static(context, 30, 80, 1);
        if (nk_button_label(context, "button"))
            ;
        nk_layout_row_dynamic(context, 30, 2);
        if (nk_option_label(context, "easy", op == EASY)) op = EASY;
        if (nk_option_label(context, "hard", op == HARD)) op = HARD;
        nk_layout_row_dynamic(context, 22, 1);
        nk_property_int(context, "Compression:", 0, &property, 100, 10, 1);

        nk_layout_row_dynamic(context, 20, 1);
        nk_label(context, "background:", NK_TEXT_LEFT);
        nk_layout_row_dynamic(context, 25, 1);

    }
    nk_end(context);
}
