#pragma once
#pragma once
struct MousePoint
{
	int x;
	int y;
};

class MouseEvent
{
public:
	enum EventType
	{
		LeftPress,
		LeftRelease,
		RightPress,
		RightRelease,
		MiddlePress,
		MiddleRelease,
		WheelUp,
		WheelDown,
		Move,
		RAW_MOVE,
		Invalid
	};

	MouseEvent();
	MouseEvent(const EventType type, const int x, const int y);
	bool IsValid() const;
	EventType GetType() const;
	MousePoint GetPos() const;
	int GetPosX() const;
	int GetPosY() const;

private:
	EventType type;
	int x;
	int y;
};