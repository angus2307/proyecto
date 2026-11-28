#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to planta_interfaces__srv__ObtenerSectores_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObtenerSectores_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ObtenerSectores_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ObtenerSectores_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ObtenerSectores_Request {
  type RmwMsg = super::srv::rmw::ObtenerSectores_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to planta_interfaces__srv__ObtenerSectores_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObtenerSectores_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub exito: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lineas: Vec<std::string::String>,

}



impl Default for ObtenerSectores_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ObtenerSectores_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ObtenerSectores_Response {
  type RmwMsg = super::srv::rmw::ObtenerSectores_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        exito: msg.exito,
        lineas: msg.lineas
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      exito: msg.exito,
        lineas: msg.lineas
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      exito: msg.exito,
      lineas: msg.lineas
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}






#[link(name = "planta_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__planta_interfaces__srv__ObtenerSectores() -> *const std::ffi::c_void;
}

// Corresponds to planta_interfaces__srv__ObtenerSectores
#[allow(missing_docs, non_camel_case_types)]
pub struct ObtenerSectores;

impl rosidl_runtime_rs::Service for ObtenerSectores {
    type Request = ObtenerSectores_Request;
    type Response = ObtenerSectores_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__planta_interfaces__srv__ObtenerSectores() }
    }
}


