﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/model/TimeToLiveStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace TimeToLiveStatusMapper
      {

        static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
        static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        TimeToLiveStatus GetTimeToLiveStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLING_HASH)
          {
            return TimeToLiveStatus::ENABLING;
          }
          else if (hashCode == DISABLING_HASH)
          {
            return TimeToLiveStatus::DISABLING;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return TimeToLiveStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return TimeToLiveStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimeToLiveStatus>(hashCode);
          }

          return TimeToLiveStatus::NOT_SET;
        }

        Aws::String GetNameForTimeToLiveStatus(TimeToLiveStatus enumValue)
        {
          switch(enumValue)
          {
          case TimeToLiveStatus::ENABLING:
            return "ENABLING";
          case TimeToLiveStatus::DISABLING:
            return "DISABLING";
          case TimeToLiveStatus::ENABLED:
            return "ENABLED";
          case TimeToLiveStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace TimeToLiveStatusMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
