#include "keyboard.h"
#include "video.h"
#include "game.h"

void cmain (void)
{
  key_initialize();
  video_initialize();
  game();
}
