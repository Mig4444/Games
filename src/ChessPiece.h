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
		virtual ~Piece();
		virtual void move() = 0;

	private:
		bool captured_m;
};

class King : public Piece
{
	public:
		void move() override;

	private:
};

class Queen : public Piece
{
	public:
		void move() override;

	private:
};

class Bishop : public Piece
{
	public:
		void move() override;

	private:
};

class Knight : public Piece
{
	public:
		void move() override;

	private:
};

class Rook : public Piece
{
	public:
		void move() override;

	private:
};

class Pawn : public Piece
{
	public:
		void move() override;

	private:
};

#endif /* CHESSPIECE_H_ */
