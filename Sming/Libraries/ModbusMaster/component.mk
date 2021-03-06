COMPONENT_SUBMODULES := ModbusMaster
COMPONENT_SRCDIRS := ModbusMaster/src
COMPONENT_INCDIRS := ModbusMaster/src

# Configurable Modbus response timeout
COMPONENT_VARS += MB_RESPONSE_TIMEOUT
MB_RESPONSE_TIMEOUT ?= 300
COMPONENT_CXXFLAGS := -DMB_RESPONSE_TIMEOUT=$(MB_RESPONSE_TIMEOUT)
