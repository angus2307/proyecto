#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "planta_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planta_interfaces__srv__ObtenerSectores_Request() -> *const std::ffi::c_void;
}

#[link(name = "planta_interfaces__rosidl_generator_c")]
extern "C" {
    fn planta_interfaces__srv__ObtenerSectores_Request__init(msg: *mut ObtenerSectores_Request) -> bool;
    fn planta_interfaces__srv__ObtenerSectores_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ObtenerSectores_Request>, size: usize) -> bool;
    fn planta_interfaces__srv__ObtenerSectores_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ObtenerSectores_Request>);
    fn planta_interfaces__srv__ObtenerSectores_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ObtenerSectores_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ObtenerSectores_Request>) -> bool;
}

// Corresponds to planta_interfaces__srv__ObtenerSectores_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObtenerSectores_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for ObtenerSectores_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planta_interfaces__srv__ObtenerSectores_Request__init(&mut msg as *mut _) {
        panic!("Call to planta_interfaces__srv__ObtenerSectores_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ObtenerSectores_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planta_interfaces__srv__ObtenerSectores_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planta_interfaces__srv__ObtenerSectores_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planta_interfaces__srv__ObtenerSectores_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ObtenerSectores_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ObtenerSectores_Request where Self: Sized {
  const TYPE_NAME: &'static str = "planta_interfaces/srv/ObtenerSectores_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planta_interfaces__srv__ObtenerSectores_Request() }
  }
}


#[link(name = "planta_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planta_interfaces__srv__ObtenerSectores_Response() -> *const std::ffi::c_void;
}

#[link(name = "planta_interfaces__rosidl_generator_c")]
extern "C" {
    fn planta_interfaces__srv__ObtenerSectores_Response__init(msg: *mut ObtenerSectores_Response) -> bool;
    fn planta_interfaces__srv__ObtenerSectores_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ObtenerSectores_Response>, size: usize) -> bool;
    fn planta_interfaces__srv__ObtenerSectores_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ObtenerSectores_Response>);
    fn planta_interfaces__srv__ObtenerSectores_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ObtenerSectores_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ObtenerSectores_Response>) -> bool;
}

// Corresponds to planta_interfaces__srv__ObtenerSectores_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObtenerSectores_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub exito: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lineas: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for ObtenerSectores_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planta_interfaces__srv__ObtenerSectores_Response__init(&mut msg as *mut _) {
        panic!("Call to planta_interfaces__srv__ObtenerSectores_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ObtenerSectores_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planta_interfaces__srv__ObtenerSectores_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planta_interfaces__srv__ObtenerSectores_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planta_interfaces__srv__ObtenerSectores_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ObtenerSectores_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ObtenerSectores_Response where Self: Sized {
  const TYPE_NAME: &'static str = "planta_interfaces/srv/ObtenerSectores_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planta_interfaces__srv__ObtenerSectores_Response() }
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


