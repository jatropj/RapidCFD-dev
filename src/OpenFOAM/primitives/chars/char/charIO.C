/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2011 OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Description
    Reads a char from an input stream, for a given version
    number and File format. If an ascii File is being read, then the line
    numbers are counted and an erroneous read is reported.

\*---------------------------------------------------------------------------*/

#include "error.H"

#include "char.H"
#include "IOstreams.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

const char* const Foam::pTraits<char>::typeName = "char";
const char Foam::pTraits<char>::zero = 0;

Foam::Istream& Foam::operator>>(Istream& is, char& c)
{
    is.read(c);
    is.check("Istream& operator>>(Istream&, char&)");
    return is;
}


Foam::Ostream& Foam::operator<<(Ostream& os, const char c)
{
    os.write(c);
    os.check("Ostream& operator<<(Ostream&, const char)");
    return os;
}


char Foam::readChar(Istream& is)
{
   char c;
   is.read(c);
   return c;
}


Foam::Ostream& Foam::operator<<(Ostream& os, const char* s)
{
    os.write(s);
    os.check("Ostream& operator<<(Ostream&, const char*)");
    return os;
}


// ************************************************************************* //
