/*
** Jo Sega Saturn Engine
** Copyright (c) 2012-2021, Johannes Fetz (johannesfetz@gmail.com)
** All rights reserved.
**
** Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are met:
**     * Redistributions of source code must retain the above copyright
**       notice, this list of conditions and the following disclaimer.
**     * Redistributions in binary form must reproduce the above copyright
**       notice, this list of conditions and the following disclaimer in the
**       documentation and/or other materials provided with the distribution.
**     * Neither the name of the Johannes Fetz nor the
**       names of its contributors may be used to endorse or promote products
**       derived from this software without specific prior written permission.
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
** ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
** WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
** DISCLAIMED. IN NO EVENT SHALL Johannes Fetz BE LIABLE FOR ANY
** DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
** (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
** LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
** ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
** SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <jo/jo.h>

jo_camera               cam;
jo_3d_mesh              *mesh;

//Vertices
//Head
int vx0 = -4;
int vy0 = -60;
int vz0 = 1;

int vx1 = -20;
int vy1 = -60;
int vz1 = 1;

int vx2 = -20;
int vy2 = -44;
int vz2 = 1;

int vx3 = -4;
int vy3 = -44;
int vz3 = 1;


// Chest

int vx4; //= vx3 - 4;
int vy4; //= vy3;
int vz4 = 1; //= 0;

int vx5; //= vx2 - 4;
int vy5; //= vy2;
int vz5 = 1; //= 0;

int vx6 = -16;
int vy6 = -28;
int vz6 = 1;

int vx7 = 0;
int vy7 = -28;
int vz7 = 1;

// Left Thigh
int vx8;// = vx7 + 4;
int vy8;// = vy7;
int vz8 = 1;

int vx9; //= vx6 + 4;
int vy9; //= vy6;
int vz9 = 1;

int vx10 = -20;
int vy10 = 4;
int vz10 = 1;

int vx11 = -4;
int vy11 = 4;
int vz11 = 1;

//Left Leg

int vx12; // = vx11 + 4;
int vy12; // = vy11;
int vz12 = 0;

int vx13; //= vx10;
int vy13; //= vy10;
int vz13 = 0;

int vx14 = -28;
int vy14 = 40;
int vz14 = 0;

int vx15 = -4;
int vy15 = 40;
int vz15 = 0;

// Left Arm

int vx16; //= vx2 - 4;
int vy16; // = vy2;
int vz16 = 1;

int vx17 = -24;
int vy17 = -44;
int vz17 = 1;

int vx18 = -20;
int vy18 = -28;
int vz18 = 1;

int vx19 = -12;
int vy19 = -28;
int vz19 = 1;

//Left Hand
int vx20; //= vx18 - 12;
int vy20; // = vy18;
int vz20 = 0;

int vx21;// = vx18;
int vy21;// = vy18;
int vz21 = 0;

int vx22 = -18;
int vy22 = -10;
int vz22 = 0;

int vx23 = -6;
int vy23 = -10;
int vz23 = 0;

// Right Thigh

int vx24;// = vx7 + 4;
int vy24;// = vy7;
int vz24 = 2;

int vx25; //= vx6 + 4;
int vy25; //= vy6;
int vz25 = 2;

int vx26 = -20;
int vy26 = 4;
int vz26 = 2;

int vx27 = -4;
int vy27 = 4;
int vz27 = 2;

// Right Leg

int vx28; // = vx11 + 4;
int vy28; // = vy11;
int vz28 = 2;

int vx29; //= vx10;
int vy29; //= vy10;
int vz29 = 2;

int vx30 = -28;
int vy30 = 40;
int vz30 = 2;

int vx31 = -4;
int vy31 = 40;
int vz31 = 2;

//Right Arm

int vx32; //= vx2 - 4;
int vy32; // = vy2;
int vz32 = 2;

int vx33 = -24;
int vy33 = -44;
int vz33 = 2;

int vx34 = -20;
int vy34 = -28;
int vz34 = 2;

int vx35 = -12;
int vy35 = -28;
int vz35 = 2;

//Right Hand

 int vx36; //= vx34 - 12;
int vy36; // = vy34;
int vz36 = 2;

int vx37;// = vx34;
int vy37;// = vy34;
int vz37 = 2;

int vx38 = -18;
int vy38 = -10;
int vz38 = 2;

int vx39 = -6;
int vy39 = -10;
int vz39 = 2;



void	update_mesh_vertices()
{
    // Define vertices

    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx0), jo_int2fixed(vy0), jo_int2fixed(vz0), 0);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx1), jo_int2fixed(vy1), jo_int2fixed(vz1), 1);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx2), jo_int2fixed(vy2), jo_int2fixed(vz2), 2);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx3), jo_int2fixed(vy3), jo_int2fixed(vz3), 3);
    
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx8), jo_int2fixed(vy8), jo_int2fixed(vz8), 8);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx4), jo_int2fixed(vy4), jo_int2fixed(vz4), 4);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx5), jo_int2fixed(vy5), jo_int2fixed(vz5), 5);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx6), jo_int2fixed(vy6), jo_int2fixed(vz6), 6);
    
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx7), jo_int2fixed(vy7), jo_int2fixed(vz7), 7);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx9), jo_int2fixed(vy9), jo_int2fixed(vz9), 9);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx10), jo_int2fixed(vy10), jo_int2fixed(vz10), 10);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx11), jo_int2fixed(vy11), jo_int2fixed(vz11), 11);
    
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx12), jo_int2fixed(vy12), jo_int2fixed(vz12), 12);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx13), jo_int2fixed(vy13), jo_int2fixed(vz13), 13);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx14), jo_int2fixed(vy14), jo_int2fixed(vz14), 14);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx15), jo_int2fixed(vy15), jo_int2fixed(vz15), 15);
	
	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx16), jo_int2fixed(vy16), jo_int2fixed(vz16), 16);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx17), jo_int2fixed(vy17), jo_int2fixed(vz17), 17);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx18), jo_int2fixed(vy18), jo_int2fixed(vz18), 18);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx19), jo_int2fixed(vy19), jo_int2fixed(vz19), 19);
	
	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx20), jo_int2fixed(vy20), jo_int2fixed(vz20), 20);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx21), jo_int2fixed(vy21), jo_int2fixed(vz21), 21);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx22), jo_int2fixed(vy22), jo_int2fixed(vz22), 22);
    jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx23), jo_int2fixed(vy23), jo_int2fixed(vz23), 23);
	
	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx24), jo_int2fixed(vy24), jo_int2fixed(vz24), 24);
	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx25), jo_int2fixed(vy25), jo_int2fixed(vz25), 25);
	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx26), jo_int2fixed(vy26), jo_int2fixed(vz26), 26);
	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx27), jo_int2fixed(vy27), jo_int2fixed(vz27), 27);

	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx28), jo_int2fixed(vy28), jo_int2fixed(vz28), 28);
	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx29), jo_int2fixed(vy29), jo_int2fixed(vz29), 29);
	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx30), jo_int2fixed(vy30), jo_int2fixed(vz30), 30);
	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx31), jo_int2fixed(vy31), jo_int2fixed(vz31), 31);

	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx32), jo_int2fixed(vy32), jo_int2fixed(vz32), 32);
	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx33), jo_int2fixed(vy33), jo_int2fixed(vz33), 33);
	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx34), jo_int2fixed(vy34), jo_int2fixed(vz34), 34);
	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx35), jo_int2fixed(vy35), jo_int2fixed(vz35), 35);
	
	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx36), jo_int2fixed(vy36), jo_int2fixed(vz36), 36);
	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx37), jo_int2fixed(vy37), jo_int2fixed(vz37), 37);
	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx38), jo_int2fixed(vy38), jo_int2fixed(vz38), 38);
	jo_3d_set_mesh_vertice(mesh, jo_int2fixed(vx39), jo_int2fixed(vy39), jo_int2fixed(vz39), 39);
    
    //Sprite Joints
    vx4 = vx3 + 4;
	vy4 = vy3;
    vy5 = vy2;
    vx5 = vx2 +4;
    
    vx8 = vx7 - 4;
    vy8 = vy7;
    vx9 = vx6 - 4;
    vy9 = vy6;
    
    vx12 = vx11;
    vy12 = vy11 - 2;
    vx13 = vx10 - 4;
    vy13 = vy10 - 2;
	
	vx16 = vx2 + 4;
	vy16 = vy2;
	
	vx20 = vx18 + 12;
	vy20 = vy18;

	vx21 = vx18;
	vy21 = vy18;
	
	vx24 = vx7 - 4;
	vy24 = vy7;

	vx25 = vx6 - 4;
	vy25 = vy6;
	
	vx28 = vx27 - 4;
	vy28 = vy27;
	
	vx29 = vx26;
	vy29 = vy26;
	
	vx32 = vx2 + 4;
	vy32 = vy2;
	
	vx36 = vx34 + 12;
	vy36 = vy34;
	
	vx37 = vx34;
	vy37 = vy34;
	
	
		
	if (jo_is_pad1_key_pressed(JO_KEY_LEFT)) {
    static int direction = 1; // To keep track of direction of oscillation
    static int amplitude = 3; // Amplitude of oscillation
    
    // Update vertices oscillating between +9 and -9
    vx14 += direction * (amplitude);  // left leg
    vx15 += direction * (amplitude);
	
	vx30 -= direction * (amplitude); //right leg
	vx31 -= direction * (amplitude);
	
    vx10 += direction * (amplitude / 3); //Left Thigh
	vx11 += direction * (amplitude / 3);
	
	vx26 -= direction * (amplitude / 3); //Right Thigh
	vx27 -= direction * (amplitude / 3);
	
	vx18 -= direction * (amplitude / 3); // Left Arm
    vx19 -= direction * (amplitude / 3);
	
	vx34 += direction * (amplitude / 3);//Right arm
	vx35 += direction * (amplitude / 3);
	
	vx22 -= direction * (amplitude / 3); //Left Hand
    vx23 -= direction * (amplitude / 3);
	
	vx38 += direction * (amplitude / 3); // Right Hand
    vx39 += direction * (amplitude / 3);
	
    // Update vertices oscillating between -3 and +3
   /* vy14 -= direction * (amplitude / 3); // Left Leg
    vy15 -= direction * (amplitude / 3);
	
	
	
	vy22 += direction * (amplitude / 3); // Left Hand
    vy23 += direction * (amplitude / 3);
	
	vy38 += direction * (amplitude / 3); // Right Hand
	vy39 += direction * (amplitude / 3);
	
	vy30 -= direction * (amplitude / 3); // Right Leg
    vy31 -= direction * (amplitude / 3);
    */
    // Change direction when reaching the limit
    if (vx14 <= -35 || vx14 >= -15) {
        direction = -direction;
    }
}


}
	

	

void			    my_draw(void)
{
   update_mesh_vertices();
		
    jo_3d_camera_look_at(&cam);
    jo_3d_push_matrix();
    {
        jo_3d_mesh_draw(mesh);
    }
    jo_3d_pop_matrix();

	

}

void			jo_main(void)
{
	jo_core_init(JO_COLOR_Red);
    jo_3d_camera_init(&cam);


  	mesh = jo_3d_create_mesh(10);
    jo_sprite_add_tga("JO_ROOT_DIR", "HEAD.TGA", JO_COLOR_White);
	jo_sprite_add_tga("JO_ROOT_DIR", "CHEST.TGA", JO_COLOR_White);
	jo_sprite_add_tga("JO_ROOT_DIR", "THIGHS.TGA", JO_COLOR_White);
	jo_sprite_add_tga("JO_ROOT_DIR", "LEG.TGA", JO_COLOR_White);
	jo_sprite_add_tga("JO_ROOT_DIR", "ARM.TGA", JO_COLOR_White);
	jo_sprite_add_tga("JO_ROOT_DIR", "HAND.TGA", JO_COLOR_White);
	jo_3d_set_mesh_polygon_texture(mesh, 0, 0);
	jo_3d_set_mesh_polygon_texture(mesh, 1, 1);
	jo_3d_set_mesh_polygon_texture(mesh, 2, 2);
	jo_3d_set_mesh_polygon_texture(mesh, 3, 3);
	jo_3d_set_mesh_polygon_texture(mesh, 4, 4);
	jo_3d_set_mesh_polygon_texture(mesh, 5, 5);
	jo_3d_set_mesh_polygon_texture(mesh, 2, 6);
	jo_3d_set_mesh_polygon_texture(mesh, 3, 7);
	jo_3d_set_mesh_polygon_texture(mesh, 4, 8);
	jo_3d_set_mesh_polygon_texture(mesh, 5, 9);

	jo_core_add_callback(my_draw);
	jo_core_run();
}

/*
** END OF FILE
*/
