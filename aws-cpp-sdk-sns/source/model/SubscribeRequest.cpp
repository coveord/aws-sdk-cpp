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
#include <aws/sns/model/SubscribeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

SubscribeRequest::SubscribeRequest() : 
    m_topicArnHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_endpointHasBeenSet(false)
{
}

Aws::String SubscribeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=Subscribe&";
  if(m_topicArnHasBeenSet)
  {
    ss << "TopicArn=" << StringUtils::URLEncode(m_topicArn.c_str()) << "&";
  }

  if(m_protocolHasBeenSet)
  {
    ss << "Protocol=" << StringUtils::URLEncode(m_protocol.c_str()) << "&";
  }

  if(m_endpointHasBeenSet)
  {
    ss << "Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}

