// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALIYUNAPE20210908_H_
#define ALIBABACLOUD_ALIYUNAPE20210908_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Aliyunape20210908 {
class ApeInnerCommonApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> channel{};
  shared_ptr<string> endTime{};
  shared_ptr<string> lat{};
  shared_ptr<string> lon{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> spCode{};
  shared_ptr<string> startTime{};
  shared_ptr<string> station{};

  ApeInnerCommonApiRequest() {}

  explicit ApeInnerCommonApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lat) {
      res["Lat"] = boost::any(*lat);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (spCode) {
      res["SpCode"] = boost::any(*spCode);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (station) {
      res["Station"] = boost::any(*station);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Lat") != m.end() && !m["Lat"].empty()) {
      lat = make_shared<string>(boost::any_cast<string>(m["Lat"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<string>(boost::any_cast<string>(m["Lon"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SpCode") != m.end() && !m["SpCode"].empty()) {
      spCode = make_shared<string>(boost::any_cast<string>(m["SpCode"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Station") != m.end() && !m["Station"].empty()) {
      station = make_shared<string>(boost::any_cast<string>(m["Station"]));
    }
  }


  virtual ~ApeInnerCommonApiRequest() = default;
};
class ApeInnerCommonApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> rt{};
  shared_ptr<bool> success{};

  ApeInnerCommonApiResponseBody() {}

  explicit ApeInnerCommonApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rt) {
      res["Rt"] = boost::any(*rt);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rt") != m.end() && !m["Rt"].empty()) {
      rt = make_shared<long>(boost::any_cast<long>(m["Rt"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ApeInnerCommonApiResponseBody() = default;
};
class ApeInnerCommonApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ApeInnerCommonApiResponseBody> body{};

  ApeInnerCommonApiResponse() {}

  explicit ApeInnerCommonApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ApeInnerCommonApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApeInnerCommonApiResponseBody>(model1);
      }
    }
  }


  virtual ~ApeInnerCommonApiResponse() = default;
};
class ApeProvinceStationRefRequest : public Darabonba::Model {
public:
  shared_ptr<long> adcode{};
  shared_ptr<string> appName{};
  shared_ptr<string> city{};
  shared_ptr<string> cnty{};
  shared_ptr<string> country{};
  shared_ptr<long> offset{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> provinceCode{};
  shared_ptr<string> provinceName{};
  shared_ptr<string> stationName{};

  ApeProvinceStationRefRequest() {}

  explicit ApeProvinceStationRefRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adcode) {
      res["Adcode"] = boost::any(*adcode);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (cnty) {
      res["Cnty"] = boost::any(*cnty);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (provinceCode) {
      res["ProvinceCode"] = boost::any(*provinceCode);
    }
    if (provinceName) {
      res["ProvinceName"] = boost::any(*provinceName);
    }
    if (stationName) {
      res["StationName"] = boost::any(*stationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Adcode") != m.end() && !m["Adcode"].empty()) {
      adcode = make_shared<long>(boost::any_cast<long>(m["Adcode"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Cnty") != m.end() && !m["Cnty"].empty()) {
      cnty = make_shared<string>(boost::any_cast<string>(m["Cnty"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProvinceCode") != m.end() && !m["ProvinceCode"].empty()) {
      provinceCode = make_shared<long>(boost::any_cast<long>(m["ProvinceCode"]));
    }
    if (m.find("ProvinceName") != m.end() && !m["ProvinceName"].empty()) {
      provinceName = make_shared<string>(boost::any_cast<string>(m["ProvinceName"]));
    }
    if (m.find("StationName") != m.end() && !m["StationName"].empty()) {
      stationName = make_shared<string>(boost::any_cast<string>(m["StationName"]));
    }
  }


  virtual ~ApeProvinceStationRefRequest() = default;
};
class ApeProvinceStationRefResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> rt{};
  shared_ptr<bool> success{};

  ApeProvinceStationRefResponseBody() {}

  explicit ApeProvinceStationRefResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rt) {
      res["Rt"] = boost::any(*rt);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rt") != m.end() && !m["Rt"].empty()) {
      rt = make_shared<long>(boost::any_cast<long>(m["Rt"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ApeProvinceStationRefResponseBody() = default;
};
class ApeProvinceStationRefResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ApeProvinceStationRefResponseBody> body{};

  ApeProvinceStationRefResponse() {}

  explicit ApeProvinceStationRefResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ApeProvinceStationRefResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApeProvinceStationRefResponseBody>(model1);
      }
    }
  }


  virtual ~ApeProvinceStationRefResponse() = default;
};
class HistoricalRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> orderId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<string> station{};

  HistoricalRequest() {}

  explicit HistoricalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (station) {
      res["Station"] = boost::any(*station);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Station") != m.end() && !m["Station"].empty()) {
      station = make_shared<string>(boost::any_cast<string>(m["Station"]));
    }
  }


  virtual ~HistoricalRequest() = default;
};
class HistoricalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> rt{};
  shared_ptr<bool> success{};

  HistoricalResponseBody() {}

  explicit HistoricalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rt) {
      res["Rt"] = boost::any(*rt);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rt") != m.end() && !m["Rt"].empty()) {
      rt = make_shared<long>(boost::any_cast<long>(m["Rt"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~HistoricalResponseBody() = default;
};
class HistoricalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<HistoricalResponseBody> body{};

  HistoricalResponse() {}

  explicit HistoricalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        HistoricalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HistoricalResponseBody>(model1);
      }
    }
  }


  virtual ~HistoricalResponse() = default;
};
class StationDayRequest : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> startForecast{};
  shared_ptr<string> station{};

  StationDayRequest() {}

  explicit StationDayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (startForecast) {
      res["StartForecast"] = boost::any(*startForecast);
    }
    if (station) {
      res["Station"] = boost::any(*station);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("StartForecast") != m.end() && !m["StartForecast"].empty()) {
      startForecast = make_shared<string>(boost::any_cast<string>(m["StartForecast"]));
    }
    if (m.find("Station") != m.end() && !m["Station"].empty()) {
      station = make_shared<string>(boost::any_cast<string>(m["Station"]));
    }
  }


  virtual ~StationDayRequest() = default;
};
class StationDayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> rt{};
  shared_ptr<bool> success{};

  StationDayResponseBody() {}

  explicit StationDayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rt) {
      res["Rt"] = boost::any(*rt);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rt") != m.end() && !m["Rt"].empty()) {
      rt = make_shared<long>(boost::any_cast<long>(m["Rt"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StationDayResponseBody() = default;
};
class StationDayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StationDayResponseBody> body{};

  StationDayResponse() {}

  explicit StationDayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StationDayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StationDayResponseBody>(model1);
      }
    }
  }


  virtual ~StationDayResponse() = default;
};
class WeatherforecastRequest : public Darabonba::Model {
public:
  shared_ptr<string> lat{};
  shared_ptr<string> lon{};
  shared_ptr<string> orderId{};
  shared_ptr<string> startForecast{};

  WeatherforecastRequest() {}

  explicit WeatherforecastRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lat) {
      res["Lat"] = boost::any(*lat);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (startForecast) {
      res["StartForecast"] = boost::any(*startForecast);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lat") != m.end() && !m["Lat"].empty()) {
      lat = make_shared<string>(boost::any_cast<string>(m["Lat"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<string>(boost::any_cast<string>(m["Lon"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("StartForecast") != m.end() && !m["StartForecast"].empty()) {
      startForecast = make_shared<string>(boost::any_cast<string>(m["StartForecast"]));
    }
  }


  virtual ~WeatherforecastRequest() = default;
};
class WeatherforecastResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> rt{};
  shared_ptr<bool> success{};

  WeatherforecastResponseBody() {}

  explicit WeatherforecastResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rt) {
      res["Rt"] = boost::any(*rt);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rt") != m.end() && !m["Rt"].empty()) {
      rt = make_shared<long>(boost::any_cast<long>(m["Rt"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~WeatherforecastResponseBody() = default;
};
class WeatherforecastResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<WeatherforecastResponseBody> body{};

  WeatherforecastResponse() {}

  explicit WeatherforecastResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        WeatherforecastResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<WeatherforecastResponseBody>(model1);
      }
    }
  }


  virtual ~WeatherforecastResponse() = default;
};
class WeatherforecastTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> curHour{};
  shared_ptr<string> lat{};
  shared_ptr<string> lon{};
  shared_ptr<string> orderId{};

  WeatherforecastTimeRequest() {}

  explicit WeatherforecastTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (curHour) {
      res["CurHour"] = boost::any(*curHour);
    }
    if (lat) {
      res["Lat"] = boost::any(*lat);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurHour") != m.end() && !m["CurHour"].empty()) {
      curHour = make_shared<string>(boost::any_cast<string>(m["CurHour"]));
    }
    if (m.find("Lat") != m.end() && !m["Lat"].empty()) {
      lat = make_shared<string>(boost::any_cast<string>(m["Lat"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<string>(boost::any_cast<string>(m["Lon"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~WeatherforecastTimeRequest() = default;
};
class WeatherforecastTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> rt{};
  shared_ptr<bool> success{};

  WeatherforecastTimeResponseBody() {}

  explicit WeatherforecastTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rt) {
      res["Rt"] = boost::any(*rt);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rt") != m.end() && !m["Rt"].empty()) {
      rt = make_shared<long>(boost::any_cast<long>(m["Rt"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~WeatherforecastTimeResponseBody() = default;
};
class WeatherforecastTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<WeatherforecastTimeResponseBody> body{};

  WeatherforecastTimeResponse() {}

  explicit WeatherforecastTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        WeatherforecastTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<WeatherforecastTimeResponseBody>(model1);
      }
    }
  }


  virtual ~WeatherforecastTimeResponse() = default;
};
class WeathermonitorRequest : public Darabonba::Model {
public:
  shared_ptr<string> curHour{};
  shared_ptr<string> orderId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  WeathermonitorRequest() {}

  explicit WeathermonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (curHour) {
      res["CurHour"] = boost::any(*curHour);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurHour") != m.end() && !m["CurHour"].empty()) {
      curHour = make_shared<string>(boost::any_cast<string>(m["CurHour"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~WeathermonitorRequest() = default;
};
class WeathermonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> rt{};
  shared_ptr<bool> success{};

  WeathermonitorResponseBody() {}

  explicit WeathermonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rt) {
      res["Rt"] = boost::any(*rt);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rt") != m.end() && !m["Rt"].empty()) {
      rt = make_shared<long>(boost::any_cast<long>(m["Rt"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~WeathermonitorResponseBody() = default;
};
class WeathermonitorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<WeathermonitorResponseBody> body{};

  WeathermonitorResponse() {}

  explicit WeathermonitorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        WeathermonitorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<WeathermonitorResponseBody>(model1);
      }
    }
  }


  virtual ~WeathermonitorResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  ApeInnerCommonApiResponse apeInnerCommonApiWithOptions(shared_ptr<ApeInnerCommonApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApeInnerCommonApiResponse apeInnerCommonApi(shared_ptr<ApeInnerCommonApiRequest> request);
  ApeProvinceStationRefResponse apeProvinceStationRefWithOptions(shared_ptr<ApeProvinceStationRefRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApeProvinceStationRefResponse apeProvinceStationRef(shared_ptr<ApeProvinceStationRefRequest> request);
  HistoricalResponse historicalWithOptions(shared_ptr<HistoricalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HistoricalResponse historical(shared_ptr<HistoricalRequest> request);
  StationDayResponse stationDayWithOptions(shared_ptr<StationDayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StationDayResponse stationDay(shared_ptr<StationDayRequest> request);
  WeatherforecastResponse weatherforecastWithOptions(shared_ptr<WeatherforecastRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WeatherforecastResponse weatherforecast(shared_ptr<WeatherforecastRequest> request);
  WeatherforecastTimeResponse weatherforecastTimeWithOptions(shared_ptr<WeatherforecastTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WeatherforecastTimeResponse weatherforecastTime(shared_ptr<WeatherforecastTimeRequest> request);
  WeathermonitorResponse weathermonitorWithOptions(shared_ptr<WeathermonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WeathermonitorResponse weathermonitor(shared_ptr<WeathermonitorRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Aliyunape20210908

#endif
