# fractalMusic
C++ program that creates fractal music- 
Since ancient history mathematics and music have had a close relationship.
A large portion of modern music theory is based upon the work of the same Pythagoras that contributed much to geometry.
Pythagoras developed a musical theory based upon ratios that helped explain the relationship of different notes and scales.
A unison is the ratio 1:1, a perfect octave is a 2:1 ratio, a perfect fifth has a ratio of 3:2, a perfect fourth is 4:3,
and a perfect third is 5:4. Pythagoras based these ratios on a base 12, as the majority of these ratios could be divided as such.
Pythagoras expanded these views to include many other aspects of the natural world, believing that everything could be explained
mathematically and that the universe itself had an all-encompassing harmony (History of music theory, n.d.). 
Fractals are found all over in nature in the majority of common things that we see every day. Clouds, trees, mountains,
and rivers are all examples of fractals.  Fractals are based around the mathematical idea of recursion. A simple formula
entered into itself over and over will produce a stunning variety of different fractals. Since fractals are so much a part
of the natural world I find it very fitting that they would find an interesting association with music (Fractal foundation, n.d.). 
Fractal music is based upon musical patterns. There are several methods that are used to produce music but they all revolve
around the idea of recursion. The first method is known as L-method. This method uses simple strings with patterns assigned
to each corresponding letter. The result is then entered into itself and the pattern continues to build. For example, say that
we had a string B C. Now these letters in turn corresponded to notes. Each letter, in turn, had a corresponding pattern, B=B C F G,
and C=C B. This string of notes would quickly grow to B C F G C B. Now this string would be used to produce the next series of notes,
on and on. This style can be used on individual notes, chord progressions, or even rhythm patterns (Hazard, Kimport, & Johnson, 1999). 
Another style of fractal music is known as turtle graphics. This style “draws” out the pattern using four different symbols- F, f, +,
and -. The F tells the “turtle” to move forward and draw a line. The f symbol tells the program to move forward but not to draw a line.
The + and – symbol tell the program to move left or right a certain number of degrees. The musical notes then follow the pattern up
and down a scale (Hazard et al., 1999). 
Sound patterns consist of a variety of different types. The first is known a white noise and is a simple random pattern of different
sounds. The next step in refinement is known as pink noise. This is the type of sound most often produced by fractal methods.
The last type is called brown noise, this type is the most refined and is produced by several methods including, Gaussian,
midpoint displacement, and random cuts. The Gaussian method uses a Gaussian distribution to randomly vary the notes from
point to point. The midpoint displacement method randomly displaces the middle of a line either up or down and then cuts
the displacement amount in half at interval points in between the midpoint. Lastly, the random cuts method creates cuts
sections of a line at random distances and then moves them up or down random amounts (Hazard et al., 1999). 
For my solution, I used a combination of different L-methods. I based the note progression on the chords contained in the
key of C, but instead of playing the entire chord at once, I played each note of the chord in a specific pattern. The pattern
that I chose is one common on fingerstyle guitar, the root note of the chord then the middle note of the chord, the highest
note of the chord, and then finally back to the middle note. Each note is a quarter note so the time is standard 4:4.
The notes of the chord are then added to the seed note and then the next chord is played. For example, a C chord is C, E, and G.
If the program’s seed is C, the program will play C, E, G, and E again. The next sequence will play the notes of the C chord,
followed by the notes of an E chord, then the notes of a G chord, and finally back to the E chord. The notes of each chord
will then be used to play the next chord sequence on and on. I used an iterator to control the recursion, otherwise, the
program would continue on forever. This method creates both a pattern and repetition that is common in western music and 
also ensures that all of the notes harmonize with each other. 
The link between music and mathematics has existed for thousands of years. Musical theory is rooted in mathematics and 
comes from the same mind that had a large influence on the study of geometry. It is also very interesting to see how a 
feature so present in the natural world can not only be based upon mathematics but can also be used as an inspiration 
and method to write music. Fractal music is very much in the spirit of Pythagoras. In his mind, everything in the natural 
world could be explained mathematically and that music was the natural expression of the very soul of the universe. The 
use of Fractals in writing music makes these ideas come full circle (History of music theory, n.d.). 

References
History of music theory (n.d.). Pythagoras: Music, geometry and mathematics. Retrieved from http://www.historyofmusictheory.com/?page_id=20. 
Fractal Foundation. (n.d.). What are fractals? Retrieved from https://fractalfoundation.org/resources/what-are-fractals/. 
Hazard, C., Kimport, C., & Johnson, D. (1999). Fractal Music. Retrieved from http://tursiops.cc/fm/. 

