#ifndef _THOTH_DOUBLE_H_
#define _THOTH_DOUBLE_H_

#include "integer.h"

namespace thoth {
    class Double : public Integer {
        int power;

        public:
            Double();
            Double(std::string data);

            bool operator<(const Double &second)   const;
            bool operator<=(const Double &second)  const;
            bool operator>(const Double &second)    const;
            bool operator>=(const Double &second)  const;
            bool operator==(const Double &second)   const;
            bool operator!=(const Double &second)  const;

            std::string toString() const;
    };
};

#endif