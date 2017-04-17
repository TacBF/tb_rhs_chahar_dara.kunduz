#include "tb_defines.hpp"

zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           	, 0, 			  {}         	, {}    , 1      , {}        , 0      },


// Bases

{ 1, TEAM_BLUE, 	SPAWN_XRAY,   	  {3}      		, {}    , 1      , {}        , 0    , "[US] Main Base" },
{ 2, TEAM_RED, 		SPAWN_XRAY,   	  {}			, {}    , 1      , {}        , 0    , "[INS] Main Base" },

// Flags

{ 3, TEAM_RED, 	SPAWN_NEVER,   	  {4,5,6}		, {}    	, 1      , {}        , 0    , "North City" },
{ 4, TEAM_RED, 	SPAWN_NEVER,   	  {7,8,9}		, {5,6}    	, 1      , {}        , 0    , "City Center" },
{ 5, TEAM_RED, 	SPAWN_NEVER,   	  {7,9}			, {4}   	, 1      , {}        , 0    , "West City" },
{ 6, TEAM_RED, 	SPAWN_NEVER,   	  {8,9}			, {4}   	, 1      , {}        , 0    , "East City" },
{ 7, TEAM_RED, 	SPAWN_NEVER,   	  {}			, {9}  		, 1      , {}        , 0    , "South-West City" },
{ 8, TEAM_RED, 	SPAWN_NEVER,   	  {}			, {9}  		, 1      , {}        , 0    , "South-East City" },
{ 9, TEAM_RED, SPAWN_NEVER,   	  {2}			, {7,8}   	, 1      , {}        , 0    , "South City" },

// Forward Bases

{ 10, TEAM_RED,			SPAWN_INSTANT,    {}			, {}    , 1      , {2,4,5,6}     , 4    , "[INS] Forward Base" },
{ 11, TEAM_NEUTRAL,		SPAWN_INSTANT,    {}			, {}    , 1      , {1,3}   		 , 2    , "[US] Forward Base" }
};
