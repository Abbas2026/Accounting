use AccountingDB
go
--DROP TABLE IF EXISTS Sales;

CREATE TABLE Sales (
    SaleID INT IDENTITY(1,1) PRIMARY KEY,
    ProductCode VARCHAR(50),
	ProductName NVARCHAR(100),
	SalePrice INT,
    Quantity INT,
	TotalPrice INT,
    SaleDate DATETIME
);
