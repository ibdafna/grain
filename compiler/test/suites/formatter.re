open Grain_tests.TestFramework;
open Grain_tests.Runner;

describe("formatter", ({test, testSkip}) => {
  let test_or_skip =
    Sys.backend_type == Other("js_of_ocaml") ? testSkip : test;

  let assertFormatOutput = makeFormatterRunner(test_or_skip);

  assertFormatOutput("aliases", "aliases");
  assertFormatOutput("application", "application");
  assertFormatOutput("application2", "application2");
  assertFormatOutput("application_indenting", "application_indenting");
  assertFormatOutput("function_params", "function_params");
  assertFormatOutput("variants", "variants");
  assertFormatOutput("matches", "matches");
  assertFormatOutput("imports", "imports");
  assertFormatOutput("wasm", "wasm");
  assertFormatOutput("spreads", "spreads");
  assertFormatOutput("nested_matches", "nested_matches");
  assertFormatOutput("number_sugar", "number_sugar");
  assertFormatOutput("records", "records");
  assertFormatOutput("guards", "guards");
  assertFormatOutput("arrays", "arrays");
  assertFormatOutput("ifthenelse", "ifthenelse");
  assertFormatOutput("infix", "infix");
  assertFormatOutput("comments", "comments");
  assertFormatOutput("for_loops", "for_loops");
  assertFormatOutput("strings", "strings");
  assertFormatOutput("tuples", "tuples");
  assertFormatOutput("blocks", "blocks");
  assertFormatOutput("lambda", "lambda");
  assertFormatOutput("operators", "operators");
  assertFormatOutput("enums", "enums");
  assertFormatOutput("enum_long", "enum_long");
  assertFormatOutput("lets", "lets");
  assertFormatOutput("ignores", "ignores");
  assertFormatOutput("list_sugar", "list_sugar");
  assertFormatOutput("values", "values");
  assertFormatOutput("brace_comments", "brace_comments");
  assertFormatOutput("while_loops", "while_loops");
  assertFormatOutput("parens", "parens");
});
