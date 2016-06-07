context("Testing support")

test_that("intersection of two sets", {
  #TODO: test and optimize intersection better
  expect_equal(intersect(matrix(c(1,2,3),3,1),matrix(c(2,3),2,1)), matrix(c(2,0,3,1),2,2,byrow = TRUE))
  expect_equal(intersect(matrix(c(1,2,3),3,1),matrix(c(1,2,3),3,1)), matrix(c(1,0,2,1,3,2),3,2,byrow = TRUE))
  expect_equal(intersect(matrix(c(1,3,2),3,1),matrix(c(1,2,3),3,1)), matrix(c(1,0,2,1,3,2),3,2,byrow = TRUE))
})

test_that("set difference of two sets",{
  expect_equal(setdiff(matrix(c(3),1,1),matrix(c(2,3),2,1)),matrix(0,0,0))
  expect_equal(setdiff(matrix(c(2,3),2,1),matrix(c(2,3),2,1)),matrix(0,0,0))
  expect_equal(setdiff(matrix(c(2,3),2,1),matrix(c(4,5),2,1)),matrix(c(2,3),2,1))
  expect_equal(setdiff(matrix(c(2,3),2,1),matrix(2,1,1)),matrix(3,1,1))
})

test_that("integer range",{

})