void Spreadsheet::copyFrom(const Spreadsheet& src)
{
	mWidth = src.mWidth;
	mHeight = src.mHeight;
	mCells = new SpreadsheetCell* [mWidth];
	for (int i = 0; i < mWidth; i++) {
		mCells[i] = new SpreadsheetCell[mHeight];
	}
	for (int i = 0; i < mWidth; i++) {
		for (int j = 0; j < mHeight; j++) {
		mCells[i][j] = src.mCells[i][j];
		}
	}
}
Spreadsheet::Spreadsheet(const Spreadsheet& src)
{
 	copyFrom(src);
}
Spreadsheet& Spreadsheet::operator=(const Spreadsheet& rhs)
{
 // Check for self-assignment.
	if (this == &rhs) {
		return *this;
	}
 // Free the old memory.
	for (int i = 0; i < mWidth; i++) {
		delete [] mCells[i];
	}
	delete [] mCells;
	mCells = nullptr;
	// Copy the new memory.
	copyFrom(rhs);
	return *this;
}