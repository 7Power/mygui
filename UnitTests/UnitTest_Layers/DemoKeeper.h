/*!
	@file
	@author     George Evmenov
	@date       08/2009
	@module
*/
#ifndef __DEMO_KEEPER_H__
#define __DEMO_KEEPER_H__

#include "Base/BaseManager.h"
#include "CommandManager.h"
#include "KeyboardPanel.h"
#include "MonitorPanel.h"

namespace demo
{

	class DemoKeeper :
		public base::BaseManager
	{
	public:
		DemoKeeper();

		virtual void createScene();
		virtual void destroyScene();

	private:
		virtual void injectKeyPress(MyGUI::KeyCode _key, MyGUI::Char _text);
		void setupResources();

	private:
		KeyboardPanel* mKeyboardPanel;
		MonitorPanel* mMonitorPanel;

		CommandManager* mCommandManager;

	};

} // namespace demo

#endif // __DEMO_KEEPER_H__
