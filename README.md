### SYSC4906C

Group member #1: Shahrik Amin 101155583
Group member #2: Jaden Sutton 101180717

### Assignment 1 documented important decisions in code

## Reason for numeric concept definition:

Numeric concept definition ensures type safety for SSPP operations. It is restricted to arithmetic types, excluding boolean and char types to avoid unintended template instantiation with non-numeric types. This decision was done to improve of SSPP's numerical computations by ensuring that only suitable numeric types are used, which in the assignment examples did not include boolen or char types.

## PU implementations and reasons for exception handlings:

PU1: execute method in PU1 calculates the average of elements in the input range and replicates it to form an output vector. Exception handling is implemented to address possible errors during the average calculation and vector creation, ensuring operation occurs well.
PU2: execute method maintains a maximum value across all inputs. This stateful behavior enables PU2 to progressively update its computation based on historical data, maintaining state within a processing unit alongside using exception handling.
PU3: Exception handling ensures that any errors during the computation, such as domain errors for non-integer types, are handled well, maintaining the integrity of the processing pipeline.

## SSPP implementation:

The execute method creates the processing flow among different PUs. It takes a range defined by iterators, performs processing through PU1, PU2, and PU3, and outputs the final result. This method utilizes the pipeline pattern, with a separation of clculations and modularity in processing steps.
