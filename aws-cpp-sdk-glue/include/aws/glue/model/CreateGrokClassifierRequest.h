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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a Grok classifier for CreateClassifier to create.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateGrokClassifierRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API CreateGrokClassifierRequest
  {
  public:
    CreateGrokClassifierRequest();
    CreateGrokClassifierRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    CreateGrokClassifierRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of result that the classifier matches, such as Twitter Json,
     * Omniture logs, Cloudwatch logs, and so forth.</p>
     */
    inline const Aws::String& GetClassification() const{ return m_classification; }

    /**
     * <p>The type of result that the classifier matches, such as Twitter Json,
     * Omniture logs, Cloudwatch logs, and so forth.</p>
     */
    inline void SetClassification(const Aws::String& value) { m_classificationHasBeenSet = true; m_classification = value; }

    /**
     * <p>The type of result that the classifier matches, such as Twitter Json,
     * Omniture logs, Cloudwatch logs, and so forth.</p>
     */
    inline void SetClassification(Aws::String&& value) { m_classificationHasBeenSet = true; m_classification = std::move(value); }

    /**
     * <p>The type of result that the classifier matches, such as Twitter Json,
     * Omniture logs, Cloudwatch logs, and so forth.</p>
     */
    inline void SetClassification(const char* value) { m_classificationHasBeenSet = true; m_classification.assign(value); }

    /**
     * <p>The type of result that the classifier matches, such as Twitter Json,
     * Omniture logs, Cloudwatch logs, and so forth.</p>
     */
    inline CreateGrokClassifierRequest& WithClassification(const Aws::String& value) { SetClassification(value); return *this;}

    /**
     * <p>The type of result that the classifier matches, such as Twitter Json,
     * Omniture logs, Cloudwatch logs, and so forth.</p>
     */
    inline CreateGrokClassifierRequest& WithClassification(Aws::String&& value) { SetClassification(std::move(value)); return *this;}

    /**
     * <p>The type of result that the classifier matches, such as Twitter Json,
     * Omniture logs, Cloudwatch logs, and so forth.</p>
     */
    inline CreateGrokClassifierRequest& WithClassification(const char* value) { SetClassification(value); return *this;}


    /**
     * <p>The name of the new Classifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the new Classifier.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the new Classifier.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the new Classifier.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the new Classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the new Classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the new Classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The grok pattern used by this classifier.</p>
     */
    inline const Aws::String& GetGrokPattern() const{ return m_grokPattern; }

    /**
     * <p>The grok pattern used by this classifier.</p>
     */
    inline void SetGrokPattern(const Aws::String& value) { m_grokPatternHasBeenSet = true; m_grokPattern = value; }

    /**
     * <p>The grok pattern used by this classifier.</p>
     */
    inline void SetGrokPattern(Aws::String&& value) { m_grokPatternHasBeenSet = true; m_grokPattern = std::move(value); }

    /**
     * <p>The grok pattern used by this classifier.</p>
     */
    inline void SetGrokPattern(const char* value) { m_grokPatternHasBeenSet = true; m_grokPattern.assign(value); }

    /**
     * <p>The grok pattern used by this classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithGrokPattern(const Aws::String& value) { SetGrokPattern(value); return *this;}

    /**
     * <p>The grok pattern used by this classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithGrokPattern(Aws::String&& value) { SetGrokPattern(std::move(value)); return *this;}

    /**
     * <p>The grok pattern used by this classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithGrokPattern(const char* value) { SetGrokPattern(value); return *this;}


    /**
     * <p>Custom grok patterns used by this classifier.</p>
     */
    inline const Aws::String& GetCustomPatterns() const{ return m_customPatterns; }

    /**
     * <p>Custom grok patterns used by this classifier.</p>
     */
    inline void SetCustomPatterns(const Aws::String& value) { m_customPatternsHasBeenSet = true; m_customPatterns = value; }

    /**
     * <p>Custom grok patterns used by this classifier.</p>
     */
    inline void SetCustomPatterns(Aws::String&& value) { m_customPatternsHasBeenSet = true; m_customPatterns = std::move(value); }

    /**
     * <p>Custom grok patterns used by this classifier.</p>
     */
    inline void SetCustomPatterns(const char* value) { m_customPatternsHasBeenSet = true; m_customPatterns.assign(value); }

    /**
     * <p>Custom grok patterns used by this classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithCustomPatterns(const Aws::String& value) { SetCustomPatterns(value); return *this;}

    /**
     * <p>Custom grok patterns used by this classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithCustomPatterns(Aws::String&& value) { SetCustomPatterns(std::move(value)); return *this;}

    /**
     * <p>Custom grok patterns used by this classifier.</p>
     */
    inline CreateGrokClassifierRequest& WithCustomPatterns(const char* value) { SetCustomPatterns(value); return *this;}

  private:

    Aws::String m_classification;
    bool m_classificationHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_grokPattern;
    bool m_grokPatternHasBeenSet;

    Aws::String m_customPatterns;
    bool m_customPatternsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
