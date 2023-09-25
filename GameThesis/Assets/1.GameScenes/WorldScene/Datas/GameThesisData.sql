-- phpMyAdmin SQL Dump
-- version 5.0.4
-- https://www.phpmyadmin.net/
--
-- Máy chủ: 127.0.0.1
-- Thời gian đã tạo: Th3 17, 2023 lúc 06:57 PM
-- Phiên bản máy phục vụ: 10.4.17-MariaDB-log
-- Phiên bản PHP: 8.0.2

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Cơ sở dữ liệu: `bombcrypto`
--

-- --------------------------------------------------------

--
-- Cấu trúc bảng cho bảng `hero`
--

CREATE TABLE `hero` (
  `Id` int(11) NOT NULL,
  `Id_Account` int(11) NOT NULL,
  `Hero` text NOT NULL,
  `State` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Cấu trúc bảng cho bảng `player_account`
--

CREATE TABLE `player_account` (
  `Id` int(11) NOT NULL,
  `Account` varchar(255) NOT NULL,
  `Name` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Cấu trúc bảng cho bảng `temporarytoken`
--

CREATE TABLE `temporarytoken` (
  `Id` int(11) NOT NULL,
  `Id_Account` int(11) NOT NULL,
  `Token` float NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Chỉ mục cho các bảng đã đổ
--

--
-- Chỉ mục cho bảng `hero`
--
ALTER TABLE `hero`
  ADD PRIMARY KEY (`Id`),
  ADD KEY `fk_hero` (`Id_Account`);

--
-- Chỉ mục cho bảng `player_account`
--
ALTER TABLE `player_account`
  ADD PRIMARY KEY (`Id`);

--
-- Chỉ mục cho bảng `temporarytoken`
--
ALTER TABLE `temporarytoken`
  ADD PRIMARY KEY (`Id`),
  ADD KEY `fk_token` (`Id_Account`);

--
-- Các ràng buộc cho các bảng đã đổ
--

--
-- Các ràng buộc cho bảng `hero`
--
ALTER TABLE `hero`
  ADD CONSTRAINT `fk_hero` FOREIGN KEY (`Id_Account`) REFERENCES `player_account` (`Id`) ON DELETE CASCADE ON UPDATE CASCADE;

--
-- Các ràng buộc cho bảng `temporarytoken`
--
ALTER TABLE `temporarytoken`
  ADD CONSTRAINT `fk_token` FOREIGN KEY (`Id_Account`) REFERENCES `player_account` (`Id`) ON DELETE CASCADE ON UPDATE CASCADE;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
