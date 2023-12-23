#include <DoveEngineEditor.h>

class SampleProject: public DoveEngineEditor::Application
{
public:
	SampleProject()
	{

	}

	~SampleProject()
	{

	}
};

DoveEngineEditor::Application* DoveEngineEditor::CreateApplication()
{
	return new SampleProject();
}