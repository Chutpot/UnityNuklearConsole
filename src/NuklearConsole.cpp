#include "NuklearConsole.h"

NuklearConsole::NuklearConsole()
{
    m_buffer = new std::string();
    m_buffer->resize(m_size);
    m_isOpen = false;
    m_length = 0;
}

NuklearConsole::~NuklearConsole()
{
}

void UNITY_INTERFACE_EXPORT NuklearConsole::Render(nk_context* context)
{
    if (!m_isOpen)
        return;

    if (nk_begin(context, "Chutpot Console", nk_rect(50, 50, 750, 300),
        NK_WINDOW_BORDER | NK_WINDOW_MOVABLE | NK_WINDOW_SCALABLE | NK_WINDOW_TITLE))
    {

    }
    nk_end(context);
}

void NuklearConsole::SetOpen(bool isOpen)
{
    m_isOpen = isOpen;
}