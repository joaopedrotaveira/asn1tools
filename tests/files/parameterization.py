EXPECTED = {'Parameterization': {'extensibility-implied': False,
          'imports': {},
          'object-classes': {},
          'object-sets': {},
          'tags': 'AUTOMATIC',
          'types': {'A': {'type': 'SEQUENCE',
                          'members': [{'name': 'a',
                                       'type': 'B',
                                       'optional': False}],
                          'parameters': ['B']},
                    'A-Boolean': {'type': 'A',
                                  'actual-parameters': ['BOOLEAN']},
                    'A-Integer': {'type': 'A',
                                  'actual-parameters': ['INTEGER']},
                    'B': {'type': 'SEQUENCE',
                          'parameters': ['A', 'B'],
                          'members': [
                              {'type': 'A',
                               'name': 'a',
                               'optional': False},
                              {'type': 'B',
                               'name': 'b',
                               'optional': True}]},
                    'B-BooleanInteger': {'type': 'B',
                                         'actual-parameters': ['BOOLEAN',
                                                               'INTEGER']},
                    'C': {'type': 'CHOICE',
                          'parameters': ['A'],
                          'members': [{'name': 'a',
                                       'type': 'A'},
                                      {'name': 'b',
                                       'type': 'B',
                                       'actual-parameters': ['A',
                                                             'INTEGER']}]},
                    'D': {'type': 'SEQUENCE',
                          'members': [{'name': 'a',
                                       'type': 'C',
                                       'actual-parameters': ['B-BooleanInteger']},
                                      {'name': 'b',
                                       'type': 'CHOICE',
                                       'members': [{'name': 'c',
                                                    'type': 'A',
                                                    'actual-parameters': [{
                                                        'type': 'B',
                                                        'actual-parameters': ['NULL',
                                                                              'INTEGER']}]},
                                                   {'name': 'd',
                                                    'type': 'B',
                                                    'actual-parameters': ['NULL',
                                                                          'INTEGER']}]}]}},
          'values': {}}}
