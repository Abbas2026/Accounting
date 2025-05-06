USE AccountingDB;
GO
DROP TABLE IF EXISTS Users;

CREATE TABLE Users (
    UserID INT IDENTITY(1,1) PRIMARY KEY,
    FullName NVARCHAR(100),
    Username NVARCHAR(50) UNIQUE,
    PhoneNumber NVARCHAR(15),
    Password NVARCHAR(100)
);

INSERT INTO Users (FullName, Username, PhoneNumber, Password)
VALUES
('abbas-khorsand', 'admin', '09338456088', 'abbas2020');