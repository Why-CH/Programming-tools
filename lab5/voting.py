def count_votes(votes):
    """
    Підраховує кількість голосів за кожного кандидата.
    """
    result = {}
    for v in votes:
        result[v] = result.get(v, 0) + 1
    return result


def find_winner(vote_count):
    """
    Визначає переможця або нічию.
    """
    if not vote_count:
        return None

    max_votes = max(vote_count.values())
    winners = [k for k, v in vote_count.items() if v == max_votes]

    if len(winners) > 1:
        return "нічия"
    return winners[0]


def analyze_voting(votes):
    """
    Формує повний результат голосування.
    """
    counts = count_votes(votes)
    winner = find_winner(counts)

    return {
        "votes": counts,
        "winner": winner
    }


def main():
    print("Введіть голоси через пробіл (наприклад: A B A C):")
    votes = input().split()

    result = analyze_voting(votes)

    print("\nРезультати голосування:")
    print("Підрахунок:", result["votes"])
    print("Переможець:", result["winner"])


if __name__ == "__main__":
    import doctest
    doctest.testmod()

    main()
