# Sports Analytics

Analyze the provided files with winners of the following events:

- World Series
- MLS Cup
- The Finals
- The Super Bowl
- The Stanley Cup

Answer the following questions about each event:

- A team with the most appearances in the final
- A team with the fewest appearances in the final
- A team with the most wins in the final
- A team with the fewest wins in the final
- A team with the most losses in the final
- A team with the fewest losses in the final
- A team with the longest sequence of appearances
- A team with the longest sequence of wins
- A team with the longest sequence of losses
- The 2nd most successful team

The answers are provided as unit tests. In essence, you must pass all tests.

## Team comparison

See the sample output below. The usual order is as follows (always compare by name last)

- Appearances > name
- Wins > appearances > name
- Losses > appearances > name
- AppearanceSequence > appearances > name
- WinningSequence > wins > appearances > name
- LosingSequence > losses > appearances > name

## References

- <https://en.wikipedia.org/wiki/List_of_World_Series_champions>
- <https://en.wikipedia.org/wiki/List_of_MLS_Cup_finals>
- <https://en.wikipedia.org/wiki/List_of_NBA_champions>
- <https://en.wikipedia.org/wiki/List_of_Super_Bowl_champions>
- <https://en.wikipedia.org/wiki/List_of_Stanley_Cup_champions>

## Sample output

```text
---MLB---
Most appearances              New York Yankees              40        
Fewest appearances            Anaheim Angels                1         
Most wins                     New York Yankees              27        
Fewest wins                   Colorado Rockies              0         
Most losses                   New York Yankees              13        
Fewest losses                 Anaheim Angels                0         
Sequential appearances        New York Yankees              5         
Sequential winnings           New York Yankees              5         
Sequential losses             New York Giants               3         
Second best                   St. Louis Cardinals           11        
---MLS---
Most appearances              Los Angeles Galaxy            9         
Fewest appearances            Atlanta United FC             1         
Most wins                     Los Angeles Galaxy            5         
Fewest wins                   FC Dallas                     0         
Most losses                   New England Revolution        5         
Fewest losses                 Atlanta United FC             0         
Sequential appearances        D.C. United                   4         
Sequential winnings           Los Angeles Galaxy            2         
Sequential losses             New England Revolution        3         
Second best                   D.C. United                   4         
---NBA---
Most appearances              Los Angeles Lakers            26        
Fewest appearances            Baltimore Bullets             1         
Most wins                     Boston Celtics                17        
Fewest wins                   Baltimore Bullets             0         
Most losses                   Los Angeles Lakers            14        
Fewest losses                 Philadelphia Warriors         0         
Sequential appearances        Boston Celtics                10        
Sequential winnings           Boston Celtics                8         
Sequential losses             Los Angeles Lakers            3         
Second best                   Los Angeles Lakers            12        
---NFL---
Most appearances              New England Patriots          11        
Fewest appearances            Arizona Cardinals             1         
Most wins                     New England Patriots          6         
Fewest wins                   Arizona Cardinals             0         
Most losses                   New England Patriots          5         
Fewest losses                 Los Angeles Raiders           0         
Sequential appearances        Buffalo Bills                 4         
Sequential winnings           New England Patriots          2         
Sequential losses             Buffalo Bills                 4         
Second best                   Pittsburgh Steelers           6         
---NHL---
Most appearances              Montreal Canadiens            30        
Fewest appearances            Anaheim Ducks                 1         
Most wins                     Montreal Canadiens            22        
Fewest wins                   Florida Panthers              0         
Most losses                   Boston Bruins                 14        
Fewest losses                 Anaheim Ducks                 0         
Sequential appearances        Montreal Canadiens            10        
Sequential winnings           Montreal Canadiens            5         
Sequential losses             Toronto Maple Leafs           3         
Second best                   Detroit Red Wings             11        
```