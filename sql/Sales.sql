CREATE TABLE Sales (
    SaleID INT IDENTITY(1,1) PRIMARY KEY,
    ProductCode VARCHAR(50),
    Quantity INT,
    SalePrice INT,
    SaleDate DATETIME
);
