/*
Text String, Text
Color, Text Alignment, Text Point Size, Text Font Family, Text Font
Style, Text Font Weight (refer to shape_input_file_specs.txt). Line,
Polyline, Polygon, Rectangle, Ellipse, Text Classes will override the
virtual interface of base class Shape


shape dimensions, text string, text 
color, text alignment, text point size, text font family, text font
style, text font weight. All shapes must also have a unique ID
*/
#include <iostream>
#include <string>
#include <QText>
#include <qnamespace.h>
using namespace Qt;

class Text : public Shape
{
private:
	double shapeDimensions;
	string textString;
	string textColor;
	Shape textAlignment;
	int textPointSize const;
	string textFontFamily;
	string textFontStyle;
	int textFontWeight;
public:
	Text QText(const QString& text, QWidget* parent = nullptr);
	Text QText(QWidget* parent = nullptr);
	virtual Text ~QText();
	//Qt::Alignment alignment() const;
	QText::AutoFormatting	autoFormatting() const;
	//QString	fontFamily() const;
	qreal	fontPointSize() const;
	//int	fontWeight() const;
	bool isReadOnly() const;
	bool isUndoRedoEnabled() const;
	void mergeCurrentCharFormat(const QTextCharFormat& modifier);
	QString	placeholderText() const;
	void	print(QPagedPaintDevice* printer) const;
	//void setTextString(string textString) { this->textString = textString; }
	//void setTextPointSize(int textPointSize) { this->textPointSize = textPointSize; }
	//void setTextFontFamily(string textFontFamily) { this->textFontFamily = textFontFamily; }
	//void setTextColor(string textColor) { this->textColor = textColor; }
	//void setTextFontStyle(string textFontStyle) { this->textFontStyle = textFontStyle; }
	//void setTextFontWeight(int textFontWeight) { this->textFontWeight = textFontWeight; }
	QColor	textBackgroundColor() const;
	//QColor	textColor() const;
	QString	toPlainText() const




};