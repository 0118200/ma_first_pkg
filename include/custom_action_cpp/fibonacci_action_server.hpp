#ifndef CUSTOM_ACTION_CPP__FIBONACCI_ACTION_SERVER_HPP_
#define CUSTOM_ACTION_CPP__FIBONACCI_ACTION_SERVER_HPP_

#include "custom_action_interfaces/action/fibonacci.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "custom_action_cpp/visibility_control.hpp"

namespace custom_action_cpp
{

class FibonacciActionServer : public rclcpp::Node
{
public:
  using Fibonacci = custom_action_interfaces::action::Fibonacci;
  using GoalHandleFibonacci = rclcpp_action::ServerGoalHandle<Fibonacci>;

  CUSTOM_ACTION_CPP_PUBLIC
  explicit FibonacciActionServer(const rclcpp::NodeOptions & options = rclcpp::NodeOptions());

private:
  rclcpp_action::Server<Fibonacci>::SharedPtr action_server_;

  void execute(const std::shared_ptr<GoalHandleFibonacci> goal_handle);
};

}  // namespace custom_action_cpp

#endif  // CUSTOM_ACTION_CPP__FIBONACCI_ACTION_SERVER_HPP_
