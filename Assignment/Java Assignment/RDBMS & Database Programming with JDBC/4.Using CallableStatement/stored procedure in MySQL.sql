DELIMITER $$

CREATE PROCEDURE GetUserFullName (
    IN p_userId INT,
    OUT p_fullName VARCHAR(120)
)
BEGIN
    SELECT CONCAT(fname, ' ', lname)
    INTO p_fullName
    FROM users
    WHERE id = p_userId;
END$$

DELIMITER ;
