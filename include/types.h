/* 
 * File:   types.h
 * Author: vlad
 *
 * Created on December 12, 2013, 10:41 PM
 */

#ifndef TYPES_H_
#define	TYPES_H_

#include <Eigen/Dense>
#include <complex>

namespace qpp {

    namespace types {
        // typedefs
        typedef std::complex<double> cplx; // complex number double precision

        // complex matrix
        typedef Eigen::MatrixXcd cmat; // dynamic-size

        // double matrix
        typedef Eigen::MatrixXd dmat; // dynamic-size

        // float matrix
        typedef Eigen::MatrixXf fmat; // dynamic-size

        // integer matrix
        typedef Eigen::MatrixXi imat; // dynamic-size

        template<typename Expression>
        using Expression2Matrix =
        Eigen::Matrix<typename Expression::Scalar, Eigen::Dynamic, Eigen::Dynamic>;

        template<typename Scalar>
        using ScalarEigenMatrix = Eigen::Matrix<Scalar, Eigen::Dynamic, Eigen::Dynamic>;

    }
}

#endif	/* TYPES_H_ */

