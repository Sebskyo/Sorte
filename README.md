# Sorte
## What is Sorte?
A sorting program implementing various algorithms in C.
It's designed to be easily usable with UNIX pipes. For example, you can pipe the results into Plotte, a plotting program.
## How do I install it?
### Linux
It's very simple. When you get a hold of the code (fx. by using `git clone`) run make:
```
make
```
Or if you don't want any .o files afterwards:
```
make nomess
```
After that, I recommend you putting the program in /usr/local/bin/ for ease of access.
```
chmod +x sorte
sudo mv sorte /usr/local/bin/sorte
```
But you probably knew that already.
### Anything else
I don't know. I could imagine a similar process would be used on other UNIX like/based systems (like BSD or OSX).
I legitimately don't know how to compile C on Windows, but I hear it's overly complicated, so good luck.
## License
> Sorte - a simple sorting program | Copyright (C) 2016  Sebastian Vikkelsø Elleholm
>
> This program is free software: you can redistribute it and/or modify
> it under the terms of the GNU General Public License as published by
> the Free Software Foundation, either version 3 of the License, or
> (at your option) any later version.
>
> This program is distributed in the hope that it will be useful,
> but WITHOUT ANY WARRANTY; without even the implied warranty of
> MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
> GNU General Public License for more details.
>
> You should have received a copy of the GNU General Public License
> along with this program.  If not, see <http://www.gnu.org/licenses/>.

Full license provided in LICENSE file.