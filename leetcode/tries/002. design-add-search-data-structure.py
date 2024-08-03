
#? Use a trie to create the data structure
#! T.C: O(N) for addWord, O(26^M) for search, where M is the number of dots in the search word, S.C: O(N) for addWord, O(1) for search
# https://leetcode.com/problems/design-add-and-search-words-data-structure/submissions/1343402486

class WordDictionary:

    def __init__(self):
        self.root = { 
            'children': {},  # Use strings for dictionary keys
            'isEnding': False 
        }

    def addWord(self, word: str) -> None:
        curr = self.root

        for c in word:
            if c not in curr['children']: # curr is a simple dict to [''] is used to access it. If it was an object from class TrieNode(), we could directly access using curr.children
                curr['children'][c] = { 'children': {}, 'isEnding': False }  
            
            curr = curr['children'][c]
        
        curr['isEnding'] = True

    def search(self, word: str) -> bool:
        def dfs(j, root):
            curr = root

            for i in range(j, len(word)):
                c = word[i]

                if c == '.': # if it's a dot, we have to check every child for possibility so we run the same function recursively on every child until one of them is True
                    for child in curr['children'].values():
                        if dfs(i + 1, child):
                            return True
                    return False

                else:
                    if c not in curr['children']:
                        return False

                    curr = curr['children'][c]
            
            return curr['isEnding']

        return dfs(0, self.root)
