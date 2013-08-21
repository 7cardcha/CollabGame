#include <cstdlib>
#include <iostream>

#include "gameengine.hpp"

int main(void)
{
  std::cout << "testing!" << std::endl;

  system("PAUSE");

  return EXIT_SUCCESS;
}


//#include <allegro5/allegro5.h>
//#include <allegro5/allegro_font.h>
//#include <allegro5/allegro_ttf.h>
//
//#include <cstdio>
//
//void init(ALLEGRO_EVENT_QUEUE* &e_queue, int w, int h, int full=0, int opengl=1)
//{
//   if(full) al_set_new_display_flags(ALLEGRO_FULLSCREEN);
//   if(opengl) al_set_new_display_flags(ALLEGRO_OPENGL);
//
//   ALLEGRO_DISPLAY* display = al_create_display(w,h); //it doesn't need to be global because you can always access it by al_get_current_display();
//   if(!display) printf("ERROR INITIALIZING THE DISPLAY AT %i %i!",w,h);
//
//   e_queue = al_create_event_queue();
//   if(!e_queue) printf("ERROR CREATING EVENT QUEUE!");
//
//   al_register_event_source(e_queue, al_get_display_event_source(display));
//   al_register_event_source(e_queue, al_get_keyboard_event_source());
//}
//
//int install_allegro()
//{
//   if(!al_init())
//   {
//      printf("ERROR INITIALIZING ALLEGRO!");
//      return 0;
//   }
//   if(!al_install_keyboard())
//   {
//      printf("ERROR INITIALIZING KEYBOARD!");
//      return 0;
//   }
//
//   al_init_font_addon();
//   if(!al_init_ttf_addon())
//   {
//      printf("ERROR INITIALIZING FONT ENGINE!");
//      return 0;
//   }
//
//   //al_set_physfs_file_interface();
//   return 1;
//}
//
//int main()
//{
//    ALLEGRO_EVENT_QUEUE* event_queue = NULL;
//    if(!install_allegro()) return 1;
//    init(event_queue,800,600);
//    ALLEGRO_FONT* font_times = al_load_font("Fixedsys500c.ttf",20,0);
//    if(font_times==NULL)
//    {
//        printf("ERROR LOADING FONT!");
//        return -1;
//    }
//
//    al_clear_to_color(al_map_rgb(0,0,0));
//    al_draw_text(font_times,al_map_rgb(255,255,0),400,300,ALLEGRO_ALIGN_CENTRE,"Hello World");
//    al_flip_display();
//
//    ALLEGRO_EVENT ev;
//    bool quit = false;
//    while(!quit)
//    {
//        al_wait_for_event(event_queue,&ev);
//        if(ev.type==ALLEGRO_EVENT_KEY_DOWN)
//        {
//            if(ev.keyboard.keycode==ALLEGRO_KEY_ESCAPE) quit = true;
//        }
//    }
//
//    al_destroy_display(al_get_current_display());
//   al_destroy_event_queue(event_queue);
//    return 0;
//}
