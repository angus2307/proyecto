from setuptools import find_packages, setup

package_name = 'ejecutable'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='angelzambrano',
    maintainer_email='anguzamb@espol.edu.ec',
    description='Nodos de sectores y planta',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'sectorA = ejecutable.sectorA:main',
            'sectorB = ejecutable.sectorB:main',
            'sectorC = ejecutable.sectorC:main',
            'planta = ejecutable.planta:main',
        ],
    },
)

