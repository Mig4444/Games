/*
 * ChessPiece.h
 *
 *  Created on: 5 nov. 2021
 *      Author: mig
 */

#ifndef CHESSPIECE_H_
#define CHESSPIECE_H_

class Piece
{
	public:
		virtual void move() = 0;
	private:
		bool captured_m;
};

class King : public Piece
{
	public:
		void move() override;
	private:
}



#endif /* CHESSPIECE_H_ */
