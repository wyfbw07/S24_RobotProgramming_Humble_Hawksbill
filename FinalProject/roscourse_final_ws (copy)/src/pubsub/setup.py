from setuptools import setup

package_name = 'pubsub'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yahboom',
    maintainer_email='calcaa@rpi.edu',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'final_pub = pubsub.final_pub:main',
        'final_sub = pubsub.final_sub:main',
        'test_pub = pubsub.test_pub:main',
        'square_movement = pubsub.square_movement:main',
        ],
    },
)
