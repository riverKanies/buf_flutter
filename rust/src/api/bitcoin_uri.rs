use flutter_rust_bridge::frb;

use crate::frb_generated::RustOpaque;


#[derive(Clone)]
pub struct FfiBufUri(pub RustOpaque<bitcoin_uri_ffi::uri::Uri>);

impl From<bitcoin_uri_ffi::uri::Uri> for FfiBufUri {
    fn from(value: bitcoin_uri_ffi::uri::Uri) -> Self {
        Self(RustOpaque::new(value))
    }
}

impl From<FfiBufUri> for bitcoin_uri_ffi::uri::Uri {
    fn from(value: FfiBufUri) -> Self {
        (*value.0).clone()
    }
}

impl FfiBufUri {
    #[frb(sync)]
    pub fn parse(uri: String) -> Result<Self, String> {
        match bitcoin_uri_ffi::uri::Uri::parse(uri) {
            Ok(e) => Ok(e.into()),
            Err(e) => Err(e.to_string()),
        }
    }

    #[frb(sync)]
    pub fn address(&self) -> String {
        self.0.address()
    }

    #[frb(sync)]
    pub fn amount_sats(&self) -> Option<u64> {
        self.0.amount_sats()
    }

    #[frb(sync)]
    pub fn label(&self) -> Option<String> {
        self.0.label()
    }

    #[frb(sync)]
    pub fn message(&self) -> Option<String> {
        self.0.message()
    }

    #[frb(sync)]
    pub fn as_string(&self) -> String {
        self.0.as_string()
    }
}