/* Emacs style mode select   -*- C++ -*-
 *-----------------------------------------------------------------------------
 *
 *
 *  PrBoom: a Doom port merged with LxDoom and LSDLDoom
 *  based on BOOM, a modified and improved DOOM engine
 *  Copyright (C) 1999 by
 *  id Software, Chi Hoang, Lee Killough, Jim Flynn, Rand Phares, Ty Halderman
 *  Copyright (C) 1999-2000 by
 *  Jess Haas, Nicolas Kalkhof, Colin Phipps, Florian Schulze
 *  Copyright 2005, 2006 by
 *  Florian Schulze, Colin Phipps, Neil Stevens, Andrey Budko
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 *  02111-1307, USA.
 *
 * DESCRIPTION:
 *      Main startup and splash screenstuff.
 *
 *-----------------------------------------------------------------------------*/

#ifndef __D_MAIN__
#define __D_MAIN__

#include "m_fixed.h"
#include "d_event.h"
#include "w_wad.h"

#ifdef __GNUG__
#pragma interface
#endif

/* CPhipps - removed wadfiles[] stuff to w_wad.h */

extern char *basesavegame;      // killough 2/16/98: savegame path

//jff 1/24/98 make command line copies of play modes available
extern dboolean clnomonsters; // checkparm of -nomonsters
extern dboolean clrespawnparm;  // checkparm of -respawn
extern dboolean clfastparm; // checkparm of -fast
//jff end of external declaration of command line playmode

extern dboolean nosfxparm;
extern dboolean nomusicparm;
extern dboolean umapinfo_loaded;
extern int ffmap;

// Called by IO functions when input is detected.
void D_PostEvent(event_t* ev);

// Demo stuff
extern dboolean advancedemo;
void D_AdvanceDemo(void);
void D_DoAdvanceDemo (void);

//
// BASE LEVEL
//

void D_Display(fixed_t frac);
void D_PageTicker(void);
void D_StartTitle(void);
void D_DoomMain(void);
void D_AddFile (const char *file, wad_source_t source);

void AddIWAD(const char *iwad);
const char *BaseName(const char *filename);

void D_AdjustSaveLocation();

/* cph - MBF-like wad/deh/bex autoload code */
/* proff 2001/7/1 - added prboom.wad as last entry so it's always loaded and
   doesn't overlap with the cfg settings */
#define MAXLOADFILES 3
extern const char *wad_files[MAXLOADFILES], *deh_files[MAXLOADFILES];
extern char* savegame_wadlist;

#endif
