use AccountingDB
go
--DROP TABLE IF EXISTS Products;
GO
CREATE TABLE Products (
    ProductID INT IDENTITY(1,1) PRIMARY KEY,
    ProductCode VARCHAR(50) UNIQUE NOT NULL,
    ProductName NVARCHAR(100) NOT NULL,
    BuyPrice INT NOT NULL,
    SellPrice INT NOT NULL,
    Stock INT NOT NULL
);
