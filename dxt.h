/*
	DDS GIMP plugin

	Copyright (C) 2004 Shawn Kirst <skirst@fuse.net>,
   with parts (C) 2003 Arne Reuter <homepage@arnereuter.de> where specified.

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public
	License as published by the Free Software Foundation; either
	version 2 of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; see the file COPYING.  If not, write to
	the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
	Boston, MA 02111-1307, USA.
*/

#ifndef DXT_H
#define DXT_H

char *initialize_opengl(void);

int get_num_mipmaps(int width, int height);
unsigned int get_mipmapped_size(int width, int height, int bpp,
                                int level, int num, int format);
unsigned int get_volume_mipmapped_size(int width, int height,
                                       int depth, int bpp, int level,
                                       int num, int format);


int dxt_compress(unsigned char *dst, unsigned char *src, int format,
                 unsigned int width, unsigned int height, int bpp,
                 int mipmaps);
int dxt_decompress(unsigned char *dst, unsigned char *src, int format,
                   unsigned int size, unsigned int width, unsigned int height,
                   int bpp);
int generate_mipmaps(unsigned char *dst, unsigned char *src,
                     unsigned int width, unsigned int height, int bpp,
                     int indexed, int mipmaps);
int generate_volume_mipmaps(unsigned char *dst, unsigned char *src,
                            unsigned int width, unsigned int height, 
                            unsigned int depth, int bpp, int indexed,
                            int mipmaps);


#endif

