/**
 * @file exercise11_test.hpp
 * @author Roman Yasinovskyy
 * @brief Exercise 11 test
 * @version 2022.3
 * @date 2022-03-08
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef CATCH_CONFIG_MAIN
#define CATCH_CONFIG_MAIN
#include "../../catch2/catch.hpp"
#endif
#include "../src/exercise13.hpp"

TEST_CASE("Most appearances in the final", "[mostAppearances]") {
  CHECK(mostAppearances("../data/exercise13_mlb.txt") == "New York Yankees");
  CHECK(mostAppearances("../data/exercise13_mls.txt") == "Los Angeles Galaxy");
  CHECK(mostAppearances("../data/exercise13_nba.txt") == "Los Angeles Lakers");
  CHECK(mostAppearances("../data/exercise13_nfl.txt") ==
        "New England Patriots");
  CHECK(mostAppearances("../data/exercise13_nhl.txt") == "Montreal Canadiens");
}

TEST_CASE("Fewest appearances in the final", "[fewestAppearances]") {
  CHECK(fewestAppearances("../data/exercise13_mlb.txt") == "Anaheim Angels");
  CHECK(fewestAppearances("../data/exercise13_mls.txt") == "Atlanta United FC");
  CHECK(fewestAppearances("../data/exercise13_nba.txt") == "Baltimore Bullets");
  CHECK(fewestAppearances("../data/exercise13_nfl.txt") == "Arizona Cardinals");
  CHECK(fewestAppearances("../data/exercise13_nhl.txt") == "Anaheim Ducks");
}

TEST_CASE("Most wins in the final", "[mostWins]") {
  CHECK(mostWins("../data/exercise13_mlb.txt") == "New York Yankees");
  CHECK(mostWins("../data/exercise13_mls.txt") == "Los Angeles Galaxy");
  CHECK(mostWins("../data/exercise13_nba.txt") == "Boston Celtics");
  CHECK(mostWins("../data/exercise13_nfl.txt") == "New England Patriots");
  CHECK(mostWins("../data/exercise13_nhl.txt") == "Montreal Canadiens");
}

TEST_CASE("Fewest wins a final", "[fewestWins]") {
  CHECK(fewestWins("../data/exercise13_mlb.txt") == "Colorado Rockies");
  CHECK(fewestWins("../data/exercise13_mls.txt") == "FC Dallas");
  CHECK(fewestWins("../data/exercise13_nba.txt") == "Baltimore Bullets");
  CHECK(fewestWins("../data/exercise13_nfl.txt") == "Arizona Cardinals");
  CHECK(fewestWins("../data/exercise13_nhl.txt") == "Florida Panthers");
}

TEST_CASE("Most losses in the final", "[mostLosses]") {
  CHECK(mostLosses("../data/exercise13_mlb.txt") == "New York Yankees");
  CHECK(mostLosses("../data/exercise13_mls.txt") == "New England Revolution");
  CHECK(mostLosses("../data/exercise13_nba.txt") == "Los Angeles Lakers");
  CHECK(mostLosses("../data/exercise13_nfl.txt") == "New England Patriots");
  CHECK(mostLosses("../data/exercise13_nhl.txt") == "Boston Bruins");
}

TEST_CASE("Fewest losses in the final", "[fewestLosses]") {
  CHECK(fewestLosses("../data/exercise13_mlb.txt") == "Anaheim Angels");
  CHECK(fewestLosses("../data/exercise13_mls.txt") == "Atlanta United FC");
  CHECK(fewestLosses("../data/exercise13_nba.txt") == "Philadelphia Warriors");
  CHECK(fewestLosses("../data/exercise13_nfl.txt") == "Los Angeles Raiders");
  CHECK(fewestLosses("../data/exercise13_nhl.txt") == "Anaheim Ducks");
}

TEST_CASE("Longest sequence of appearances", "[longestAppearancesSequence]") {
  CHECK(longestAppearancesSequence("../data/exercise13_mlb.txt") ==
        "New York Yankees");
  CHECK(longestAppearancesSequence("../data/exercise13_mls.txt") ==
        "D.C. United");
  CHECK(longestAppearancesSequence("../data/exercise13_nba.txt") ==
        "Boston Celtics");
  CHECK(longestAppearancesSequence("../data/exercise13_nfl.txt") ==
        "Buffalo Bills");
  CHECK(longestAppearancesSequence("../data/exercise13_nhl.txt") ==
        "Montreal Canadiens");
}

TEST_CASE("Longest sequence of wins", "[longestWinningSequence]") {
  CHECK(longestWinningSequence("../data/exercise13_mlb.txt") ==
        "New York Yankees");
  CHECK(longestWinningSequence("../data/exercise13_mls.txt") ==
        "Los Angeles Galaxy");
  CHECK(longestWinningSequence("../data/exercise13_nba.txt") ==
        "Boston Celtics");
  CHECK(longestWinningSequence("../data/exercise13_nfl.txt") ==
        "New England Patriots");
  CHECK(longestWinningSequence("../data/exercise13_nhl.txt") ==
        "Montreal Canadiens");
}

TEST_CASE("Longest sequence of losses", "[longestLosingSequence]") {
  CHECK(longestLosingSequence("../data/exercise13_mlb.txt") ==
        "New York Giants");
  CHECK(longestLosingSequence("../data/exercise13_mls.txt") ==
        "New England Revolution");
  CHECK(longestLosingSequence("../data/exercise13_nba.txt") ==
        "Los Angeles Lakers");
  CHECK(longestLosingSequence("../data/exercise13_nfl.txt") == "Buffalo Bills");
  CHECK(longestLosingSequence("../data/exercise13_nhl.txt") ==
        "Toronto Maple Leafs");
}

TEST_CASE("2nd most successful team", "[secondBest]") {
  CHECK(secondBest("../data/exercise13_mlb.txt") == "St. Louis Cardinals");
  CHECK(secondBest("../data/exercise13_mls.txt") == "D.C. United");
  CHECK(secondBest("../data/exercise13_nba.txt") == "Los Angeles Lakers");
  CHECK(secondBest("../data/exercise13_nfl.txt") == "Pittsburgh Steelers");
  CHECK(secondBest("../data/exercise13_nhl.txt") == "Detroit Red Wings");
}
