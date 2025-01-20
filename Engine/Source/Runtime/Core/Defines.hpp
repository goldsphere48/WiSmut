#pragma once
#include <memory>
#include <cstdint>

template<typename T>
using SharedPtr = std::shared_ptr<T>;

template<typename T, typename ...Args>
constexpr SharedPtr<T> CreateSharedPtr(Args&& ...args)
{
	return std::make_shared<T>(std::forward<Args>(args)...);
}

template<typename T>
using UniquePtr = std::unique_ptr<T>;

template<typename T, typename ...Args>
constexpr UniquePtr<T> CreateUniquePtr(Args&& ...args)
{
	return std::make_unique<T>(std::forward<Args>(args)...);
}

using u8 =  std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;

using i8 =  std::int8_t;
using i16 = std::int16_t;
using i32 = std::int32_t;
using i64 = std::int64_t;

using f32 = float;
using f64 = double;
