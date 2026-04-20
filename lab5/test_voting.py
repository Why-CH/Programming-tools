import unittest
from voting import count_votes, find_winner, analyze_voting


class TestVoting(unittest.TestCase):

    def test_count_votes(self):
        self.assertEqual(count_votes(["A", "A", "B"]), {"A": 2, "B": 1})

    def test_find_winner_single(self):
        self.assertEqual(find_winner({"A": 5, "B": 2}), "A")

    def test_analyze_voting(self):
        result = analyze_voting(["A", "B", "A"])
        self.assertEqual(result["winner"], "A")

    def test_wrong_expected_count(self):
        self.assertEqual(count_votes(["A", "A", "B"]), {"A": 3, "B": 1})

    def test_wrong_winner(self):
        self.assertEqual(find_winner({"A": 3, "B": 1}), "B")

    def test_wrong_analyze_structure(self):
        result = analyze_voting(["A", "B"])
        self.assertEqual(result, {"winner": "B"})


if __name__ == "__main__":
    unittest.main()
