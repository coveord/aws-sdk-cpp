﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBInstanceMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API CreateDBInstanceRequest : public RDSRequest
  {
  public:
    CreateDBInstanceRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBInstance"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p>Type: String</p> <p> <b>MySQL</b> </p> <p>The name of the database
     * to create when the DB instance is created. If this parameter is not specified,
     * no database is created in the DB instance.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain 1 to 64 letters or numbers.</p> </li> <li> <p>Cannot be a word
     * reserved by the specified database engine</p> </li> </ul> <p> <b>MariaDB</b>
     * </p> <p>The name of the database to create when the DB instance is created. If
     * this parameter is not specified, no database is created in the DB instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p>
     * </li> <li> <p>Cannot be a word reserved by the specified database engine</p>
     * </li> </ul> <p> <b>PostgreSQL</b> </p> <p>The name of the database to create
     * when the DB instance is created. If this parameter is not specified, the default
     * "postgres" database is created in the DB instance.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain 1 to 63 letters, numbers, or underscores.</p> </li> <li>
     * <p>Must begin with a letter or an underscore. Subsequent characters can be
     * letters, underscores, or digits (0-9).</p> </li> <li> <p>Cannot be a word
     * reserved by the specified database engine</p> </li> </ul> <p> <b>Oracle</b> </p>
     * <p>The Oracle System ID (SID) of the created DB instance. If you specify
     * <code>null</code>, the default value <code>ORCL</code> is used. You can't
     * specify the string NULL, or any other reserved word, for <code>DBName</code>.
     * </p> <p>Default: <code>ORCL</code> </p> <p>Constraints:</p> <ul> <li> <p>Cannot
     * be longer than 8 characters</p> </li> </ul> <p> <b>SQL Server</b> </p> <p>Not
     * applicable. Must be null.</p> <p> <b>Amazon Aurora</b> </p> <p>The name of the
     * database to create when the primary instance of the DB cluster is created. If
     * this parameter is not specified, no database is created in the DB instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p>
     * </li> <li> <p>Cannot be a word reserved by the specified database engine</p>
     * </li> </ul>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p>Type: String</p> <p> <b>MySQL</b> </p> <p>The name of the database
     * to create when the DB instance is created. If this parameter is not specified,
     * no database is created in the DB instance.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain 1 to 64 letters or numbers.</p> </li> <li> <p>Cannot be a word
     * reserved by the specified database engine</p> </li> </ul> <p> <b>MariaDB</b>
     * </p> <p>The name of the database to create when the DB instance is created. If
     * this parameter is not specified, no database is created in the DB instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p>
     * </li> <li> <p>Cannot be a word reserved by the specified database engine</p>
     * </li> </ul> <p> <b>PostgreSQL</b> </p> <p>The name of the database to create
     * when the DB instance is created. If this parameter is not specified, the default
     * "postgres" database is created in the DB instance.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain 1 to 63 letters, numbers, or underscores.</p> </li> <li>
     * <p>Must begin with a letter or an underscore. Subsequent characters can be
     * letters, underscores, or digits (0-9).</p> </li> <li> <p>Cannot be a word
     * reserved by the specified database engine</p> </li> </ul> <p> <b>Oracle</b> </p>
     * <p>The Oracle System ID (SID) of the created DB instance. If you specify
     * <code>null</code>, the default value <code>ORCL</code> is used. You can't
     * specify the string NULL, or any other reserved word, for <code>DBName</code>.
     * </p> <p>Default: <code>ORCL</code> </p> <p>Constraints:</p> <ul> <li> <p>Cannot
     * be longer than 8 characters</p> </li> </ul> <p> <b>SQL Server</b> </p> <p>Not
     * applicable. Must be null.</p> <p> <b>Amazon Aurora</b> </p> <p>The name of the
     * database to create when the primary instance of the DB cluster is created. If
     * this parameter is not specified, no database is created in the DB instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p>
     * </li> <li> <p>Cannot be a word reserved by the specified database engine</p>
     * </li> </ul>
     */
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p>Type: String</p> <p> <b>MySQL</b> </p> <p>The name of the database
     * to create when the DB instance is created. If this parameter is not specified,
     * no database is created in the DB instance.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain 1 to 64 letters or numbers.</p> </li> <li> <p>Cannot be a word
     * reserved by the specified database engine</p> </li> </ul> <p> <b>MariaDB</b>
     * </p> <p>The name of the database to create when the DB instance is created. If
     * this parameter is not specified, no database is created in the DB instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p>
     * </li> <li> <p>Cannot be a word reserved by the specified database engine</p>
     * </li> </ul> <p> <b>PostgreSQL</b> </p> <p>The name of the database to create
     * when the DB instance is created. If this parameter is not specified, the default
     * "postgres" database is created in the DB instance.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain 1 to 63 letters, numbers, or underscores.</p> </li> <li>
     * <p>Must begin with a letter or an underscore. Subsequent characters can be
     * letters, underscores, or digits (0-9).</p> </li> <li> <p>Cannot be a word
     * reserved by the specified database engine</p> </li> </ul> <p> <b>Oracle</b> </p>
     * <p>The Oracle System ID (SID) of the created DB instance. If you specify
     * <code>null</code>, the default value <code>ORCL</code> is used. You can't
     * specify the string NULL, or any other reserved word, for <code>DBName</code>.
     * </p> <p>Default: <code>ORCL</code> </p> <p>Constraints:</p> <ul> <li> <p>Cannot
     * be longer than 8 characters</p> </li> </ul> <p> <b>SQL Server</b> </p> <p>Not
     * applicable. Must be null.</p> <p> <b>Amazon Aurora</b> </p> <p>The name of the
     * database to create when the primary instance of the DB cluster is created. If
     * this parameter is not specified, no database is created in the DB instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p>
     * </li> <li> <p>Cannot be a word reserved by the specified database engine</p>
     * </li> </ul>
     */
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = std::move(value); }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p>Type: String</p> <p> <b>MySQL</b> </p> <p>The name of the database
     * to create when the DB instance is created. If this parameter is not specified,
     * no database is created in the DB instance.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain 1 to 64 letters or numbers.</p> </li> <li> <p>Cannot be a word
     * reserved by the specified database engine</p> </li> </ul> <p> <b>MariaDB</b>
     * </p> <p>The name of the database to create when the DB instance is created. If
     * this parameter is not specified, no database is created in the DB instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p>
     * </li> <li> <p>Cannot be a word reserved by the specified database engine</p>
     * </li> </ul> <p> <b>PostgreSQL</b> </p> <p>The name of the database to create
     * when the DB instance is created. If this parameter is not specified, the default
     * "postgres" database is created in the DB instance.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain 1 to 63 letters, numbers, or underscores.</p> </li> <li>
     * <p>Must begin with a letter or an underscore. Subsequent characters can be
     * letters, underscores, or digits (0-9).</p> </li> <li> <p>Cannot be a word
     * reserved by the specified database engine</p> </li> </ul> <p> <b>Oracle</b> </p>
     * <p>The Oracle System ID (SID) of the created DB instance. If you specify
     * <code>null</code>, the default value <code>ORCL</code> is used. You can't
     * specify the string NULL, or any other reserved word, for <code>DBName</code>.
     * </p> <p>Default: <code>ORCL</code> </p> <p>Constraints:</p> <ul> <li> <p>Cannot
     * be longer than 8 characters</p> </li> </ul> <p> <b>SQL Server</b> </p> <p>Not
     * applicable. Must be null.</p> <p> <b>Amazon Aurora</b> </p> <p>The name of the
     * database to create when the primary instance of the DB cluster is created. If
     * this parameter is not specified, no database is created in the DB instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p>
     * </li> <li> <p>Cannot be a word reserved by the specified database engine</p>
     * </li> </ul>
     */
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p>Type: String</p> <p> <b>MySQL</b> </p> <p>The name of the database
     * to create when the DB instance is created. If this parameter is not specified,
     * no database is created in the DB instance.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain 1 to 64 letters or numbers.</p> </li> <li> <p>Cannot be a word
     * reserved by the specified database engine</p> </li> </ul> <p> <b>MariaDB</b>
     * </p> <p>The name of the database to create when the DB instance is created. If
     * this parameter is not specified, no database is created in the DB instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p>
     * </li> <li> <p>Cannot be a word reserved by the specified database engine</p>
     * </li> </ul> <p> <b>PostgreSQL</b> </p> <p>The name of the database to create
     * when the DB instance is created. If this parameter is not specified, the default
     * "postgres" database is created in the DB instance.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain 1 to 63 letters, numbers, or underscores.</p> </li> <li>
     * <p>Must begin with a letter or an underscore. Subsequent characters can be
     * letters, underscores, or digits (0-9).</p> </li> <li> <p>Cannot be a word
     * reserved by the specified database engine</p> </li> </ul> <p> <b>Oracle</b> </p>
     * <p>The Oracle System ID (SID) of the created DB instance. If you specify
     * <code>null</code>, the default value <code>ORCL</code> is used. You can't
     * specify the string NULL, or any other reserved word, for <code>DBName</code>.
     * </p> <p>Default: <code>ORCL</code> </p> <p>Constraints:</p> <ul> <li> <p>Cannot
     * be longer than 8 characters</p> </li> </ul> <p> <b>SQL Server</b> </p> <p>Not
     * applicable. Must be null.</p> <p> <b>Amazon Aurora</b> </p> <p>The name of the
     * database to create when the primary instance of the DB cluster is created. If
     * this parameter is not specified, no database is created in the DB instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p>
     * </li> <li> <p>Cannot be a word reserved by the specified database engine</p>
     * </li> </ul>
     */
    inline CreateDBInstanceRequest& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p>Type: String</p> <p> <b>MySQL</b> </p> <p>The name of the database
     * to create when the DB instance is created. If this parameter is not specified,
     * no database is created in the DB instance.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain 1 to 64 letters or numbers.</p> </li> <li> <p>Cannot be a word
     * reserved by the specified database engine</p> </li> </ul> <p> <b>MariaDB</b>
     * </p> <p>The name of the database to create when the DB instance is created. If
     * this parameter is not specified, no database is created in the DB instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p>
     * </li> <li> <p>Cannot be a word reserved by the specified database engine</p>
     * </li> </ul> <p> <b>PostgreSQL</b> </p> <p>The name of the database to create
     * when the DB instance is created. If this parameter is not specified, the default
     * "postgres" database is created in the DB instance.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain 1 to 63 letters, numbers, or underscores.</p> </li> <li>
     * <p>Must begin with a letter or an underscore. Subsequent characters can be
     * letters, underscores, or digits (0-9).</p> </li> <li> <p>Cannot be a word
     * reserved by the specified database engine</p> </li> </ul> <p> <b>Oracle</b> </p>
     * <p>The Oracle System ID (SID) of the created DB instance. If you specify
     * <code>null</code>, the default value <code>ORCL</code> is used. You can't
     * specify the string NULL, or any other reserved word, for <code>DBName</code>.
     * </p> <p>Default: <code>ORCL</code> </p> <p>Constraints:</p> <ul> <li> <p>Cannot
     * be longer than 8 characters</p> </li> </ul> <p> <b>SQL Server</b> </p> <p>Not
     * applicable. Must be null.</p> <p> <b>Amazon Aurora</b> </p> <p>The name of the
     * database to create when the primary instance of the DB cluster is created. If
     * this parameter is not specified, no database is created in the DB instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p>
     * </li> <li> <p>Cannot be a word reserved by the specified database engine</p>
     * </li> </ul>
     */
    inline CreateDBInstanceRequest& WithDBName(Aws::String&& value) { SetDBName(std::move(value)); return *this;}

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p>Type: String</p> <p> <b>MySQL</b> </p> <p>The name of the database
     * to create when the DB instance is created. If this parameter is not specified,
     * no database is created in the DB instance.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain 1 to 64 letters or numbers.</p> </li> <li> <p>Cannot be a word
     * reserved by the specified database engine</p> </li> </ul> <p> <b>MariaDB</b>
     * </p> <p>The name of the database to create when the DB instance is created. If
     * this parameter is not specified, no database is created in the DB instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p>
     * </li> <li> <p>Cannot be a word reserved by the specified database engine</p>
     * </li> </ul> <p> <b>PostgreSQL</b> </p> <p>The name of the database to create
     * when the DB instance is created. If this parameter is not specified, the default
     * "postgres" database is created in the DB instance.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain 1 to 63 letters, numbers, or underscores.</p> </li> <li>
     * <p>Must begin with a letter or an underscore. Subsequent characters can be
     * letters, underscores, or digits (0-9).</p> </li> <li> <p>Cannot be a word
     * reserved by the specified database engine</p> </li> </ul> <p> <b>Oracle</b> </p>
     * <p>The Oracle System ID (SID) of the created DB instance. If you specify
     * <code>null</code>, the default value <code>ORCL</code> is used. You can't
     * specify the string NULL, or any other reserved word, for <code>DBName</code>.
     * </p> <p>Default: <code>ORCL</code> </p> <p>Constraints:</p> <ul> <li> <p>Cannot
     * be longer than 8 characters</p> </li> </ul> <p> <b>SQL Server</b> </p> <p>Not
     * applicable. Must be null.</p> <p> <b>Amazon Aurora</b> </p> <p>The name of the
     * database to create when the primary instance of the DB cluster is created. If
     * this parameter is not specified, no database is created in the DB instance.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain 1 to 64 letters or numbers.</p>
     * </li> <li> <p>Cannot be a word reserved by the specified database engine</p>
     * </li> </ul>
     */
    inline CreateDBInstanceRequest& WithDBName(const char* value) { SetDBName(value); return *this;}


    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB instance identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The amount of storage (in gigabytes) to be initially allocated for the
     * database instance.</p> <p>Type: Integer</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. Aurora cluster volumes automatically grow as the amount of data in
     * your database increases, though you are only charged for the space that you use
     * in an Aurora cluster volume.</p> <p> <b>MySQL</b> </p> <p>Constraints to the
     * amount of storage for each storage type are the following: </p> <ul> <li>
     * <p>General Purpose (SSD) storage (gp2): Must be an integer from 5 to 6144.</p>
     * </li> <li> <p>Provisioned IOPS storage (io1): Must be an integer from 100 to
     * 6144.</p> </li> <li> <p>Magnetic storage (standard): Must be an integer from 5
     * to 3072.</p> </li> </ul> <p> <b>MariaDB</b> </p> <p>Constraints to the amount of
     * storage for each storage type are the following: </p> <ul> <li> <p>General
     * Purpose (SSD) storage (gp2): Must be an integer from 5 to 6144.</p> </li> <li>
     * <p>Provisioned IOPS storage (io1): Must be an integer from 100 to 6144.</p>
     * </li> <li> <p>Magnetic storage (standard): Must be an integer from 5 to
     * 3072.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints to the amount of
     * storage for each storage type are the following: </p> <ul> <li> <p>General
     * Purpose (SSD) storage (gp2): Must be an integer from 5 to 6144.</p> </li> <li>
     * <p>Provisioned IOPS storage (io1): Must be an integer from 100 to 6144.</p>
     * </li> <li> <p>Magnetic storage (standard): Must be an integer from 5 to
     * 3072.</p> </li> </ul> <p> <b>Oracle</b> </p> <p>Constraints to the amount of
     * storage for each storage type are the following: </p> <ul> <li> <p>General
     * Purpose (SSD) storage (gp2): Must be an integer from 10 to 6144.</p> </li> <li>
     * <p>Provisioned IOPS storage (io1): Must be an integer from 100 to 6144.</p>
     * </li> <li> <p>Magnetic storage (standard): Must be an integer from 10 to
     * 3072.</p> </li> </ul> <p> <b>SQL Server</b> </p> <p>Constraints to the amount of
     * storage for each storage type are the following: </p> <ul> <li> <p>General
     * Purpose (SSD) storage (gp2):</p> <ul> <li> <p>Enterprise and Standard editions:
     * Must be an integer from 200 to 16384.</p> </li> <li> <p>Web and Express
     * editions: Must be an integer from 20 to 16384.</p> </li> </ul> </li> <li>
     * <p>Provisioned IOPS storage (io1):</p> <ul> <li> <p>Enterprise and Standard
     * editions: Must be an integer from 200 to 16384.</p> </li> <li> <p>Web and
     * Express editions: Must be an integer from 100 to 16384.</p> </li> </ul> </li>
     * <li> <p>Magnetic storage (standard):</p> <ul> <li> <p>Enterprise and Standard
     * editions: Must be an integer from 200 to 1024.</p> </li> <li> <p>Web and Express
     * editions: Must be an integer from 20 to 1024.</p> </li> </ul> </li> </ul>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The amount of storage (in gigabytes) to be initially allocated for the
     * database instance.</p> <p>Type: Integer</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. Aurora cluster volumes automatically grow as the amount of data in
     * your database increases, though you are only charged for the space that you use
     * in an Aurora cluster volume.</p> <p> <b>MySQL</b> </p> <p>Constraints to the
     * amount of storage for each storage type are the following: </p> <ul> <li>
     * <p>General Purpose (SSD) storage (gp2): Must be an integer from 5 to 6144.</p>
     * </li> <li> <p>Provisioned IOPS storage (io1): Must be an integer from 100 to
     * 6144.</p> </li> <li> <p>Magnetic storage (standard): Must be an integer from 5
     * to 3072.</p> </li> </ul> <p> <b>MariaDB</b> </p> <p>Constraints to the amount of
     * storage for each storage type are the following: </p> <ul> <li> <p>General
     * Purpose (SSD) storage (gp2): Must be an integer from 5 to 6144.</p> </li> <li>
     * <p>Provisioned IOPS storage (io1): Must be an integer from 100 to 6144.</p>
     * </li> <li> <p>Magnetic storage (standard): Must be an integer from 5 to
     * 3072.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints to the amount of
     * storage for each storage type are the following: </p> <ul> <li> <p>General
     * Purpose (SSD) storage (gp2): Must be an integer from 5 to 6144.</p> </li> <li>
     * <p>Provisioned IOPS storage (io1): Must be an integer from 100 to 6144.</p>
     * </li> <li> <p>Magnetic storage (standard): Must be an integer from 5 to
     * 3072.</p> </li> </ul> <p> <b>Oracle</b> </p> <p>Constraints to the amount of
     * storage for each storage type are the following: </p> <ul> <li> <p>General
     * Purpose (SSD) storage (gp2): Must be an integer from 10 to 6144.</p> </li> <li>
     * <p>Provisioned IOPS storage (io1): Must be an integer from 100 to 6144.</p>
     * </li> <li> <p>Magnetic storage (standard): Must be an integer from 10 to
     * 3072.</p> </li> </ul> <p> <b>SQL Server</b> </p> <p>Constraints to the amount of
     * storage for each storage type are the following: </p> <ul> <li> <p>General
     * Purpose (SSD) storage (gp2):</p> <ul> <li> <p>Enterprise and Standard editions:
     * Must be an integer from 200 to 16384.</p> </li> <li> <p>Web and Express
     * editions: Must be an integer from 20 to 16384.</p> </li> </ul> </li> <li>
     * <p>Provisioned IOPS storage (io1):</p> <ul> <li> <p>Enterprise and Standard
     * editions: Must be an integer from 200 to 16384.</p> </li> <li> <p>Web and
     * Express editions: Must be an integer from 100 to 16384.</p> </li> </ul> </li>
     * <li> <p>Magnetic storage (standard):</p> <ul> <li> <p>Enterprise and Standard
     * editions: Must be an integer from 200 to 1024.</p> </li> <li> <p>Web and Express
     * editions: Must be an integer from 20 to 1024.</p> </li> </ul> </li> </ul>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>The amount of storage (in gigabytes) to be initially allocated for the
     * database instance.</p> <p>Type: Integer</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. Aurora cluster volumes automatically grow as the amount of data in
     * your database increases, though you are only charged for the space that you use
     * in an Aurora cluster volume.</p> <p> <b>MySQL</b> </p> <p>Constraints to the
     * amount of storage for each storage type are the following: </p> <ul> <li>
     * <p>General Purpose (SSD) storage (gp2): Must be an integer from 5 to 6144.</p>
     * </li> <li> <p>Provisioned IOPS storage (io1): Must be an integer from 100 to
     * 6144.</p> </li> <li> <p>Magnetic storage (standard): Must be an integer from 5
     * to 3072.</p> </li> </ul> <p> <b>MariaDB</b> </p> <p>Constraints to the amount of
     * storage for each storage type are the following: </p> <ul> <li> <p>General
     * Purpose (SSD) storage (gp2): Must be an integer from 5 to 6144.</p> </li> <li>
     * <p>Provisioned IOPS storage (io1): Must be an integer from 100 to 6144.</p>
     * </li> <li> <p>Magnetic storage (standard): Must be an integer from 5 to
     * 3072.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints to the amount of
     * storage for each storage type are the following: </p> <ul> <li> <p>General
     * Purpose (SSD) storage (gp2): Must be an integer from 5 to 6144.</p> </li> <li>
     * <p>Provisioned IOPS storage (io1): Must be an integer from 100 to 6144.</p>
     * </li> <li> <p>Magnetic storage (standard): Must be an integer from 5 to
     * 3072.</p> </li> </ul> <p> <b>Oracle</b> </p> <p>Constraints to the amount of
     * storage for each storage type are the following: </p> <ul> <li> <p>General
     * Purpose (SSD) storage (gp2): Must be an integer from 10 to 6144.</p> </li> <li>
     * <p>Provisioned IOPS storage (io1): Must be an integer from 100 to 6144.</p>
     * </li> <li> <p>Magnetic storage (standard): Must be an integer from 10 to
     * 3072.</p> </li> </ul> <p> <b>SQL Server</b> </p> <p>Constraints to the amount of
     * storage for each storage type are the following: </p> <ul> <li> <p>General
     * Purpose (SSD) storage (gp2):</p> <ul> <li> <p>Enterprise and Standard editions:
     * Must be an integer from 200 to 16384.</p> </li> <li> <p>Web and Express
     * editions: Must be an integer from 20 to 16384.</p> </li> </ul> </li> <li>
     * <p>Provisioned IOPS storage (io1):</p> <ul> <li> <p>Enterprise and Standard
     * editions: Must be an integer from 200 to 16384.</p> </li> <li> <p>Web and
     * Express editions: Must be an integer from 100 to 16384.</p> </li> </ul> </li>
     * <li> <p>Magnetic storage (standard):</p> <ul> <li> <p>Enterprise and Standard
     * editions: Must be an integer from 200 to 1024.</p> </li> <li> <p>Web and Express
     * editions: Must be an integer from 20 to 1024.</p> </li> </ul> </li> </ul>
     */
    inline CreateDBInstanceRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>The compute and memory capacity of the DB instance. Note that not all
     * instance classes are available in all regions for all DB engines.</p> <p> Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium |
     * db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.m4.large | db.m4.xlarge |
     * db.m4.2xlarge | db.m4.4xlarge | db.m4.10xlarge | db.r3.large | db.r3.xlarge |
     * db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small |
     * db.t2.medium | db.t2.large</code> </p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The compute and memory capacity of the DB instance. Note that not all
     * instance classes are available in all regions for all DB engines.</p> <p> Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium |
     * db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.m4.large | db.m4.xlarge |
     * db.m4.2xlarge | db.m4.4xlarge | db.m4.10xlarge | db.r3.large | db.r3.xlarge |
     * db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small |
     * db.t2.medium | db.t2.large</code> </p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the DB instance. Note that not all
     * instance classes are available in all regions for all DB engines.</p> <p> Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium |
     * db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.m4.large | db.m4.xlarge |
     * db.m4.2xlarge | db.m4.4xlarge | db.m4.10xlarge | db.r3.large | db.r3.xlarge |
     * db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small |
     * db.t2.medium | db.t2.large</code> </p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>The compute and memory capacity of the DB instance. Note that not all
     * instance classes are available in all regions for all DB engines.</p> <p> Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium |
     * db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.m4.large | db.m4.xlarge |
     * db.m4.2xlarge | db.m4.4xlarge | db.m4.10xlarge | db.r3.large | db.r3.xlarge |
     * db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small |
     * db.t2.medium | db.t2.large</code> </p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the DB instance. Note that not all
     * instance classes are available in all regions for all DB engines.</p> <p> Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium |
     * db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.m4.large | db.m4.xlarge |
     * db.m4.2xlarge | db.m4.4xlarge | db.m4.10xlarge | db.r3.large | db.r3.xlarge |
     * db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small |
     * db.t2.medium | db.t2.large</code> </p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the DB instance. Note that not all
     * instance classes are available in all regions for all DB engines.</p> <p> Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium |
     * db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.m4.large | db.m4.xlarge |
     * db.m4.2xlarge | db.m4.4xlarge | db.m4.10xlarge | db.r3.large | db.r3.xlarge |
     * db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small |
     * db.t2.medium | db.t2.large</code> </p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of the DB instance. Note that not all
     * instance classes are available in all regions for all DB engines.</p> <p> Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.xlarge |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium |
     * db.m3.large | db.m3.xlarge | db.m3.2xlarge | db.m4.large | db.m4.xlarge |
     * db.m4.2xlarge | db.m4.4xlarge | db.m4.10xlarge | db.r3.large | db.r3.xlarge |
     * db.r3.2xlarge | db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small |
     * db.t2.medium | db.t2.large</code> </p>
     */
    inline CreateDBInstanceRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>Not
     * every database engine is available for every AWS Region. </p> <p>Valid Values:
     * </p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p> <code>mariadb</code>
     * </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-se2</code> </p> </li>
     * <li> <p> <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>Not
     * every database engine is available for every AWS Region. </p> <p>Valid Values:
     * </p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p> <code>mariadb</code>
     * </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-se2</code> </p> </li>
     * <li> <p> <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>Not
     * every database engine is available for every AWS Region. </p> <p>Valid Values:
     * </p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p> <code>mariadb</code>
     * </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-se2</code> </p> </li>
     * <li> <p> <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>Not
     * every database engine is available for every AWS Region. </p> <p>Valid Values:
     * </p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p> <code>mariadb</code>
     * </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-se2</code> </p> </li>
     * <li> <p> <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>Not
     * every database engine is available for every AWS Region. </p> <p>Valid Values:
     * </p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p> <code>mariadb</code>
     * </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-se2</code> </p> </li>
     * <li> <p> <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline CreateDBInstanceRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>Not
     * every database engine is available for every AWS Region. </p> <p>Valid Values:
     * </p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p> <code>mariadb</code>
     * </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-se2</code> </p> </li>
     * <li> <p> <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline CreateDBInstanceRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the database engine to be used for this instance. </p> <p>Not
     * every database engine is available for every AWS Region. </p> <p>Valid Values:
     * </p> <ul> <li> <p> <code>aurora</code> </p> </li> <li> <p> <code>mariadb</code>
     * </p> </li> <li> <p> <code>mysql</code> </p> </li> <li> <p>
     * <code>oracle-ee</code> </p> </li> <li> <p> <code>oracle-se2</code> </p> </li>
     * <li> <p> <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p>
     * </li> <li> <p> <code>postgres</code> </p> </li> <li> <p>
     * <code>sqlserver-ee</code> </p> </li> <li> <p> <code>sqlserver-se</code> </p>
     * </li> <li> <p> <code>sqlserver-ex</code> </p> </li> <li> <p>
     * <code>sqlserver-web</code> </p> </li> </ul>
     */
    inline CreateDBInstanceRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The name for the master user.</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. The name for the master user is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>. </p> <p> <b>MariaDB</b> </p>
     * <p>Constraints:</p> <ul> <li> <p>Required for MariaDB.</p> </li> <li> <p>Must be
     * 1 to 16 letters or numbers.</p> </li> <li> <p>Cannot be a reserved word for the
     * chosen database engine.</p> </li> </ul> <p> <b>Microsoft SQL Server</b> </p>
     * <p>Constraints:</p> <ul> <li> <p>Required for SQL Server.</p> </li> <li> <p>Must
     * be 1 to 128 letters or numbers.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Cannot be a reserved word for the chosen database
     * engine.</p> </li> </ul> <p> <b>MySQL</b> </p> <p>Constraints:</p> <ul> <li>
     * <p>Required for MySQL.</p> </li> <li> <p>Must be 1 to 16 letters or numbers.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot be a
     * reserved word for the chosen database engine.</p> </li> </ul> <p> <b>Oracle</b>
     * </p> <p>Constraints:</p> <ul> <li> <p>Required for Oracle.</p> </li> <li>
     * <p>Must be 1 to 30 letters or numbers.</p> </li> <li> <p>First character must be
     * a letter.</p> </li> <li> <p>Cannot be a reserved word for the chosen database
     * engine.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints:</p> <ul> <li>
     * <p>Required for PostgreSQL.</p> </li> <li> <p>Must be 1 to 63 letters or
     * numbers.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot be a reserved word for the chosen database engine.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The name for the master user.</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. The name for the master user is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>. </p> <p> <b>MariaDB</b> </p>
     * <p>Constraints:</p> <ul> <li> <p>Required for MariaDB.</p> </li> <li> <p>Must be
     * 1 to 16 letters or numbers.</p> </li> <li> <p>Cannot be a reserved word for the
     * chosen database engine.</p> </li> </ul> <p> <b>Microsoft SQL Server</b> </p>
     * <p>Constraints:</p> <ul> <li> <p>Required for SQL Server.</p> </li> <li> <p>Must
     * be 1 to 128 letters or numbers.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Cannot be a reserved word for the chosen database
     * engine.</p> </li> </ul> <p> <b>MySQL</b> </p> <p>Constraints:</p> <ul> <li>
     * <p>Required for MySQL.</p> </li> <li> <p>Must be 1 to 16 letters or numbers.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot be a
     * reserved word for the chosen database engine.</p> </li> </ul> <p> <b>Oracle</b>
     * </p> <p>Constraints:</p> <ul> <li> <p>Required for Oracle.</p> </li> <li>
     * <p>Must be 1 to 30 letters or numbers.</p> </li> <li> <p>First character must be
     * a letter.</p> </li> <li> <p>Cannot be a reserved word for the chosen database
     * engine.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints:</p> <ul> <li>
     * <p>Required for PostgreSQL.</p> </li> <li> <p>Must be 1 to 63 letters or
     * numbers.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot be a reserved word for the chosen database engine.</p> </li> </ul>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The name for the master user.</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. The name for the master user is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>. </p> <p> <b>MariaDB</b> </p>
     * <p>Constraints:</p> <ul> <li> <p>Required for MariaDB.</p> </li> <li> <p>Must be
     * 1 to 16 letters or numbers.</p> </li> <li> <p>Cannot be a reserved word for the
     * chosen database engine.</p> </li> </ul> <p> <b>Microsoft SQL Server</b> </p>
     * <p>Constraints:</p> <ul> <li> <p>Required for SQL Server.</p> </li> <li> <p>Must
     * be 1 to 128 letters or numbers.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Cannot be a reserved word for the chosen database
     * engine.</p> </li> </ul> <p> <b>MySQL</b> </p> <p>Constraints:</p> <ul> <li>
     * <p>Required for MySQL.</p> </li> <li> <p>Must be 1 to 16 letters or numbers.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot be a
     * reserved word for the chosen database engine.</p> </li> </ul> <p> <b>Oracle</b>
     * </p> <p>Constraints:</p> <ul> <li> <p>Required for Oracle.</p> </li> <li>
     * <p>Must be 1 to 30 letters or numbers.</p> </li> <li> <p>First character must be
     * a letter.</p> </li> <li> <p>Cannot be a reserved word for the chosen database
     * engine.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints:</p> <ul> <li>
     * <p>Required for PostgreSQL.</p> </li> <li> <p>Must be 1 to 63 letters or
     * numbers.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot be a reserved word for the chosen database engine.</p> </li> </ul>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>The name for the master user.</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. The name for the master user is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>. </p> <p> <b>MariaDB</b> </p>
     * <p>Constraints:</p> <ul> <li> <p>Required for MariaDB.</p> </li> <li> <p>Must be
     * 1 to 16 letters or numbers.</p> </li> <li> <p>Cannot be a reserved word for the
     * chosen database engine.</p> </li> </ul> <p> <b>Microsoft SQL Server</b> </p>
     * <p>Constraints:</p> <ul> <li> <p>Required for SQL Server.</p> </li> <li> <p>Must
     * be 1 to 128 letters or numbers.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Cannot be a reserved word for the chosen database
     * engine.</p> </li> </ul> <p> <b>MySQL</b> </p> <p>Constraints:</p> <ul> <li>
     * <p>Required for MySQL.</p> </li> <li> <p>Must be 1 to 16 letters or numbers.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot be a
     * reserved word for the chosen database engine.</p> </li> </ul> <p> <b>Oracle</b>
     * </p> <p>Constraints:</p> <ul> <li> <p>Required for Oracle.</p> </li> <li>
     * <p>Must be 1 to 30 letters or numbers.</p> </li> <li> <p>First character must be
     * a letter.</p> </li> <li> <p>Cannot be a reserved word for the chosen database
     * engine.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints:</p> <ul> <li>
     * <p>Required for PostgreSQL.</p> </li> <li> <p>Must be 1 to 63 letters or
     * numbers.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot be a reserved word for the chosen database engine.</p> </li> </ul>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The name for the master user.</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. The name for the master user is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>. </p> <p> <b>MariaDB</b> </p>
     * <p>Constraints:</p> <ul> <li> <p>Required for MariaDB.</p> </li> <li> <p>Must be
     * 1 to 16 letters or numbers.</p> </li> <li> <p>Cannot be a reserved word for the
     * chosen database engine.</p> </li> </ul> <p> <b>Microsoft SQL Server</b> </p>
     * <p>Constraints:</p> <ul> <li> <p>Required for SQL Server.</p> </li> <li> <p>Must
     * be 1 to 128 letters or numbers.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Cannot be a reserved word for the chosen database
     * engine.</p> </li> </ul> <p> <b>MySQL</b> </p> <p>Constraints:</p> <ul> <li>
     * <p>Required for MySQL.</p> </li> <li> <p>Must be 1 to 16 letters or numbers.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot be a
     * reserved word for the chosen database engine.</p> </li> </ul> <p> <b>Oracle</b>
     * </p> <p>Constraints:</p> <ul> <li> <p>Required for Oracle.</p> </li> <li>
     * <p>Must be 1 to 30 letters or numbers.</p> </li> <li> <p>First character must be
     * a letter.</p> </li> <li> <p>Cannot be a reserved word for the chosen database
     * engine.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints:</p> <ul> <li>
     * <p>Required for PostgreSQL.</p> </li> <li> <p>Must be 1 to 63 letters or
     * numbers.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot be a reserved word for the chosen database engine.</p> </li> </ul>
     */
    inline CreateDBInstanceRequest& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The name for the master user.</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. The name for the master user is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>. </p> <p> <b>MariaDB</b> </p>
     * <p>Constraints:</p> <ul> <li> <p>Required for MariaDB.</p> </li> <li> <p>Must be
     * 1 to 16 letters or numbers.</p> </li> <li> <p>Cannot be a reserved word for the
     * chosen database engine.</p> </li> </ul> <p> <b>Microsoft SQL Server</b> </p>
     * <p>Constraints:</p> <ul> <li> <p>Required for SQL Server.</p> </li> <li> <p>Must
     * be 1 to 128 letters or numbers.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Cannot be a reserved word for the chosen database
     * engine.</p> </li> </ul> <p> <b>MySQL</b> </p> <p>Constraints:</p> <ul> <li>
     * <p>Required for MySQL.</p> </li> <li> <p>Must be 1 to 16 letters or numbers.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot be a
     * reserved word for the chosen database engine.</p> </li> </ul> <p> <b>Oracle</b>
     * </p> <p>Constraints:</p> <ul> <li> <p>Required for Oracle.</p> </li> <li>
     * <p>Must be 1 to 30 letters or numbers.</p> </li> <li> <p>First character must be
     * a letter.</p> </li> <li> <p>Cannot be a reserved word for the chosen database
     * engine.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints:</p> <ul> <li>
     * <p>Required for PostgreSQL.</p> </li> <li> <p>Must be 1 to 63 letters or
     * numbers.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot be a reserved word for the chosen database engine.</p> </li> </ul>
     */
    inline CreateDBInstanceRequest& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>The name for the master user.</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. The name for the master user is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>. </p> <p> <b>MariaDB</b> </p>
     * <p>Constraints:</p> <ul> <li> <p>Required for MariaDB.</p> </li> <li> <p>Must be
     * 1 to 16 letters or numbers.</p> </li> <li> <p>Cannot be a reserved word for the
     * chosen database engine.</p> </li> </ul> <p> <b>Microsoft SQL Server</b> </p>
     * <p>Constraints:</p> <ul> <li> <p>Required for SQL Server.</p> </li> <li> <p>Must
     * be 1 to 128 letters or numbers.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Cannot be a reserved word for the chosen database
     * engine.</p> </li> </ul> <p> <b>MySQL</b> </p> <p>Constraints:</p> <ul> <li>
     * <p>Required for MySQL.</p> </li> <li> <p>Must be 1 to 16 letters or numbers.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot be a
     * reserved word for the chosen database engine.</p> </li> </ul> <p> <b>Oracle</b>
     * </p> <p>Constraints:</p> <ul> <li> <p>Required for Oracle.</p> </li> <li>
     * <p>Must be 1 to 30 letters or numbers.</p> </li> <li> <p>First character must be
     * a letter.</p> </li> <li> <p>Cannot be a reserved word for the chosen database
     * engine.</p> </li> </ul> <p> <b>PostgreSQL</b> </p> <p>Constraints:</p> <ul> <li>
     * <p>Required for PostgreSQL.</p> </li> <li> <p>Must be 1 to 63 letters or
     * numbers.</p> </li> <li> <p>First character must be a letter.</p> </li> <li>
     * <p>Cannot be a reserved word for the chosen database engine.</p> </li> </ul>
     */
    inline CreateDBInstanceRequest& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>The password for the master user. Can be any printable ASCII character except
     * "/", """, or "@".</p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable. The
     * password for the master user is managed by the DB cluster. For more information,
     * see <a>CreateDBCluster</a>.</p> <p> <b>MariaDB</b> </p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p> <p> <b>Microsoft SQL Server</b> </p>
     * <p>Constraints: Must contain from 8 to 128 characters.</p> <p> <b>MySQL</b> </p>
     * <p>Constraints: Must contain from 8 to 41 characters.</p> <p> <b>Oracle</b> </p>
     * <p>Constraints: Must contain from 8 to 30 characters.</p> <p> <b>PostgreSQL</b>
     * </p> <p>Constraints: Must contain from 8 to 128 characters.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The password for the master user. Can be any printable ASCII character except
     * "/", """, or "@".</p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable. The
     * password for the master user is managed by the DB cluster. For more information,
     * see <a>CreateDBCluster</a>.</p> <p> <b>MariaDB</b> </p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p> <p> <b>Microsoft SQL Server</b> </p>
     * <p>Constraints: Must contain from 8 to 128 characters.</p> <p> <b>MySQL</b> </p>
     * <p>Constraints: Must contain from 8 to 41 characters.</p> <p> <b>Oracle</b> </p>
     * <p>Constraints: Must contain from 8 to 30 characters.</p> <p> <b>PostgreSQL</b>
     * </p> <p>Constraints: Must contain from 8 to 128 characters.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The password for the master user. Can be any printable ASCII character except
     * "/", """, or "@".</p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable. The
     * password for the master user is managed by the DB cluster. For more information,
     * see <a>CreateDBCluster</a>.</p> <p> <b>MariaDB</b> </p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p> <p> <b>Microsoft SQL Server</b> </p>
     * <p>Constraints: Must contain from 8 to 128 characters.</p> <p> <b>MySQL</b> </p>
     * <p>Constraints: Must contain from 8 to 41 characters.</p> <p> <b>Oracle</b> </p>
     * <p>Constraints: Must contain from 8 to 30 characters.</p> <p> <b>PostgreSQL</b>
     * </p> <p>Constraints: Must contain from 8 to 128 characters.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The password for the master user. Can be any printable ASCII character except
     * "/", """, or "@".</p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable. The
     * password for the master user is managed by the DB cluster. For more information,
     * see <a>CreateDBCluster</a>.</p> <p> <b>MariaDB</b> </p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p> <p> <b>Microsoft SQL Server</b> </p>
     * <p>Constraints: Must contain from 8 to 128 characters.</p> <p> <b>MySQL</b> </p>
     * <p>Constraints: Must contain from 8 to 41 characters.</p> <p> <b>Oracle</b> </p>
     * <p>Constraints: Must contain from 8 to 30 characters.</p> <p> <b>PostgreSQL</b>
     * </p> <p>Constraints: Must contain from 8 to 128 characters.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The password for the master user. Can be any printable ASCII character except
     * "/", """, or "@".</p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable. The
     * password for the master user is managed by the DB cluster. For more information,
     * see <a>CreateDBCluster</a>.</p> <p> <b>MariaDB</b> </p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p> <p> <b>Microsoft SQL Server</b> </p>
     * <p>Constraints: Must contain from 8 to 128 characters.</p> <p> <b>MySQL</b> </p>
     * <p>Constraints: Must contain from 8 to 41 characters.</p> <p> <b>Oracle</b> </p>
     * <p>Constraints: Must contain from 8 to 30 characters.</p> <p> <b>PostgreSQL</b>
     * </p> <p>Constraints: Must contain from 8 to 128 characters.</p>
     */
    inline CreateDBInstanceRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The password for the master user. Can be any printable ASCII character except
     * "/", """, or "@".</p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable. The
     * password for the master user is managed by the DB cluster. For more information,
     * see <a>CreateDBCluster</a>.</p> <p> <b>MariaDB</b> </p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p> <p> <b>Microsoft SQL Server</b> </p>
     * <p>Constraints: Must contain from 8 to 128 characters.</p> <p> <b>MySQL</b> </p>
     * <p>Constraints: Must contain from 8 to 41 characters.</p> <p> <b>Oracle</b> </p>
     * <p>Constraints: Must contain from 8 to 30 characters.</p> <p> <b>PostgreSQL</b>
     * </p> <p>Constraints: Must contain from 8 to 128 characters.</p>
     */
    inline CreateDBInstanceRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the master user. Can be any printable ASCII character except
     * "/", """, or "@".</p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable. The
     * password for the master user is managed by the DB cluster. For more information,
     * see <a>CreateDBCluster</a>.</p> <p> <b>MariaDB</b> </p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p> <p> <b>Microsoft SQL Server</b> </p>
     * <p>Constraints: Must contain from 8 to 128 characters.</p> <p> <b>MySQL</b> </p>
     * <p>Constraints: Must contain from 8 to 41 characters.</p> <p> <b>Oracle</b> </p>
     * <p>Constraints: Must contain from 8 to 30 characters.</p> <p> <b>PostgreSQL</b>
     * </p> <p>Constraints: Must contain from 8 to 128 characters.</p>
     */
    inline CreateDBInstanceRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDBSecurityGroups() const{ return m_dBSecurityGroups; }

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline void SetDBSecurityGroups(const Aws::Vector<Aws::String>& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline void SetDBSecurityGroups(Aws::Vector<Aws::String>&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = std::move(value); }

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline CreateDBInstanceRequest& WithDBSecurityGroups(const Aws::Vector<Aws::String>& value) { SetDBSecurityGroups(value); return *this;}

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline CreateDBInstanceRequest& WithDBSecurityGroups(Aws::Vector<Aws::String>&& value) { SetDBSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline CreateDBInstanceRequest& AddDBSecurityGroups(const Aws::String& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline CreateDBInstanceRequest& AddDBSecurityGroups(Aws::String&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of DB security groups to associate with this DB instance.</p>
     * <p>Default: The default DB security group for the database engine.</p>
     */
    inline CreateDBInstanceRequest& AddDBSecurityGroups(const char* value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }


    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The associated list of EC2 VPC
     * security groups is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>Default: The default EC2 VPC security group for
     * the DB subnet group's VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The associated list of EC2 VPC
     * security groups is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>Default: The default EC2 VPC security group for
     * the DB subnet group's VPC.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The associated list of EC2 VPC
     * security groups is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>Default: The default EC2 VPC security group for
     * the DB subnet group's VPC.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The associated list of EC2 VPC
     * security groups is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>Default: The default EC2 VPC security group for
     * the DB subnet group's VPC.</p>
     */
    inline CreateDBInstanceRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The associated list of EC2 VPC
     * security groups is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>Default: The default EC2 VPC security group for
     * the DB subnet group's VPC.</p>
     */
    inline CreateDBInstanceRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The associated list of EC2 VPC
     * security groups is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>Default: The default EC2 VPC security group for
     * the DB subnet group's VPC.</p>
     */
    inline CreateDBInstanceRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The associated list of EC2 VPC
     * security groups is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>Default: The default EC2 VPC security group for
     * the DB subnet group's VPC.</p>
     */
    inline CreateDBInstanceRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB instance.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The associated list of EC2 VPC
     * security groups is managed by the DB cluster. For more information, see
     * <a>CreateDBCluster</a>.</p> <p>Default: The default EC2 VPC security group for
     * the DB subnet group's VPC.</p>
     */
    inline CreateDBInstanceRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p> The EC2 Availability Zone that the database instance will be created in. For
     * information on regions and Availability Zones, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>. </p> <p>Default: A random, system-chosen
     * Availability Zone in the endpoint's AWS Region.</p> <p> Example:
     * <code>us-east-1d</code> </p> <p> Constraint: The AvailabilityZone parameter
     * cannot be specified if the MultiAZ parameter is set to <code>true</code>. The
     * specified Availability Zone must be in the same AWS Region as the current
     * endpoint. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in. For
     * information on regions and Availability Zones, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>. </p> <p>Default: A random, system-chosen
     * Availability Zone in the endpoint's AWS Region.</p> <p> Example:
     * <code>us-east-1d</code> </p> <p> Constraint: The AvailabilityZone parameter
     * cannot be specified if the MultiAZ parameter is set to <code>true</code>. The
     * specified Availability Zone must be in the same AWS Region as the current
     * endpoint. </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in. For
     * information on regions and Availability Zones, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>. </p> <p>Default: A random, system-chosen
     * Availability Zone in the endpoint's AWS Region.</p> <p> Example:
     * <code>us-east-1d</code> </p> <p> Constraint: The AvailabilityZone parameter
     * cannot be specified if the MultiAZ parameter is set to <code>true</code>. The
     * specified Availability Zone must be in the same AWS Region as the current
     * endpoint. </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in. For
     * information on regions and Availability Zones, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>. </p> <p>Default: A random, system-chosen
     * Availability Zone in the endpoint's AWS Region.</p> <p> Example:
     * <code>us-east-1d</code> </p> <p> Constraint: The AvailabilityZone parameter
     * cannot be specified if the MultiAZ parameter is set to <code>true</code>. The
     * specified Availability Zone must be in the same AWS Region as the current
     * endpoint. </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in. For
     * information on regions and Availability Zones, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>. </p> <p>Default: A random, system-chosen
     * Availability Zone in the endpoint's AWS Region.</p> <p> Example:
     * <code>us-east-1d</code> </p> <p> Constraint: The AvailabilityZone parameter
     * cannot be specified if the MultiAZ parameter is set to <code>true</code>. The
     * specified Availability Zone must be in the same AWS Region as the current
     * endpoint. </p>
     */
    inline CreateDBInstanceRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in. For
     * information on regions and Availability Zones, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>. </p> <p>Default: A random, system-chosen
     * Availability Zone in the endpoint's AWS Region.</p> <p> Example:
     * <code>us-east-1d</code> </p> <p> Constraint: The AvailabilityZone parameter
     * cannot be specified if the MultiAZ parameter is set to <code>true</code>. The
     * specified Availability Zone must be in the same AWS Region as the current
     * endpoint. </p>
     */
    inline CreateDBInstanceRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in. For
     * information on regions and Availability Zones, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.RegionsAndAvailabilityZones.html">Regions
     * and Availability Zones</a>. </p> <p>Default: A random, system-chosen
     * Availability Zone in the endpoint's AWS Region.</p> <p> Example:
     * <code>us-east-1d</code> </p> <p> Constraint: The AvailabilityZone parameter
     * cannot be specified if the MultiAZ parameter is set to <code>true</code>. The
     * specified Availability Zone must be in the same AWS Region as the current
     * endpoint. </p>
     */
    inline CreateDBInstanceRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>If there is no
     * DB subnet group, then it is a non-VPC DB instance.</p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>If there is no
     * DB subnet group, then it is a non-VPC DB instance.</p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>If there is no
     * DB subnet group, then it is a non-VPC DB instance.</p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>If there is no
     * DB subnet group, then it is a non-VPC DB instance.</p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>If there is no
     * DB subnet group, then it is a non-VPC DB instance.</p>
     */
    inline CreateDBInstanceRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>If there is no
     * DB subnet group, then it is a non-VPC DB instance.</p>
     */
    inline CreateDBInstanceRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>A DB subnet group to associate with this DB instance.</p> <p>If there is no
     * DB subnet group, then it is a non-VPC DB instance.</p>
     */
    inline CreateDBInstanceRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p> The weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC). For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBMaintenance.html">DB
     * Instance Maintenance</a>. </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p> Default: A 30-minute window selected at random from an 8-hour block of
     * time per AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p> The weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC). For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBMaintenance.html">DB
     * Instance Maintenance</a>. </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p> Default: A 30-minute window selected at random from an 8-hour block of
     * time per AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p> The weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC). For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBMaintenance.html">DB
     * Instance Maintenance</a>. </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p> Default: A 30-minute window selected at random from an 8-hour block of
     * time per AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p> The weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC). For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBMaintenance.html">DB
     * Instance Maintenance</a>. </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p> Default: A 30-minute window selected at random from an 8-hour block of
     * time per AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p> The weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC). For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBMaintenance.html">DB
     * Instance Maintenance</a>. </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p> Default: A 30-minute window selected at random from an 8-hour block of
     * time per AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateDBInstanceRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p> The weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC). For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBMaintenance.html">DB
     * Instance Maintenance</a>. </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p> Default: A 30-minute window selected at random from an 8-hour block of
     * time per AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateDBInstanceRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p> The weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC). For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBMaintenance.html">DB
     * Instance Maintenance</a>. </p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p> Default: A 30-minute window selected at random from an 8-hour block of
     * time per AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateDBInstanceRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * will be used.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * will be used.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * will be used.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * will be used.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * will be used.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul>
     */
    inline CreateDBInstanceRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * will be used.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul>
     */
    inline CreateDBInstanceRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * will be used.</p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul>
     */
    inline CreateDBInstanceRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}


    /**
     * <p>The number of days for which automated backups are retained. Setting this
     * parameter to a positive number enables backups. Setting this parameter to 0
     * disables automated backups.</p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable.
     * The retention period for automated backups is managed by the DB cluster. For
     * more information, see <a>CreateDBCluster</a>.</p> <p>Default: 1</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 0 to 35</p> </li> <li>
     * <p>Cannot be set to 0 if the DB instance is a source to Read Replicas</p> </li>
     * </ul>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>The number of days for which automated backups are retained. Setting this
     * parameter to a positive number enables backups. Setting this parameter to 0
     * disables automated backups.</p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable.
     * The retention period for automated backups is managed by the DB cluster. For
     * more information, see <a>CreateDBCluster</a>.</p> <p>Default: 1</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 0 to 35</p> </li> <li>
     * <p>Cannot be set to 0 if the DB instance is a source to Read Replicas</p> </li>
     * </ul>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>The number of days for which automated backups are retained. Setting this
     * parameter to a positive number enables backups. Setting this parameter to 0
     * disables automated backups.</p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable.
     * The retention period for automated backups is managed by the DB cluster. For
     * more information, see <a>CreateDBCluster</a>.</p> <p>Default: 1</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 0 to 35</p> </li> <li>
     * <p>Cannot be set to 0 if the DB instance is a source to Read Replicas</p> </li>
     * </ul>
     */
    inline CreateDBInstanceRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.BackingUpAndRestoringAmazonRDSInstances.html">DB
     * Instance Backups</a>. </p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable. The
     * daily time range for creating automated backups is managed by the DB cluster.
     * For more information, see <a>CreateDBCluster</a>.</p> <p> Default: A 30-minute
     * window selected at random from an 8-hour block of time per AWS Region. To see
     * the time blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow">
     * Adjusting the Preferred DB Instance Maintenance Window</a>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Times should be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.BackingUpAndRestoringAmazonRDSInstances.html">DB
     * Instance Backups</a>. </p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable. The
     * daily time range for creating automated backups is managed by the DB cluster.
     * For more information, see <a>CreateDBCluster</a>.</p> <p> Default: A 30-minute
     * window selected at random from an 8-hour block of time per AWS Region. To see
     * the time blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow">
     * Adjusting the Preferred DB Instance Maintenance Window</a>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Times should be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.BackingUpAndRestoringAmazonRDSInstances.html">DB
     * Instance Backups</a>. </p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable. The
     * daily time range for creating automated backups is managed by the DB cluster.
     * For more information, see <a>CreateDBCluster</a>.</p> <p> Default: A 30-minute
     * window selected at random from an 8-hour block of time per AWS Region. To see
     * the time blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow">
     * Adjusting the Preferred DB Instance Maintenance Window</a>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Times should be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.BackingUpAndRestoringAmazonRDSInstances.html">DB
     * Instance Backups</a>. </p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable. The
     * daily time range for creating automated backups is managed by the DB cluster.
     * For more information, see <a>CreateDBCluster</a>.</p> <p> Default: A 30-minute
     * window selected at random from an 8-hour block of time per AWS Region. To see
     * the time blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow">
     * Adjusting the Preferred DB Instance Maintenance Window</a>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Times should be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.BackingUpAndRestoringAmazonRDSInstances.html">DB
     * Instance Backups</a>. </p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable. The
     * daily time range for creating automated backups is managed by the DB cluster.
     * For more information, see <a>CreateDBCluster</a>.</p> <p> Default: A 30-minute
     * window selected at random from an 8-hour block of time per AWS Region. To see
     * the time blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow">
     * Adjusting the Preferred DB Instance Maintenance Window</a>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Times should be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline CreateDBInstanceRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.BackingUpAndRestoringAmazonRDSInstances.html">DB
     * Instance Backups</a>. </p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable. The
     * daily time range for creating automated backups is managed by the DB cluster.
     * For more information, see <a>CreateDBCluster</a>.</p> <p> Default: A 30-minute
     * window selected at random from an 8-hour block of time per AWS Region. To see
     * the time blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow">
     * Adjusting the Preferred DB Instance Maintenance Window</a>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Times should be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline CreateDBInstanceRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.BackingUpAndRestoringAmazonRDSInstances.html">DB
     * Instance Backups</a>. </p> <p> <b>Amazon Aurora</b> </p> <p>Not applicable. The
     * daily time range for creating automated backups is managed by the DB cluster.
     * For more information, see <a>CreateDBCluster</a>.</p> <p> Default: A 30-minute
     * window selected at random from an 8-hour block of time per AWS Region. To see
     * the time blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow">
     * Adjusting the Preferred DB Instance Maintenance Window</a>. </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Times should be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline CreateDBInstanceRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The port number on which the database accepts connections.</p> <p>
     * <b>MySQL</b> </p> <p> Default: <code>3306</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p>Type: Integer</p> <p> <b>MariaDB</b> </p> <p>
     * Default: <code>3306</code> </p> <p> Valid Values: <code>1150-65535</code> </p>
     * <p>Type: Integer</p> <p> <b>PostgreSQL</b> </p> <p> Default: <code>5432</code>
     * </p> <p> Valid Values: <code>1150-65535</code> </p> <p>Type: Integer</p> <p>
     * <b>Oracle</b> </p> <p> Default: <code>1521</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p> <b>SQL Server</b> </p> <p> Default:
     * <code>1433</code> </p> <p> Valid Values: <code>1150-65535</code> except for
     * <code>1434</code>, <code>3389</code>, <code>47001</code>, <code>49152</code>,
     * and <code>49152</code> through <code>49156</code>. </p> <p> <b>Amazon Aurora</b>
     * </p> <p> Default: <code>3306</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p>Type: Integer</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the database accepts connections.</p> <p>
     * <b>MySQL</b> </p> <p> Default: <code>3306</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p>Type: Integer</p> <p> <b>MariaDB</b> </p> <p>
     * Default: <code>3306</code> </p> <p> Valid Values: <code>1150-65535</code> </p>
     * <p>Type: Integer</p> <p> <b>PostgreSQL</b> </p> <p> Default: <code>5432</code>
     * </p> <p> Valid Values: <code>1150-65535</code> </p> <p>Type: Integer</p> <p>
     * <b>Oracle</b> </p> <p> Default: <code>1521</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p> <b>SQL Server</b> </p> <p> Default:
     * <code>1433</code> </p> <p> Valid Values: <code>1150-65535</code> except for
     * <code>1434</code>, <code>3389</code>, <code>47001</code>, <code>49152</code>,
     * and <code>49152</code> through <code>49156</code>. </p> <p> <b>Amazon Aurora</b>
     * </p> <p> Default: <code>3306</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p>Type: Integer</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the database accepts connections.</p> <p>
     * <b>MySQL</b> </p> <p> Default: <code>3306</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p>Type: Integer</p> <p> <b>MariaDB</b> </p> <p>
     * Default: <code>3306</code> </p> <p> Valid Values: <code>1150-65535</code> </p>
     * <p>Type: Integer</p> <p> <b>PostgreSQL</b> </p> <p> Default: <code>5432</code>
     * </p> <p> Valid Values: <code>1150-65535</code> </p> <p>Type: Integer</p> <p>
     * <b>Oracle</b> </p> <p> Default: <code>1521</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p> <b>SQL Server</b> </p> <p> Default:
     * <code>1433</code> </p> <p> Valid Values: <code>1150-65535</code> except for
     * <code>1434</code>, <code>3389</code>, <code>47001</code>, <code>49152</code>,
     * and <code>49152</code> through <code>49156</code>. </p> <p> <b>Amazon Aurora</b>
     * </p> <p> Default: <code>3306</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p>Type: Integer</p>
     */
    inline CreateDBInstanceRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment. You cannot set the
     * AvailabilityZone parameter if the MultiAZ parameter is set to true.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment. You cannot set the
     * AvailabilityZone parameter if the MultiAZ parameter is set to true.</p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment. You cannot set the
     * AvailabilityZone parameter if the MultiAZ parameter is set to true.</p>
     */
    inline CreateDBInstanceRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>The version number of the database engine to use.</p> <p>The following are
     * the database engines and major and minor versions that are available with Amazon
     * RDS. Not every database engine is available for every AWS Region.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The version number of the database
     * engine to be used by the DB instance is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>.</p> <p> <b>MariaDB</b> </p> <ul> <li>
     * <p> <code>10.1.23</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.1.19</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.1.14</code> (supported in all regions except us-east-2)</p> </li> </ul>
     * <p/> <ul> <li> <p> <code>10.0.31</code> (supported in all AWS regions)</p> </li>
     * <li> <p> <code>10.0.28</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.0.24</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.0.17</code> (supported in all regions except us-east-2, ca-central-1,
     * eu-west-2)</p> </li> </ul> <p> <b>Microsoft SQL Server 2016</b> </p> <ul> <li>
     * <p> <code>13.00.4422.0.v1</code> (supported for all editions, and all AWS
     * regions)</p> </li> <li> <p> <code>13.00.2164.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> </ul> <p> <b>Microsoft SQL Server
     * 2014</b> </p> <ul> <li> <p> <code>12.00.5546.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> <li> <p> <code>12.00.5000.0.v1</code>
     * (supported for all editions, and all AWS regions)</p> </li> <li> <p>
     * <code>12.00.4422.0.v1</code> (supported for all editions except Enterprise
     * Edition, and all AWS regions except ca-central-1 and eu-west-2)</p> </li> </ul>
     * <p> <b>Microsoft SQL Server 2012</b> </p> <ul> <li> <p>
     * <code>11.00.6594.0.v1</code> (supported for all editions, and all AWS
     * regions)</p> </li> <li> <p> <code>11.00.6020.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> <li> <p> <code>11.00.5058.0.v1</code>
     * (supported for all editions, and all AWS regions except us-east-2, ca-central-1,
     * and eu-west-2)</p> </li> <li> <p> <code>11.00.2100.60.v1</code> (supported for
     * all editions, and all AWS regions except us-east-2, ca-central-1, and
     * eu-west-2)</p> </li> </ul> <p> <b>Microsoft SQL Server 2008 R2</b> </p> <ul>
     * <li> <p> <code>10.50.6529.0.v1</code> (supported for all editions, and all AWS
     * regions except us-east-2, ca-central-1, and eu-west-2)</p> </li> <li> <p>
     * <code>10.50.6000.34.v1</code> (supported for all editions, and all AWS regions
     * except us-east-2, ca-central-1, and eu-west-2)</p> </li> <li> <p>
     * <code>10.50.2789.0.v1</code> (supported for all editions, and all AWS regions
     * except us-east-2, ca-central-1, and eu-west-2)</p> </li> </ul> <p> <b>MySQL</b>
     * </p> <ul> <li> <p> <code>5.7.17</code> (supported in all AWS regions)</p> </li>
     * <li> <p> <code>5.7.16</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.7.11</code> (supported in all AWS regions)</p> </li> </ul> <p/> <ul>
     * <li> <p> <code>5.6.35</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.34</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.29</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.27</code> (supported in all regions except us-east-2, ca-central-1,
     * eu-west-2)</p> </li> </ul> <p/> <ul> <li> <p> <code>5.5.54</code> (supported in
     * all AWS regions)</p> </li> <li> <p> <code>5.5.53</code> (supported in all AWS
     * regions)</p> </li> <li> <p> <code>5.5.46</code> (supported in all AWS
     * regions)</p> </li> </ul> <p> <b>Oracle 12c</b> </p> <ul> <li> <p>
     * <code>12.1.0.2.v8</code> (supported for EE in all AWS regions, and SE2 in all
     * AWS regions except us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v7</code>
     * (supported for EE in all AWS regions, and SE2 in all AWS regions except
     * us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v6</code> (supported for EE in
     * all AWS regions, and SE2 in all AWS regions except us-gov-west-1)</p> </li> <li>
     * <p> <code>12.1.0.2.v5</code> (supported for EE in all AWS regions, and SE2 in
     * all AWS regions except us-gov-west-1)</p> </li> <li> <p>
     * <code>12.1.0.2.v4</code> (supported for EE in all AWS regions, and SE2 in all
     * AWS regions except us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v3</code>
     * (supported for EE in all AWS regions, and SE2 in all AWS regions except
     * us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v2</code> (supported for EE in
     * all AWS regions, and SE2 in all AWS regions except us-gov-west-1)</p> </li> <li>
     * <p> <code>12.1.0.2.v1</code> (supported for EE in all AWS regions, and SE2 in
     * all AWS regions except us-gov-west-1)</p> </li> </ul> <p> <b>Oracle 11g</b> </p>
     * <ul> <li> <p> <code>11.2.0.4.v12</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v11</code> (supported for EE,
     * SE1, and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v10</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> <li> <p>
     * <code>11.2.0.4.v9</code> (supported for EE, SE1, and SE, in all AWS regions)</p>
     * </li> <li> <p> <code>11.2.0.4.v8</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v7</code> (supported for EE, SE1,
     * and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v6</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> <li> <p>
     * <code>11.2.0.4.v5</code> (supported for EE, SE1, and SE, in all AWS regions)</p>
     * </li> <li> <p> <code>11.2.0.4.v4</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v3</code> (supported for EE, SE1,
     * and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v1</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> </ul> <p>
     * <b>PostgreSQL</b> </p> <ul> <li> <p> <b>Version 9.6.x:</b> <code> 9.6.1 | 9.6.2
     * | 9.6.3</code> </p> </li> <li> <p> <b>Version 9.5.x:</b> <code>9.5.6 | 9.5.4 |
     * 9.5.2</code> </p> </li> <li> <p> <b>Version 9.4.x:</b> <code>9.4.11 | 9.4.9 |
     * 9.4.7</code> </p> </li> <li> <p> <b>Version 9.3.x:</b> <code>9.3.16 | 9.3.14 |
     * 9.3.12</code> </p> </li> </ul>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the database engine to use.</p> <p>The following are
     * the database engines and major and minor versions that are available with Amazon
     * RDS. Not every database engine is available for every AWS Region.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The version number of the database
     * engine to be used by the DB instance is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>.</p> <p> <b>MariaDB</b> </p> <ul> <li>
     * <p> <code>10.1.23</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.1.19</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.1.14</code> (supported in all regions except us-east-2)</p> </li> </ul>
     * <p/> <ul> <li> <p> <code>10.0.31</code> (supported in all AWS regions)</p> </li>
     * <li> <p> <code>10.0.28</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.0.24</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.0.17</code> (supported in all regions except us-east-2, ca-central-1,
     * eu-west-2)</p> </li> </ul> <p> <b>Microsoft SQL Server 2016</b> </p> <ul> <li>
     * <p> <code>13.00.4422.0.v1</code> (supported for all editions, and all AWS
     * regions)</p> </li> <li> <p> <code>13.00.2164.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> </ul> <p> <b>Microsoft SQL Server
     * 2014</b> </p> <ul> <li> <p> <code>12.00.5546.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> <li> <p> <code>12.00.5000.0.v1</code>
     * (supported for all editions, and all AWS regions)</p> </li> <li> <p>
     * <code>12.00.4422.0.v1</code> (supported for all editions except Enterprise
     * Edition, and all AWS regions except ca-central-1 and eu-west-2)</p> </li> </ul>
     * <p> <b>Microsoft SQL Server 2012</b> </p> <ul> <li> <p>
     * <code>11.00.6594.0.v1</code> (supported for all editions, and all AWS
     * regions)</p> </li> <li> <p> <code>11.00.6020.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> <li> <p> <code>11.00.5058.0.v1</code>
     * (supported for all editions, and all AWS regions except us-east-2, ca-central-1,
     * and eu-west-2)</p> </li> <li> <p> <code>11.00.2100.60.v1</code> (supported for
     * all editions, and all AWS regions except us-east-2, ca-central-1, and
     * eu-west-2)</p> </li> </ul> <p> <b>Microsoft SQL Server 2008 R2</b> </p> <ul>
     * <li> <p> <code>10.50.6529.0.v1</code> (supported for all editions, and all AWS
     * regions except us-east-2, ca-central-1, and eu-west-2)</p> </li> <li> <p>
     * <code>10.50.6000.34.v1</code> (supported for all editions, and all AWS regions
     * except us-east-2, ca-central-1, and eu-west-2)</p> </li> <li> <p>
     * <code>10.50.2789.0.v1</code> (supported for all editions, and all AWS regions
     * except us-east-2, ca-central-1, and eu-west-2)</p> </li> </ul> <p> <b>MySQL</b>
     * </p> <ul> <li> <p> <code>5.7.17</code> (supported in all AWS regions)</p> </li>
     * <li> <p> <code>5.7.16</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.7.11</code> (supported in all AWS regions)</p> </li> </ul> <p/> <ul>
     * <li> <p> <code>5.6.35</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.34</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.29</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.27</code> (supported in all regions except us-east-2, ca-central-1,
     * eu-west-2)</p> </li> </ul> <p/> <ul> <li> <p> <code>5.5.54</code> (supported in
     * all AWS regions)</p> </li> <li> <p> <code>5.5.53</code> (supported in all AWS
     * regions)</p> </li> <li> <p> <code>5.5.46</code> (supported in all AWS
     * regions)</p> </li> </ul> <p> <b>Oracle 12c</b> </p> <ul> <li> <p>
     * <code>12.1.0.2.v8</code> (supported for EE in all AWS regions, and SE2 in all
     * AWS regions except us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v7</code>
     * (supported for EE in all AWS regions, and SE2 in all AWS regions except
     * us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v6</code> (supported for EE in
     * all AWS regions, and SE2 in all AWS regions except us-gov-west-1)</p> </li> <li>
     * <p> <code>12.1.0.2.v5</code> (supported for EE in all AWS regions, and SE2 in
     * all AWS regions except us-gov-west-1)</p> </li> <li> <p>
     * <code>12.1.0.2.v4</code> (supported for EE in all AWS regions, and SE2 in all
     * AWS regions except us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v3</code>
     * (supported for EE in all AWS regions, and SE2 in all AWS regions except
     * us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v2</code> (supported for EE in
     * all AWS regions, and SE2 in all AWS regions except us-gov-west-1)</p> </li> <li>
     * <p> <code>12.1.0.2.v1</code> (supported for EE in all AWS regions, and SE2 in
     * all AWS regions except us-gov-west-1)</p> </li> </ul> <p> <b>Oracle 11g</b> </p>
     * <ul> <li> <p> <code>11.2.0.4.v12</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v11</code> (supported for EE,
     * SE1, and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v10</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> <li> <p>
     * <code>11.2.0.4.v9</code> (supported for EE, SE1, and SE, in all AWS regions)</p>
     * </li> <li> <p> <code>11.2.0.4.v8</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v7</code> (supported for EE, SE1,
     * and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v6</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> <li> <p>
     * <code>11.2.0.4.v5</code> (supported for EE, SE1, and SE, in all AWS regions)</p>
     * </li> <li> <p> <code>11.2.0.4.v4</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v3</code> (supported for EE, SE1,
     * and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v1</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> </ul> <p>
     * <b>PostgreSQL</b> </p> <ul> <li> <p> <b>Version 9.6.x:</b> <code> 9.6.1 | 9.6.2
     * | 9.6.3</code> </p> </li> <li> <p> <b>Version 9.5.x:</b> <code>9.5.6 | 9.5.4 |
     * 9.5.2</code> </p> </li> <li> <p> <b>Version 9.4.x:</b> <code>9.4.11 | 9.4.9 |
     * 9.4.7</code> </p> </li> <li> <p> <b>Version 9.3.x:</b> <code>9.3.16 | 9.3.14 |
     * 9.3.12</code> </p> </li> </ul>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the database engine to use.</p> <p>The following are
     * the database engines and major and minor versions that are available with Amazon
     * RDS. Not every database engine is available for every AWS Region.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The version number of the database
     * engine to be used by the DB instance is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>.</p> <p> <b>MariaDB</b> </p> <ul> <li>
     * <p> <code>10.1.23</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.1.19</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.1.14</code> (supported in all regions except us-east-2)</p> </li> </ul>
     * <p/> <ul> <li> <p> <code>10.0.31</code> (supported in all AWS regions)</p> </li>
     * <li> <p> <code>10.0.28</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.0.24</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.0.17</code> (supported in all regions except us-east-2, ca-central-1,
     * eu-west-2)</p> </li> </ul> <p> <b>Microsoft SQL Server 2016</b> </p> <ul> <li>
     * <p> <code>13.00.4422.0.v1</code> (supported for all editions, and all AWS
     * regions)</p> </li> <li> <p> <code>13.00.2164.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> </ul> <p> <b>Microsoft SQL Server
     * 2014</b> </p> <ul> <li> <p> <code>12.00.5546.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> <li> <p> <code>12.00.5000.0.v1</code>
     * (supported for all editions, and all AWS regions)</p> </li> <li> <p>
     * <code>12.00.4422.0.v1</code> (supported for all editions except Enterprise
     * Edition, and all AWS regions except ca-central-1 and eu-west-2)</p> </li> </ul>
     * <p> <b>Microsoft SQL Server 2012</b> </p> <ul> <li> <p>
     * <code>11.00.6594.0.v1</code> (supported for all editions, and all AWS
     * regions)</p> </li> <li> <p> <code>11.00.6020.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> <li> <p> <code>11.00.5058.0.v1</code>
     * (supported for all editions, and all AWS regions except us-east-2, ca-central-1,
     * and eu-west-2)</p> </li> <li> <p> <code>11.00.2100.60.v1</code> (supported for
     * all editions, and all AWS regions except us-east-2, ca-central-1, and
     * eu-west-2)</p> </li> </ul> <p> <b>Microsoft SQL Server 2008 R2</b> </p> <ul>
     * <li> <p> <code>10.50.6529.0.v1</code> (supported for all editions, and all AWS
     * regions except us-east-2, ca-central-1, and eu-west-2)</p> </li> <li> <p>
     * <code>10.50.6000.34.v1</code> (supported for all editions, and all AWS regions
     * except us-east-2, ca-central-1, and eu-west-2)</p> </li> <li> <p>
     * <code>10.50.2789.0.v1</code> (supported for all editions, and all AWS regions
     * except us-east-2, ca-central-1, and eu-west-2)</p> </li> </ul> <p> <b>MySQL</b>
     * </p> <ul> <li> <p> <code>5.7.17</code> (supported in all AWS regions)</p> </li>
     * <li> <p> <code>5.7.16</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.7.11</code> (supported in all AWS regions)</p> </li> </ul> <p/> <ul>
     * <li> <p> <code>5.6.35</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.34</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.29</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.27</code> (supported in all regions except us-east-2, ca-central-1,
     * eu-west-2)</p> </li> </ul> <p/> <ul> <li> <p> <code>5.5.54</code> (supported in
     * all AWS regions)</p> </li> <li> <p> <code>5.5.53</code> (supported in all AWS
     * regions)</p> </li> <li> <p> <code>5.5.46</code> (supported in all AWS
     * regions)</p> </li> </ul> <p> <b>Oracle 12c</b> </p> <ul> <li> <p>
     * <code>12.1.0.2.v8</code> (supported for EE in all AWS regions, and SE2 in all
     * AWS regions except us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v7</code>
     * (supported for EE in all AWS regions, and SE2 in all AWS regions except
     * us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v6</code> (supported for EE in
     * all AWS regions, and SE2 in all AWS regions except us-gov-west-1)</p> </li> <li>
     * <p> <code>12.1.0.2.v5</code> (supported for EE in all AWS regions, and SE2 in
     * all AWS regions except us-gov-west-1)</p> </li> <li> <p>
     * <code>12.1.0.2.v4</code> (supported for EE in all AWS regions, and SE2 in all
     * AWS regions except us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v3</code>
     * (supported for EE in all AWS regions, and SE2 in all AWS regions except
     * us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v2</code> (supported for EE in
     * all AWS regions, and SE2 in all AWS regions except us-gov-west-1)</p> </li> <li>
     * <p> <code>12.1.0.2.v1</code> (supported for EE in all AWS regions, and SE2 in
     * all AWS regions except us-gov-west-1)</p> </li> </ul> <p> <b>Oracle 11g</b> </p>
     * <ul> <li> <p> <code>11.2.0.4.v12</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v11</code> (supported for EE,
     * SE1, and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v10</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> <li> <p>
     * <code>11.2.0.4.v9</code> (supported for EE, SE1, and SE, in all AWS regions)</p>
     * </li> <li> <p> <code>11.2.0.4.v8</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v7</code> (supported for EE, SE1,
     * and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v6</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> <li> <p>
     * <code>11.2.0.4.v5</code> (supported for EE, SE1, and SE, in all AWS regions)</p>
     * </li> <li> <p> <code>11.2.0.4.v4</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v3</code> (supported for EE, SE1,
     * and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v1</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> </ul> <p>
     * <b>PostgreSQL</b> </p> <ul> <li> <p> <b>Version 9.6.x:</b> <code> 9.6.1 | 9.6.2
     * | 9.6.3</code> </p> </li> <li> <p> <b>Version 9.5.x:</b> <code>9.5.6 | 9.5.4 |
     * 9.5.2</code> </p> </li> <li> <p> <b>Version 9.4.x:</b> <code>9.4.11 | 9.4.9 |
     * 9.4.7</code> </p> </li> <li> <p> <b>Version 9.3.x:</b> <code>9.3.16 | 9.3.14 |
     * 9.3.12</code> </p> </li> </ul>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the database engine to use.</p> <p>The following are
     * the database engines and major and minor versions that are available with Amazon
     * RDS. Not every database engine is available for every AWS Region.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The version number of the database
     * engine to be used by the DB instance is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>.</p> <p> <b>MariaDB</b> </p> <ul> <li>
     * <p> <code>10.1.23</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.1.19</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.1.14</code> (supported in all regions except us-east-2)</p> </li> </ul>
     * <p/> <ul> <li> <p> <code>10.0.31</code> (supported in all AWS regions)</p> </li>
     * <li> <p> <code>10.0.28</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.0.24</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.0.17</code> (supported in all regions except us-east-2, ca-central-1,
     * eu-west-2)</p> </li> </ul> <p> <b>Microsoft SQL Server 2016</b> </p> <ul> <li>
     * <p> <code>13.00.4422.0.v1</code> (supported for all editions, and all AWS
     * regions)</p> </li> <li> <p> <code>13.00.2164.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> </ul> <p> <b>Microsoft SQL Server
     * 2014</b> </p> <ul> <li> <p> <code>12.00.5546.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> <li> <p> <code>12.00.5000.0.v1</code>
     * (supported for all editions, and all AWS regions)</p> </li> <li> <p>
     * <code>12.00.4422.0.v1</code> (supported for all editions except Enterprise
     * Edition, and all AWS regions except ca-central-1 and eu-west-2)</p> </li> </ul>
     * <p> <b>Microsoft SQL Server 2012</b> </p> <ul> <li> <p>
     * <code>11.00.6594.0.v1</code> (supported for all editions, and all AWS
     * regions)</p> </li> <li> <p> <code>11.00.6020.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> <li> <p> <code>11.00.5058.0.v1</code>
     * (supported for all editions, and all AWS regions except us-east-2, ca-central-1,
     * and eu-west-2)</p> </li> <li> <p> <code>11.00.2100.60.v1</code> (supported for
     * all editions, and all AWS regions except us-east-2, ca-central-1, and
     * eu-west-2)</p> </li> </ul> <p> <b>Microsoft SQL Server 2008 R2</b> </p> <ul>
     * <li> <p> <code>10.50.6529.0.v1</code> (supported for all editions, and all AWS
     * regions except us-east-2, ca-central-1, and eu-west-2)</p> </li> <li> <p>
     * <code>10.50.6000.34.v1</code> (supported for all editions, and all AWS regions
     * except us-east-2, ca-central-1, and eu-west-2)</p> </li> <li> <p>
     * <code>10.50.2789.0.v1</code> (supported for all editions, and all AWS regions
     * except us-east-2, ca-central-1, and eu-west-2)</p> </li> </ul> <p> <b>MySQL</b>
     * </p> <ul> <li> <p> <code>5.7.17</code> (supported in all AWS regions)</p> </li>
     * <li> <p> <code>5.7.16</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.7.11</code> (supported in all AWS regions)</p> </li> </ul> <p/> <ul>
     * <li> <p> <code>5.6.35</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.34</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.29</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.27</code> (supported in all regions except us-east-2, ca-central-1,
     * eu-west-2)</p> </li> </ul> <p/> <ul> <li> <p> <code>5.5.54</code> (supported in
     * all AWS regions)</p> </li> <li> <p> <code>5.5.53</code> (supported in all AWS
     * regions)</p> </li> <li> <p> <code>5.5.46</code> (supported in all AWS
     * regions)</p> </li> </ul> <p> <b>Oracle 12c</b> </p> <ul> <li> <p>
     * <code>12.1.0.2.v8</code> (supported for EE in all AWS regions, and SE2 in all
     * AWS regions except us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v7</code>
     * (supported for EE in all AWS regions, and SE2 in all AWS regions except
     * us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v6</code> (supported for EE in
     * all AWS regions, and SE2 in all AWS regions except us-gov-west-1)</p> </li> <li>
     * <p> <code>12.1.0.2.v5</code> (supported for EE in all AWS regions, and SE2 in
     * all AWS regions except us-gov-west-1)</p> </li> <li> <p>
     * <code>12.1.0.2.v4</code> (supported for EE in all AWS regions, and SE2 in all
     * AWS regions except us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v3</code>
     * (supported for EE in all AWS regions, and SE2 in all AWS regions except
     * us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v2</code> (supported for EE in
     * all AWS regions, and SE2 in all AWS regions except us-gov-west-1)</p> </li> <li>
     * <p> <code>12.1.0.2.v1</code> (supported for EE in all AWS regions, and SE2 in
     * all AWS regions except us-gov-west-1)</p> </li> </ul> <p> <b>Oracle 11g</b> </p>
     * <ul> <li> <p> <code>11.2.0.4.v12</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v11</code> (supported for EE,
     * SE1, and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v10</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> <li> <p>
     * <code>11.2.0.4.v9</code> (supported for EE, SE1, and SE, in all AWS regions)</p>
     * </li> <li> <p> <code>11.2.0.4.v8</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v7</code> (supported for EE, SE1,
     * and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v6</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> <li> <p>
     * <code>11.2.0.4.v5</code> (supported for EE, SE1, and SE, in all AWS regions)</p>
     * </li> <li> <p> <code>11.2.0.4.v4</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v3</code> (supported for EE, SE1,
     * and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v1</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> </ul> <p>
     * <b>PostgreSQL</b> </p> <ul> <li> <p> <b>Version 9.6.x:</b> <code> 9.6.1 | 9.6.2
     * | 9.6.3</code> </p> </li> <li> <p> <b>Version 9.5.x:</b> <code>9.5.6 | 9.5.4 |
     * 9.5.2</code> </p> </li> <li> <p> <b>Version 9.4.x:</b> <code>9.4.11 | 9.4.9 |
     * 9.4.7</code> </p> </li> <li> <p> <b>Version 9.3.x:</b> <code>9.3.16 | 9.3.14 |
     * 9.3.12</code> </p> </li> </ul>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the database engine to use.</p> <p>The following are
     * the database engines and major and minor versions that are available with Amazon
     * RDS. Not every database engine is available for every AWS Region.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The version number of the database
     * engine to be used by the DB instance is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>.</p> <p> <b>MariaDB</b> </p> <ul> <li>
     * <p> <code>10.1.23</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.1.19</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.1.14</code> (supported in all regions except us-east-2)</p> </li> </ul>
     * <p/> <ul> <li> <p> <code>10.0.31</code> (supported in all AWS regions)</p> </li>
     * <li> <p> <code>10.0.28</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.0.24</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.0.17</code> (supported in all regions except us-east-2, ca-central-1,
     * eu-west-2)</p> </li> </ul> <p> <b>Microsoft SQL Server 2016</b> </p> <ul> <li>
     * <p> <code>13.00.4422.0.v1</code> (supported for all editions, and all AWS
     * regions)</p> </li> <li> <p> <code>13.00.2164.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> </ul> <p> <b>Microsoft SQL Server
     * 2014</b> </p> <ul> <li> <p> <code>12.00.5546.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> <li> <p> <code>12.00.5000.0.v1</code>
     * (supported for all editions, and all AWS regions)</p> </li> <li> <p>
     * <code>12.00.4422.0.v1</code> (supported for all editions except Enterprise
     * Edition, and all AWS regions except ca-central-1 and eu-west-2)</p> </li> </ul>
     * <p> <b>Microsoft SQL Server 2012</b> </p> <ul> <li> <p>
     * <code>11.00.6594.0.v1</code> (supported for all editions, and all AWS
     * regions)</p> </li> <li> <p> <code>11.00.6020.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> <li> <p> <code>11.00.5058.0.v1</code>
     * (supported for all editions, and all AWS regions except us-east-2, ca-central-1,
     * and eu-west-2)</p> </li> <li> <p> <code>11.00.2100.60.v1</code> (supported for
     * all editions, and all AWS regions except us-east-2, ca-central-1, and
     * eu-west-2)</p> </li> </ul> <p> <b>Microsoft SQL Server 2008 R2</b> </p> <ul>
     * <li> <p> <code>10.50.6529.0.v1</code> (supported for all editions, and all AWS
     * regions except us-east-2, ca-central-1, and eu-west-2)</p> </li> <li> <p>
     * <code>10.50.6000.34.v1</code> (supported for all editions, and all AWS regions
     * except us-east-2, ca-central-1, and eu-west-2)</p> </li> <li> <p>
     * <code>10.50.2789.0.v1</code> (supported for all editions, and all AWS regions
     * except us-east-2, ca-central-1, and eu-west-2)</p> </li> </ul> <p> <b>MySQL</b>
     * </p> <ul> <li> <p> <code>5.7.17</code> (supported in all AWS regions)</p> </li>
     * <li> <p> <code>5.7.16</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.7.11</code> (supported in all AWS regions)</p> </li> </ul> <p/> <ul>
     * <li> <p> <code>5.6.35</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.34</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.29</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.27</code> (supported in all regions except us-east-2, ca-central-1,
     * eu-west-2)</p> </li> </ul> <p/> <ul> <li> <p> <code>5.5.54</code> (supported in
     * all AWS regions)</p> </li> <li> <p> <code>5.5.53</code> (supported in all AWS
     * regions)</p> </li> <li> <p> <code>5.5.46</code> (supported in all AWS
     * regions)</p> </li> </ul> <p> <b>Oracle 12c</b> </p> <ul> <li> <p>
     * <code>12.1.0.2.v8</code> (supported for EE in all AWS regions, and SE2 in all
     * AWS regions except us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v7</code>
     * (supported for EE in all AWS regions, and SE2 in all AWS regions except
     * us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v6</code> (supported for EE in
     * all AWS regions, and SE2 in all AWS regions except us-gov-west-1)</p> </li> <li>
     * <p> <code>12.1.0.2.v5</code> (supported for EE in all AWS regions, and SE2 in
     * all AWS regions except us-gov-west-1)</p> </li> <li> <p>
     * <code>12.1.0.2.v4</code> (supported for EE in all AWS regions, and SE2 in all
     * AWS regions except us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v3</code>
     * (supported for EE in all AWS regions, and SE2 in all AWS regions except
     * us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v2</code> (supported for EE in
     * all AWS regions, and SE2 in all AWS regions except us-gov-west-1)</p> </li> <li>
     * <p> <code>12.1.0.2.v1</code> (supported for EE in all AWS regions, and SE2 in
     * all AWS regions except us-gov-west-1)</p> </li> </ul> <p> <b>Oracle 11g</b> </p>
     * <ul> <li> <p> <code>11.2.0.4.v12</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v11</code> (supported for EE,
     * SE1, and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v10</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> <li> <p>
     * <code>11.2.0.4.v9</code> (supported for EE, SE1, and SE, in all AWS regions)</p>
     * </li> <li> <p> <code>11.2.0.4.v8</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v7</code> (supported for EE, SE1,
     * and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v6</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> <li> <p>
     * <code>11.2.0.4.v5</code> (supported for EE, SE1, and SE, in all AWS regions)</p>
     * </li> <li> <p> <code>11.2.0.4.v4</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v3</code> (supported for EE, SE1,
     * and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v1</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> </ul> <p>
     * <b>PostgreSQL</b> </p> <ul> <li> <p> <b>Version 9.6.x:</b> <code> 9.6.1 | 9.6.2
     * | 9.6.3</code> </p> </li> <li> <p> <b>Version 9.5.x:</b> <code>9.5.6 | 9.5.4 |
     * 9.5.2</code> </p> </li> <li> <p> <b>Version 9.4.x:</b> <code>9.4.11 | 9.4.9 |
     * 9.4.7</code> </p> </li> <li> <p> <b>Version 9.3.x:</b> <code>9.3.16 | 9.3.14 |
     * 9.3.12</code> </p> </li> </ul>
     */
    inline CreateDBInstanceRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the database engine to use.</p> <p>The following are
     * the database engines and major and minor versions that are available with Amazon
     * RDS. Not every database engine is available for every AWS Region.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The version number of the database
     * engine to be used by the DB instance is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>.</p> <p> <b>MariaDB</b> </p> <ul> <li>
     * <p> <code>10.1.23</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.1.19</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.1.14</code> (supported in all regions except us-east-2)</p> </li> </ul>
     * <p/> <ul> <li> <p> <code>10.0.31</code> (supported in all AWS regions)</p> </li>
     * <li> <p> <code>10.0.28</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.0.24</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.0.17</code> (supported in all regions except us-east-2, ca-central-1,
     * eu-west-2)</p> </li> </ul> <p> <b>Microsoft SQL Server 2016</b> </p> <ul> <li>
     * <p> <code>13.00.4422.0.v1</code> (supported for all editions, and all AWS
     * regions)</p> </li> <li> <p> <code>13.00.2164.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> </ul> <p> <b>Microsoft SQL Server
     * 2014</b> </p> <ul> <li> <p> <code>12.00.5546.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> <li> <p> <code>12.00.5000.0.v1</code>
     * (supported for all editions, and all AWS regions)</p> </li> <li> <p>
     * <code>12.00.4422.0.v1</code> (supported for all editions except Enterprise
     * Edition, and all AWS regions except ca-central-1 and eu-west-2)</p> </li> </ul>
     * <p> <b>Microsoft SQL Server 2012</b> </p> <ul> <li> <p>
     * <code>11.00.6594.0.v1</code> (supported for all editions, and all AWS
     * regions)</p> </li> <li> <p> <code>11.00.6020.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> <li> <p> <code>11.00.5058.0.v1</code>
     * (supported for all editions, and all AWS regions except us-east-2, ca-central-1,
     * and eu-west-2)</p> </li> <li> <p> <code>11.00.2100.60.v1</code> (supported for
     * all editions, and all AWS regions except us-east-2, ca-central-1, and
     * eu-west-2)</p> </li> </ul> <p> <b>Microsoft SQL Server 2008 R2</b> </p> <ul>
     * <li> <p> <code>10.50.6529.0.v1</code> (supported for all editions, and all AWS
     * regions except us-east-2, ca-central-1, and eu-west-2)</p> </li> <li> <p>
     * <code>10.50.6000.34.v1</code> (supported for all editions, and all AWS regions
     * except us-east-2, ca-central-1, and eu-west-2)</p> </li> <li> <p>
     * <code>10.50.2789.0.v1</code> (supported for all editions, and all AWS regions
     * except us-east-2, ca-central-1, and eu-west-2)</p> </li> </ul> <p> <b>MySQL</b>
     * </p> <ul> <li> <p> <code>5.7.17</code> (supported in all AWS regions)</p> </li>
     * <li> <p> <code>5.7.16</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.7.11</code> (supported in all AWS regions)</p> </li> </ul> <p/> <ul>
     * <li> <p> <code>5.6.35</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.34</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.29</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.27</code> (supported in all regions except us-east-2, ca-central-1,
     * eu-west-2)</p> </li> </ul> <p/> <ul> <li> <p> <code>5.5.54</code> (supported in
     * all AWS regions)</p> </li> <li> <p> <code>5.5.53</code> (supported in all AWS
     * regions)</p> </li> <li> <p> <code>5.5.46</code> (supported in all AWS
     * regions)</p> </li> </ul> <p> <b>Oracle 12c</b> </p> <ul> <li> <p>
     * <code>12.1.0.2.v8</code> (supported for EE in all AWS regions, and SE2 in all
     * AWS regions except us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v7</code>
     * (supported for EE in all AWS regions, and SE2 in all AWS regions except
     * us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v6</code> (supported for EE in
     * all AWS regions, and SE2 in all AWS regions except us-gov-west-1)</p> </li> <li>
     * <p> <code>12.1.0.2.v5</code> (supported for EE in all AWS regions, and SE2 in
     * all AWS regions except us-gov-west-1)</p> </li> <li> <p>
     * <code>12.1.0.2.v4</code> (supported for EE in all AWS regions, and SE2 in all
     * AWS regions except us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v3</code>
     * (supported for EE in all AWS regions, and SE2 in all AWS regions except
     * us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v2</code> (supported for EE in
     * all AWS regions, and SE2 in all AWS regions except us-gov-west-1)</p> </li> <li>
     * <p> <code>12.1.0.2.v1</code> (supported for EE in all AWS regions, and SE2 in
     * all AWS regions except us-gov-west-1)</p> </li> </ul> <p> <b>Oracle 11g</b> </p>
     * <ul> <li> <p> <code>11.2.0.4.v12</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v11</code> (supported for EE,
     * SE1, and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v10</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> <li> <p>
     * <code>11.2.0.4.v9</code> (supported for EE, SE1, and SE, in all AWS regions)</p>
     * </li> <li> <p> <code>11.2.0.4.v8</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v7</code> (supported for EE, SE1,
     * and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v6</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> <li> <p>
     * <code>11.2.0.4.v5</code> (supported for EE, SE1, and SE, in all AWS regions)</p>
     * </li> <li> <p> <code>11.2.0.4.v4</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v3</code> (supported for EE, SE1,
     * and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v1</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> </ul> <p>
     * <b>PostgreSQL</b> </p> <ul> <li> <p> <b>Version 9.6.x:</b> <code> 9.6.1 | 9.6.2
     * | 9.6.3</code> </p> </li> <li> <p> <b>Version 9.5.x:</b> <code>9.5.6 | 9.5.4 |
     * 9.5.2</code> </p> </li> <li> <p> <b>Version 9.4.x:</b> <code>9.4.11 | 9.4.9 |
     * 9.4.7</code> </p> </li> <li> <p> <b>Version 9.3.x:</b> <code>9.3.16 | 9.3.14 |
     * 9.3.12</code> </p> </li> </ul>
     */
    inline CreateDBInstanceRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the database engine to use.</p> <p>The following are
     * the database engines and major and minor versions that are available with Amazon
     * RDS. Not every database engine is available for every AWS Region.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The version number of the database
     * engine to be used by the DB instance is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>.</p> <p> <b>MariaDB</b> </p> <ul> <li>
     * <p> <code>10.1.23</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.1.19</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.1.14</code> (supported in all regions except us-east-2)</p> </li> </ul>
     * <p/> <ul> <li> <p> <code>10.0.31</code> (supported in all AWS regions)</p> </li>
     * <li> <p> <code>10.0.28</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.0.24</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>10.0.17</code> (supported in all regions except us-east-2, ca-central-1,
     * eu-west-2)</p> </li> </ul> <p> <b>Microsoft SQL Server 2016</b> </p> <ul> <li>
     * <p> <code>13.00.4422.0.v1</code> (supported for all editions, and all AWS
     * regions)</p> </li> <li> <p> <code>13.00.2164.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> </ul> <p> <b>Microsoft SQL Server
     * 2014</b> </p> <ul> <li> <p> <code>12.00.5546.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> <li> <p> <code>12.00.5000.0.v1</code>
     * (supported for all editions, and all AWS regions)</p> </li> <li> <p>
     * <code>12.00.4422.0.v1</code> (supported for all editions except Enterprise
     * Edition, and all AWS regions except ca-central-1 and eu-west-2)</p> </li> </ul>
     * <p> <b>Microsoft SQL Server 2012</b> </p> <ul> <li> <p>
     * <code>11.00.6594.0.v1</code> (supported for all editions, and all AWS
     * regions)</p> </li> <li> <p> <code>11.00.6020.0.v1</code> (supported for all
     * editions, and all AWS regions)</p> </li> <li> <p> <code>11.00.5058.0.v1</code>
     * (supported for all editions, and all AWS regions except us-east-2, ca-central-1,
     * and eu-west-2)</p> </li> <li> <p> <code>11.00.2100.60.v1</code> (supported for
     * all editions, and all AWS regions except us-east-2, ca-central-1, and
     * eu-west-2)</p> </li> </ul> <p> <b>Microsoft SQL Server 2008 R2</b> </p> <ul>
     * <li> <p> <code>10.50.6529.0.v1</code> (supported for all editions, and all AWS
     * regions except us-east-2, ca-central-1, and eu-west-2)</p> </li> <li> <p>
     * <code>10.50.6000.34.v1</code> (supported for all editions, and all AWS regions
     * except us-east-2, ca-central-1, and eu-west-2)</p> </li> <li> <p>
     * <code>10.50.2789.0.v1</code> (supported for all editions, and all AWS regions
     * except us-east-2, ca-central-1, and eu-west-2)</p> </li> </ul> <p> <b>MySQL</b>
     * </p> <ul> <li> <p> <code>5.7.17</code> (supported in all AWS regions)</p> </li>
     * <li> <p> <code>5.7.16</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.7.11</code> (supported in all AWS regions)</p> </li> </ul> <p/> <ul>
     * <li> <p> <code>5.6.35</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.34</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.29</code> (supported in all AWS regions)</p> </li> <li> <p>
     * <code>5.6.27</code> (supported in all regions except us-east-2, ca-central-1,
     * eu-west-2)</p> </li> </ul> <p/> <ul> <li> <p> <code>5.5.54</code> (supported in
     * all AWS regions)</p> </li> <li> <p> <code>5.5.53</code> (supported in all AWS
     * regions)</p> </li> <li> <p> <code>5.5.46</code> (supported in all AWS
     * regions)</p> </li> </ul> <p> <b>Oracle 12c</b> </p> <ul> <li> <p>
     * <code>12.1.0.2.v8</code> (supported for EE in all AWS regions, and SE2 in all
     * AWS regions except us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v7</code>
     * (supported for EE in all AWS regions, and SE2 in all AWS regions except
     * us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v6</code> (supported for EE in
     * all AWS regions, and SE2 in all AWS regions except us-gov-west-1)</p> </li> <li>
     * <p> <code>12.1.0.2.v5</code> (supported for EE in all AWS regions, and SE2 in
     * all AWS regions except us-gov-west-1)</p> </li> <li> <p>
     * <code>12.1.0.2.v4</code> (supported for EE in all AWS regions, and SE2 in all
     * AWS regions except us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v3</code>
     * (supported for EE in all AWS regions, and SE2 in all AWS regions except
     * us-gov-west-1)</p> </li> <li> <p> <code>12.1.0.2.v2</code> (supported for EE in
     * all AWS regions, and SE2 in all AWS regions except us-gov-west-1)</p> </li> <li>
     * <p> <code>12.1.0.2.v1</code> (supported for EE in all AWS regions, and SE2 in
     * all AWS regions except us-gov-west-1)</p> </li> </ul> <p> <b>Oracle 11g</b> </p>
     * <ul> <li> <p> <code>11.2.0.4.v12</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v11</code> (supported for EE,
     * SE1, and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v10</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> <li> <p>
     * <code>11.2.0.4.v9</code> (supported for EE, SE1, and SE, in all AWS regions)</p>
     * </li> <li> <p> <code>11.2.0.4.v8</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v7</code> (supported for EE, SE1,
     * and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v6</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> <li> <p>
     * <code>11.2.0.4.v5</code> (supported for EE, SE1, and SE, in all AWS regions)</p>
     * </li> <li> <p> <code>11.2.0.4.v4</code> (supported for EE, SE1, and SE, in all
     * AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v3</code> (supported for EE, SE1,
     * and SE, in all AWS regions)</p> </li> <li> <p> <code>11.2.0.4.v1</code>
     * (supported for EE, SE1, and SE, in all AWS regions)</p> </li> </ul> <p>
     * <b>PostgreSQL</b> </p> <ul> <li> <p> <b>Version 9.6.x:</b> <code> 9.6.1 | 9.6.2
     * | 9.6.3</code> </p> </li> <li> <p> <b>Version 9.5.x:</b> <code>9.5.6 | 9.5.4 |
     * 9.5.2</code> </p> </li> <li> <p> <b>Version 9.4.x:</b> <code>9.4.11 | 9.4.9 |
     * 9.4.7</code> </p> </li> <li> <p> <b>Version 9.3.x:</b> <code>9.3.16 | 9.3.14 |
     * 9.3.12</code> </p> </li> </ul>
     */
    inline CreateDBInstanceRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Indicates that minor engine upgrades will be applied automatically to the DB
     * instance during the maintenance window.</p> <p>Default: <code>true</code> </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>Indicates that minor engine upgrades will be applied automatically to the DB
     * instance during the maintenance window.</p> <p>Default: <code>true</code> </p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>Indicates that minor engine upgrades will be applied automatically to the DB
     * instance during the maintenance window.</p> <p>Default: <code>true</code> </p>
     */
    inline CreateDBInstanceRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>License model information for this DB instance.</p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>License model information for this DB instance.</p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>License model information for this DB instance.</p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p>License model information for this DB instance.</p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>License model information for this DB instance.</p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline CreateDBInstanceRequest& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>License model information for this DB instance.</p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline CreateDBInstanceRequest& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p>License model information for this DB instance.</p> <p> Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline CreateDBInstanceRequest& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p> <p>Constraints: Must be a multiple
     * between 3 and 10 of the storage amount for the DB instance. Must also be an
     * integer multiple of 1000. For example, if the size of your DB instance is 500
     * GB, then your <code>Iops</code> value can be 2000, 3000, 4000, or 5000. </p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p> <p>Constraints: Must be a multiple
     * between 3 and 10 of the storage amount for the DB instance. Must also be an
     * integer multiple of 1000. For example, if the size of your DB instance is 500
     * GB, then your <code>Iops</code> value can be 2000, 3000, 4000, or 5000. </p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p> <p>Constraints: Must be a multiple
     * between 3 and 10 of the storage amount for the DB instance. Must also be an
     * integer multiple of 1000. For example, if the size of your DB instance is 500
     * GB, then your <code>Iops</code> value can be 2000, 3000, 4000, or 5000. </p>
     */
    inline CreateDBInstanceRequest& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>Indicates that the DB instance should be associated with the specified option
     * group.</p> <p>Permanent options, such as the TDE option for Oracle Advanced
     * Security TDE, cannot be removed from an option group, and that option group
     * cannot be removed from a DB instance once it is associated with a DB
     * instance</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>Indicates that the DB instance should be associated with the specified option
     * group.</p> <p>Permanent options, such as the TDE option for Oracle Advanced
     * Security TDE, cannot be removed from an option group, and that option group
     * cannot be removed from a DB instance once it is associated with a DB
     * instance</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>Indicates that the DB instance should be associated with the specified option
     * group.</p> <p>Permanent options, such as the TDE option for Oracle Advanced
     * Security TDE, cannot be removed from an option group, and that option group
     * cannot be removed from a DB instance once it is associated with a DB
     * instance</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>Indicates that the DB instance should be associated with the specified option
     * group.</p> <p>Permanent options, such as the TDE option for Oracle Advanced
     * Security TDE, cannot be removed from an option group, and that option group
     * cannot be removed from a DB instance once it is associated with a DB
     * instance</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>Indicates that the DB instance should be associated with the specified option
     * group.</p> <p>Permanent options, such as the TDE option for Oracle Advanced
     * Security TDE, cannot be removed from an option group, and that option group
     * cannot be removed from a DB instance once it is associated with a DB
     * instance</p>
     */
    inline CreateDBInstanceRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>Indicates that the DB instance should be associated with the specified option
     * group.</p> <p>Permanent options, such as the TDE option for Oracle Advanced
     * Security TDE, cannot be removed from an option group, and that option group
     * cannot be removed from a DB instance once it is associated with a DB
     * instance</p>
     */
    inline CreateDBInstanceRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>Indicates that the DB instance should be associated with the specified option
     * group.</p> <p>Permanent options, such as the TDE option for Oracle Advanced
     * Security TDE, cannot be removed from an option group, and that option group
     * cannot be removed from a DB instance once it is associated with a DB
     * instance</p>
     */
    inline CreateDBInstanceRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>For supported engines, indicates that the DB instance should be associated
     * with the specified CharacterSet.</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. The character set is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>.</p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }

    /**
     * <p>For supported engines, indicates that the DB instance should be associated
     * with the specified CharacterSet.</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. The character set is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>.</p>
     */
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p>For supported engines, indicates that the DB instance should be associated
     * with the specified CharacterSet.</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. The character set is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>.</p>
     */
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::move(value); }

    /**
     * <p>For supported engines, indicates that the DB instance should be associated
     * with the specified CharacterSet.</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. The character set is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>.</p>
     */
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }

    /**
     * <p>For supported engines, indicates that the DB instance should be associated
     * with the specified CharacterSet.</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. The character set is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>.</p>
     */
    inline CreateDBInstanceRequest& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}

    /**
     * <p>For supported engines, indicates that the DB instance should be associated
     * with the specified CharacterSet.</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. The character set is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>.</p>
     */
    inline CreateDBInstanceRequest& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(std::move(value)); return *this;}

    /**
     * <p>For supported engines, indicates that the DB instance should be associated
     * with the specified CharacterSet.</p> <p> <b>Amazon Aurora</b> </p> <p>Not
     * applicable. The character set is managed by the DB cluster. For more
     * information, see <a>CreateDBCluster</a>.</p>
     */
    inline CreateDBInstanceRequest& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}


    /**
     * <p>Specifies the accessibility options for the DB instance. A value of true
     * specifies an Internet-facing instance with a publicly resolvable DNS name, which
     * resolves to a public IP address. A value of false specifies an internal instance
     * with a DNS name that resolves to a private IP address.</p> <p>Default: The
     * default behavior varies depending on whether a VPC has been requested or not.
     * The following list shows the default behavior in each case.</p> <ul> <li> <p>
     * <b>Default VPC:</b> true</p> </li> <li> <p> <b>VPC:</b> false</p> </li> </ul>
     * <p>If no DB subnet group has been specified as part of the request and the
     * PubliclyAccessible value has not been set, the DB instance will be publicly
     * accessible. If a specific DB subnet group has been specified as part of the
     * request and the PubliclyAccessible value has not been set, the DB instance will
     * be private.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Specifies the accessibility options for the DB instance. A value of true
     * specifies an Internet-facing instance with a publicly resolvable DNS name, which
     * resolves to a public IP address. A value of false specifies an internal instance
     * with a DNS name that resolves to a private IP address.</p> <p>Default: The
     * default behavior varies depending on whether a VPC has been requested or not.
     * The following list shows the default behavior in each case.</p> <ul> <li> <p>
     * <b>Default VPC:</b> true</p> </li> <li> <p> <b>VPC:</b> false</p> </li> </ul>
     * <p>If no DB subnet group has been specified as part of the request and the
     * PubliclyAccessible value has not been set, the DB instance will be publicly
     * accessible. If a specific DB subnet group has been specified as part of the
     * request and the PubliclyAccessible value has not been set, the DB instance will
     * be private.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>Specifies the accessibility options for the DB instance. A value of true
     * specifies an Internet-facing instance with a publicly resolvable DNS name, which
     * resolves to a public IP address. A value of false specifies an internal instance
     * with a DNS name that resolves to a private IP address.</p> <p>Default: The
     * default behavior varies depending on whether a VPC has been requested or not.
     * The following list shows the default behavior in each case.</p> <ul> <li> <p>
     * <b>Default VPC:</b> true</p> </li> <li> <p> <b>VPC:</b> false</p> </li> </ul>
     * <p>If no DB subnet group has been specified as part of the request and the
     * PubliclyAccessible value has not been set, the DB instance will be publicly
     * accessible. If a specific DB subnet group has been specified as part of the
     * request and the PubliclyAccessible value has not been set, the DB instance will
     * be private.</p>
     */
    inline CreateDBInstanceRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateDBInstanceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateDBInstanceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateDBInstanceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateDBInstanceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of the DB cluster that the instance will belong to.</p> <p>For
     * information on creating a DB cluster, see <a>CreateDBCluster</a>.</p> <p>Type:
     * String</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The identifier of the DB cluster that the instance will belong to.</p> <p>For
     * information on creating a DB cluster, see <a>CreateDBCluster</a>.</p> <p>Type:
     * String</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The identifier of the DB cluster that the instance will belong to.</p> <p>For
     * information on creating a DB cluster, see <a>CreateDBCluster</a>.</p> <p>Type:
     * String</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the DB cluster that the instance will belong to.</p> <p>For
     * information on creating a DB cluster, see <a>CreateDBCluster</a>.</p> <p>Type:
     * String</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the DB cluster that the instance will belong to.</p> <p>For
     * information on creating a DB cluster, see <a>CreateDBCluster</a>.</p> <p>Type:
     * String</p>
     */
    inline CreateDBInstanceRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB cluster that the instance will belong to.</p> <p>For
     * information on creating a DB cluster, see <a>CreateDBCluster</a>.</p> <p>Type:
     * String</p>
     */
    inline CreateDBInstanceRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the DB cluster that the instance will belong to.</p> <p>For
     * information on creating a DB cluster, see <a>CreateDBCluster</a>.</p> <p>Type:
     * String</p>
     */
    inline CreateDBInstanceRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline CreateDBInstanceRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline CreateDBInstanceRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline CreateDBInstanceRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>The ARN from the Key Store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }

    /**
     * <p>The ARN from the Key Store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }

    /**
     * <p>The ARN from the Key Store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::move(value); }

    /**
     * <p>The ARN from the Key Store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }

    /**
     * <p>The ARN from the Key Store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline CreateDBInstanceRequest& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>The ARN from the Key Store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline CreateDBInstanceRequest& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(std::move(value)); return *this;}

    /**
     * <p>The ARN from the Key Store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline CreateDBInstanceRequest& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}


    /**
     * <p>The password for the given ARN from the Key Store in order to access the
     * device.</p>
     */
    inline const Aws::String& GetTdeCredentialPassword() const{ return m_tdeCredentialPassword; }

    /**
     * <p>The password for the given ARN from the Key Store in order to access the
     * device.</p>
     */
    inline void SetTdeCredentialPassword(const Aws::String& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = value; }

    /**
     * <p>The password for the given ARN from the Key Store in order to access the
     * device.</p>
     */
    inline void SetTdeCredentialPassword(Aws::String&& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = std::move(value); }

    /**
     * <p>The password for the given ARN from the Key Store in order to access the
     * device.</p>
     */
    inline void SetTdeCredentialPassword(const char* value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword.assign(value); }

    /**
     * <p>The password for the given ARN from the Key Store in order to access the
     * device.</p>
     */
    inline CreateDBInstanceRequest& WithTdeCredentialPassword(const Aws::String& value) { SetTdeCredentialPassword(value); return *this;}

    /**
     * <p>The password for the given ARN from the Key Store in order to access the
     * device.</p>
     */
    inline CreateDBInstanceRequest& WithTdeCredentialPassword(Aws::String&& value) { SetTdeCredentialPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the given ARN from the Key Store in order to access the
     * device.</p>
     */
    inline CreateDBInstanceRequest& WithTdeCredentialPassword(const char* value) { SetTdeCredentialPassword(value); return *this;}


    /**
     * <p>Specifies whether the DB instance is encrypted.</p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The encryption for DB instances is managed by the DB
     * cluster. For more information, see <a>CreateDBCluster</a>.</p> <p>Default:
     * false</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>Specifies whether the DB instance is encrypted.</p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The encryption for DB instances is managed by the DB
     * cluster. For more information, see <a>CreateDBCluster</a>.</p> <p>Default:
     * false</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>Specifies whether the DB instance is encrypted.</p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The encryption for DB instances is managed by the DB
     * cluster. For more information, see <a>CreateDBCluster</a>.</p> <p>Default:
     * false</p>
     */
    inline CreateDBInstanceRequest& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p>The KMS key identifier for an encrypted DB instance.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key.</p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The KMS key identifier is managed by the DB cluster. For
     * more information, see <a>CreateDBCluster</a>.</p> <p>If the
     * <code>StorageEncrypted</code> parameter is true, and you do not specify a value
     * for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key identifier for an encrypted DB instance.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key.</p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The KMS key identifier is managed by the DB cluster. For
     * more information, see <a>CreateDBCluster</a>.</p> <p>If the
     * <code>StorageEncrypted</code> parameter is true, and you do not specify a value
     * for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier for an encrypted DB instance.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key.</p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The KMS key identifier is managed by the DB cluster. For
     * more information, see <a>CreateDBCluster</a>.</p> <p>If the
     * <code>StorageEncrypted</code> parameter is true, and you do not specify a value
     * for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS key identifier for an encrypted DB instance.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key.</p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The KMS key identifier is managed by the DB cluster. For
     * more information, see <a>CreateDBCluster</a>.</p> <p>If the
     * <code>StorageEncrypted</code> parameter is true, and you do not specify a value
     * for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key identifier for an encrypted DB instance.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key.</p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The KMS key identifier is managed by the DB cluster. For
     * more information, see <a>CreateDBCluster</a>.</p> <p>If the
     * <code>StorageEncrypted</code> parameter is true, and you do not specify a value
     * for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline CreateDBInstanceRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier for an encrypted DB instance.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key.</p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The KMS key identifier is managed by the DB cluster. For
     * more information, see <a>CreateDBCluster</a>.</p> <p>If the
     * <code>StorageEncrypted</code> parameter is true, and you do not specify a value
     * for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline CreateDBInstanceRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key identifier for an encrypted DB instance.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB instance with the same AWS account that owns the KMS
     * encryption key used to encrypt the new DB instance, then you can use the KMS key
     * alias instead of the ARN for the KM encryption key.</p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The KMS key identifier is managed by the DB cluster. For
     * more information, see <a>CreateDBCluster</a>.</p> <p>If the
     * <code>StorageEncrypted</code> parameter is true, and you do not specify a value
     * for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS Region.</p>
     */
    inline CreateDBInstanceRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Specify the Active Directory Domain to create the instance in.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>Specify the Active Directory Domain to create the instance in.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Specify the Active Directory Domain to create the instance in.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>Specify the Active Directory Domain to create the instance in.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>Specify the Active Directory Domain to create the instance in.</p>
     */
    inline CreateDBInstanceRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>Specify the Active Directory Domain to create the instance in.</p>
     */
    inline CreateDBInstanceRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>Specify the Active Directory Domain to create the instance in.</p>
     */
    inline CreateDBInstanceRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>True to copy all tags from the DB instance to snapshots of the DB instance;
     * otherwise false. The default is false.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>True to copy all tags from the DB instance to snapshots of the DB instance;
     * otherwise false. The default is false.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>True to copy all tags from the DB instance to snapshots of the DB instance;
     * otherwise false. The default is false.</p>
     */
    inline CreateDBInstanceRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline CreateDBInstanceRequest& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}


    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline CreateDBInstanceRequest& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline CreateDBInstanceRequest& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.OS.html#USER_Monitoring.OS.Enabling">Setting
     * Up and Enabling Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline CreateDBInstanceRequest& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}


    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const{ return m_domainIAMRoleName; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::move(value); }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(const char* value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName.assign(value); }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline CreateDBInstanceRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline CreateDBInstanceRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline CreateDBInstanceRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}


    /**
     * <p>A value that specifies the order in which an Aurora Replica is promoted to
     * the primary instance after a failure of the existing primary instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Aurora.Managing.html#Aurora.Managing.FaultTolerance">
     * Fault Tolerance for an Aurora DB Cluster</a>. </p> <p>Default: 1</p> <p>Valid
     * Values: 0 - 15</p>
     */
    inline int GetPromotionTier() const{ return m_promotionTier; }

    /**
     * <p>A value that specifies the order in which an Aurora Replica is promoted to
     * the primary instance after a failure of the existing primary instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Aurora.Managing.html#Aurora.Managing.FaultTolerance">
     * Fault Tolerance for an Aurora DB Cluster</a>. </p> <p>Default: 1</p> <p>Valid
     * Values: 0 - 15</p>
     */
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }

    /**
     * <p>A value that specifies the order in which an Aurora Replica is promoted to
     * the primary instance after a failure of the existing primary instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Aurora.Managing.html#Aurora.Managing.FaultTolerance">
     * Fault Tolerance for an Aurora DB Cluster</a>. </p> <p>Default: 1</p> <p>Valid
     * Values: 0 - 15</p>
     */
    inline CreateDBInstanceRequest& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}


    /**
     * <p>The time zone of the DB instance. The time zone parameter is currently
     * supported only by <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.TimeZone">Microsoft
     * SQL Server</a>. </p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The time zone of the DB instance. The time zone parameter is currently
     * supported only by <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.TimeZone">Microsoft
     * SQL Server</a>. </p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The time zone of the DB instance. The time zone parameter is currently
     * supported only by <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.TimeZone">Microsoft
     * SQL Server</a>. </p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }

    /**
     * <p>The time zone of the DB instance. The time zone parameter is currently
     * supported only by <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.TimeZone">Microsoft
     * SQL Server</a>. </p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The time zone of the DB instance. The time zone parameter is currently
     * supported only by <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.TimeZone">Microsoft
     * SQL Server</a>. </p>
     */
    inline CreateDBInstanceRequest& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The time zone of the DB instance. The time zone parameter is currently
     * supported only by <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.TimeZone">Microsoft
     * SQL Server</a>. </p>
     */
    inline CreateDBInstanceRequest& WithTimezone(Aws::String&& value) { SetTimezone(std::move(value)); return *this;}

    /**
     * <p>The time zone of the DB instance. The time zone parameter is currently
     * supported only by <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_SQLServer.html#SQLServer.Concepts.General.TimeZone">Microsoft
     * SQL Server</a>. </p>
     */
    inline CreateDBInstanceRequest& WithTimezone(const char* value) { SetTimezone(value); return *this;}


    /**
     * <p>True to enable mapping of AWS Identity and Access Management (IAM) accounts
     * to database accounts; otherwise false. </p> <p> You can enable IAM database
     * authentication for the following database engines:</p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. Mapping AWS IAM accounts to database accounts is managed
     * by the DB cluster. For more information, see <a>CreateDBCluster</a>.</p> <p>
     * <b>MySQL</b> </p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or higher</p>
     * </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li> </ul>
     * <p>Default: <code>false</code> </p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>True to enable mapping of AWS Identity and Access Management (IAM) accounts
     * to database accounts; otherwise false. </p> <p> You can enable IAM database
     * authentication for the following database engines:</p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. Mapping AWS IAM accounts to database accounts is managed
     * by the DB cluster. For more information, see <a>CreateDBCluster</a>.</p> <p>
     * <b>MySQL</b> </p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or higher</p>
     * </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li> </ul>
     * <p>Default: <code>false</code> </p>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>True to enable mapping of AWS Identity and Access Management (IAM) accounts
     * to database accounts; otherwise false. </p> <p> You can enable IAM database
     * authentication for the following database engines:</p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. Mapping AWS IAM accounts to database accounts is managed
     * by the DB cluster. For more information, see <a>CreateDBCluster</a>.</p> <p>
     * <b>MySQL</b> </p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or higher</p>
     * </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li> </ul>
     * <p>Default: <code>false</code> </p>
     */
    inline CreateDBInstanceRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    
    inline bool GetEnablePerformanceInsights() const{ return m_enablePerformanceInsights; }

    
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }

    
    inline CreateDBInstanceRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}


    
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }

    
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }

    
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }

    
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }

    
    inline CreateDBInstanceRequest& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}

    
    inline CreateDBInstanceRequest& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}

    
    inline CreateDBInstanceRequest& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}

  private:

    Aws::String m_dBName;
    bool m_dBNameHasBeenSet;

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet;

    Aws::Vector<Aws::String> m_dBSecurityGroups;
    bool m_dBSecurityGroupsHasBeenSet;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet;

    Aws::String m_tdeCredentialPassword;
    bool m_tdeCredentialPasswordHasBeenSet;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet;

    int m_promotionTier;
    bool m_promotionTierHasBeenSet;

    Aws::String m_timezone;
    bool m_timezoneHasBeenSet;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet;

    bool m_enablePerformanceInsights;
    bool m_enablePerformanceInsightsHasBeenSet;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
