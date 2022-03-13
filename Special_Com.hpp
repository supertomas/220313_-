#pragma once
# include <Siv3D.hpp>
class Skill_Com
{
public:
	void setList(std::vector<String> _items)
	{
		items = _items;
	}
	String selected() const
	{
		return items[select];
	}
	void update()
	{
		if (KeyUp.up())
		{
			AudioAsset(U"セレクト音").play();
			if (select != 0)
			{
				select--;
			}
		}
		if (KeyDown.up())
		{
			AudioAsset(U"セレクト音").play();
			if (select != items.size() - 1)
			{
				select++;
			}
		}
	}
	void draw() const
	{
		Rect frame;
		frame = Rect(820, 200, 360, 520);
		frame.draw();
		frame.stretched(2).drawFrame(2, 0, Palette::Black);
		frame.stretched(-2).drawFrame(2, 0, Palette::Black);
		for (uint32 i = 0; i < items.size(); i++)
		{

			//int offset = (200 - font(items[i]).region().w) / 2;
			Point pos
			{
				870, 210 + i * 80
			};
			font(items[i]).draw(pos, Palette::Black);
		}
		switch (select)
		{
		case 0:
			Triangle({ 830, 220 }, { 860, 240 }, { 830, 260 }).draw(Palette::Black);
			break;
		case 1:
			Triangle({ 830, 300 }, { 860, 320 }, { 830, 340 }).draw(Palette::Black);
			break;
		case 2:
			Triangle({ 830, 380 }, { 860, 400 }, { 830, 420 }).draw(Palette::Black);
			break;
		case 3:
			Triangle({ 830, 460 }, { 860, 480 }, { 830, 500 }).draw(Palette::Black);
			break;
		case 4:
			Triangle({ 830, 540 }, { 860, 560 }, { 830, 580 }).draw(Palette::Black);
			break;
		case 5:
			Triangle({ 830, 620 }, { 860, 640 }, { 830, 660 }).draw(Palette::Black);
			break;
		}

	}


private:
	std::vector<String> items;
	uint32 select = 0;
	Font font = Font(25);
};

class StatusMessage
{
public:
	void setList(std::vector<String> _items)
	{
		items = _items;
	}
	String selected() const
	{
		return items[5];
	}
	void draw() const
	{
		Rect frame;
		frame = Rect(720, 80, 460, 420);
		frame.draw();
		frame.stretched(2).drawFrame(2, 0, Palette::Black);
		frame.stretched(-2).drawFrame(2, 0, Palette::Black);
		for (uint32 i = 0; i < 5; i++)
		{
			Point pos
			{
				770, 90 + i * 80
			};
			font(items[i]).draw(pos, Palette::Black);
		}
	}

private:
	std::vector<String> items;
	Font font = Font(25);
};
