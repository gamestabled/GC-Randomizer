#pragma once

#include "defines.h"
#include <tp/d_com_inf_game.h>



/**
 * Contains functions that fix certain cutscenes
 * those functions should only run when the CS
 * is currently playing and tried to be skipped by the user
 */
namespace mod::cutscene_skip
{
	/**
	 * Runs when master sword CS is skipped
	 */
	s32 onMasterSwordSkip(void* unk, s32 unk2);
}

/**
 * Contains patch functions that take no parameters
 * and immediately perfom the described action
 */
namespace mod::game_patch
{
	/**
	 * Enables the debug screen without
	 * active debug mode; It triggers
	 * automatically when crashing
	 */
	void assemblyOverwrites();

	/**
	 * Kills spider at links house
	 */
	void killLinkHouseSpider();

	/**
	 * Increasees Links climbing speed
	 */
	void increaseClimbSpeed();

	/**
	 * Removes the movementspeed limit
	 * when wearing IB
	 */
	void removeIBLimit();


	/**
	 * Changes the max rupee amounts for each
	 * of the wallets
	 */
	void increaseWalletSize();

	/**
	 * Skips sewers immediately
	 * triggers the load to Ordon Spring
	 * and sets the flags accordingly
	 */
	void skipSewers();

	/**
	* Adds the chests that disappear after KB3
	* changes the state of faron from 1 to 3
	*/
	void setBublinState();

	/**
	 * Sets the flag after Ilia CS
	 * which tells the game that you started
	 * with sewers
	 */
	void setFirstTimeWolf();

	/**
	 * Sets form to human
	 */
	void setHuman();

	/**
	 * Sets form to wolf
	 */
	void setWolf();


	/**
	 * Activates the sense button (X)
	 * for Wolf Link
	 */
	void giveSense();

	/**
	 * Tames Epona
	 */
	void giveEpona();

	/**
	 * Gives Master Sword and equips it
	 */
	void giveMasterSword();

	/**
	 * Gives Midna and sets the according sewers flag
	 * Makes her appear on Z
	 */
	void giveMidna();

	/**
	 * Gives Midna Text that allows transformation
	 */
	void giveMidnaTransform();

	/**
	 * Removes the locks from the 2 bulblin gates in HF
	 * change doesn't get saved so set it evry time you load into HF
	 */
	void setFieldBits();

	/**
	 * when spawning in goats 2, will warp you to Illia taking Epona CS
	 */
	void skipGoats();

	/**
	 * opens the door the the master sword in sacred grove
	 */
	void setGroveFlags();

	/**
	 * when you spawn into the Cart Escort, game will spawn you in Kakariko Afterwards
	 */
	void skipCartEscort();

	/**
	 * warps player to Lanayru twilight gate if they don't have MS
	 */
	void setLanayruWolf();

	/**
	 * Fixes the cannon and puts it at lake hylia
	 */
	void earlyCiTS();

	/**
	 * Fyer will let you go to the desert if you have MS
	 */
	void earlyDesert();

	/**
	 * give boss key to all dungeons
	 */
	void checkBossKeysey();

	/**
	 * check wether to show hawkeye and hylian shield in malo mart
	 */
	void handleMaloShop();

	/**
	 * check whether you have MS before being allowed to enter the desert
	 */
	void accessDesert();

	/**
	 * skips midna text and story CS
	 */
	void skipTextAndCS();

	/**
	 * escort avalable at any time
	 */
	void setEscortState();

	/**
	 * skips the zant CS for MDH
	 */
	void skipMDHCS();

	void fixFTBossMusic();

	/**
	 * won't allow you to leave the forest if Faron escape is disabled until you beat Diababa
	 */
	void allowFaronEscape();

	/**
	 * set MDH skip after Lanayru Twilight
	 */
	void skipMDH();

	/**
	 * unset the story flag and boss flag when re-entering a dungeon
	 */
	void setLanternFlag();

	void breakBarrier();

	/**
	 * unset the story flag and boss flag when re-entering a dungeon
	 */
	void fixFTState();
	void fixGMState();
	void fixLBTState();
	void fixAGState();
	void fixSPRState();
	void fixToTState();
	void fixCiTSState();
	
	/**
	 * reset the flags for a dungeon if it has been beaten or if a skip is active
	 */
	void setFTDungeonFlag();
	void setFTBossFlag();
	void setGMDungeonFlag();
	void setGMBossFlag();
	void setLakeDungeonFlags();
	void setLBTBossFlag();
	void setAGDungeonFlag();
	void setAGBossFlag();
	void setSPRDungeonFlag();
	void setSPRBossFlag();
	void setToTDungeonFlag();
	void setToTBossFlag();
	void setCiTSDungeonFlag();
	void setCiTSBossFlag();
}