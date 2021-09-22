-- phpMyAdmin SQL Dump
-- version 5.0.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Dec 23, 2020 at 06:30 PM
-- Server version: 10.4.11-MariaDB
-- PHP Version: 7.4.1

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `fundvoice`
--

-- --------------------------------------------------------

--
-- Table structure for table `adminlogin`
--

CREATE TABLE `adminlogin` (
  `admin_id` int(11) NOT NULL,
  `admin_username` varchar(255) NOT NULL,
  `admin_password` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `adminlogin`
--

INSERT INTO `adminlogin` (`admin_id`, `admin_username`, `admin_password`) VALUES
(1, 'bitto', 'admin');

-- --------------------------------------------------------

--
-- Table structure for table `campaigns`
--

CREATE TABLE `campaigns` (
  `campaign_id` int(11) NOT NULL,
  `campaign_name` varchar(255) NOT NULL,
  `campaign_type` varchar(255) NOT NULL,
  `campaign_days` bigint(20) NOT NULL,
  `campaign_amount` bigint(20) NOT NULL,
  `campaign_description` varchar(255) NOT NULL,
  `campaignPhone` bigint(20) NOT NULL,
  `campaignImage` varchar(255) DEFAULT NULL,
  `campaignApproval` tinyint(1) DEFAULT 0,
  `campaignExpiry` tinyint(1) DEFAULT 1,
  `campaignCreator` varchar(255) NOT NULL,
  `campaign_reg_date` timestamp NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `campaigns`
--

INSERT INTO `campaigns` (`campaign_id`, `campaign_name`, `campaign_type`, `campaign_days`, `campaign_amount`, `campaign_description`, `campaignPhone`, `campaignImage`, `campaignApproval`, `campaignExpiry`, `campaignCreator`, `campaign_reg_date`) VALUES
(27, 'EDUCATION FOR POOR', 'natural disaster', 7, 10000, 'ok', 1706159566, 'assets/images/campaignImages/c148742e5aee67640ec2387a8223dde6', 1, 1, 'bitto', '2020-12-23 05:49:18');

-- --------------------------------------------------------

--
-- Table structure for table `donationproof`
--

CREATE TABLE `donationproof` (
  `donation_proof_id` int(11) NOT NULL,
  `donor_id` int(11) NOT NULL,
  `campaign_id` int(11) NOT NULL,
  `donate_amount` bigint(20) NOT NULL,
  `donor_address` varchar(200) NOT NULL,
  `proof_image` varchar(255) DEFAULT NULL,
  `admin_approval` tinyint(1) DEFAULT 0,
  `proof_submit_date` timestamp NOT NULL DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `donors`
--

CREATE TABLE `donors` (
  `donor_id` int(11) NOT NULL,
  `donor_name` varchar(50) NOT NULL,
  `donor_email` varchar(50) NOT NULL,
  `campaign_id` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `organizers`
--

CREATE TABLE `organizers` (
  `organizer_id` int(11) NOT NULL,
  `organizer_fullname` varchar(256) NOT NULL,
  `organizer_username` varchar(256) NOT NULL,
  `organizer_email` varchar(256) NOT NULL,
  `organizer_password` varchar(256) NOT NULL,
  `organizer_phone` varchar(22) NOT NULL,
  `vkey` varchar(45) DEFAULT NULL,
  `verified` tinyint(1) DEFAULT 0,
  `organizer_reg_date` timestamp NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `organizers`
--

INSERT INTO `organizers` (`organizer_id`, `organizer_fullname`, `organizer_username`, `organizer_email`, `organizer_password`, `organizer_phone`, `vkey`, `verified`, `organizer_reg_date`) VALUES
(9, 'Abu Kowshir Bitto', 'bitto', 'abu35-2379@diu.edu.bd', '$2y$10$5uumjkVteCwJ00KoVjQCCeYyK7Ux7WaP4BjSydXbv1ByvOcG.oEiy', '01615450650', 'f251e7d26196ff8b788f5d030c4e5cb3', 1, '2020-12-22 22:07:09'),
(10, 'Kowshir Bitto', 'bbitto', 'abu.kowshir7777@gmail.com', '$2y$10$7.ym7WFcyRpWaSQ9EDorlu/V4Hz6ABLVszHjTLKn8o1/Z8q32mOFq', '01615450650', 'b92f2669009fa2251e98b1f8e227b472', 0, '2020-12-23 05:48:15');

-- --------------------------------------------------------

--
-- Table structure for table `pwdreset`
--

CREATE TABLE `pwdreset` (
  `pwdResetId` int(11) NOT NULL,
  `pwdResetEmail` text NOT NULL,
  `pwdResetSelector` text NOT NULL,
  `pwdResetToken` longtext NOT NULL,
  `pwdResetExpires` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `adminlogin`
--
ALTER TABLE `adminlogin`
  ADD PRIMARY KEY (`admin_id`);

--
-- Indexes for table `campaigns`
--
ALTER TABLE `campaigns`
  ADD PRIMARY KEY (`campaign_id`);

--
-- Indexes for table `donationproof`
--
ALTER TABLE `donationproof`
  ADD PRIMARY KEY (`donation_proof_id`);

--
-- Indexes for table `donors`
--
ALTER TABLE `donors`
  ADD PRIMARY KEY (`donor_id`);

--
-- Indexes for table `organizers`
--
ALTER TABLE `organizers`
  ADD PRIMARY KEY (`organizer_id`);

--
-- Indexes for table `pwdreset`
--
ALTER TABLE `pwdreset`
  ADD PRIMARY KEY (`pwdResetId`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `adminlogin`
--
ALTER TABLE `adminlogin`
  MODIFY `admin_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `campaigns`
--
ALTER TABLE `campaigns`
  MODIFY `campaign_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=28;

--
-- AUTO_INCREMENT for table `donationproof`
--
ALTER TABLE `donationproof`
  MODIFY `donation_proof_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=17;

--
-- AUTO_INCREMENT for table `donors`
--
ALTER TABLE `donors`
  MODIFY `donor_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=47;

--
-- AUTO_INCREMENT for table `organizers`
--
ALTER TABLE `organizers`
  MODIFY `organizer_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT for table `pwdreset`
--
ALTER TABLE `pwdreset`
  MODIFY `pwdResetId` int(11) NOT NULL AUTO_INCREMENT;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
