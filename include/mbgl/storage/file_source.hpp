#ifndef MBGL_STORAGE_FILE_SOURCE
#define MBGL_STORAGE_FILE_SOURCE

#include <mbgl/util/noncopyable.hpp>
#include <mbgl/storage/resource_type.hpp>
#include <mbgl/storage/request.hpp>

#include <string>
#include <functional>

namespace mbgl {

class FileSource : public util::noncopyable {
public:
    virtual void setBase(const std::string &value) = 0;
    virtual std::unique_ptr<Request> request(ResourceType type, const std::string &url) = 0;
    virtual void prepare(std::function<void()> fn) = 0;
    virtual void retryAllPending() = 0;
    virtual void reset() = 0;
};

}

#endif
