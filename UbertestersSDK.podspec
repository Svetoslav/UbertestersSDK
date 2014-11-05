Pod::Spec.new do |s|
  s.name         = "UbertestersSDK"
  s.version      = "2.0.2"
  s.summary      = "Mobile beta testing solution"
  s.homepage     = "http://github.com/vavaka/UbertestersSDK"

  s.license      = {:type => 'MIT', :file => 'LICENSE'}
  s.author       = {"Vladimir Kuznetsov" => "vavaka.work@gmail.com"}

  s.platform     = :ios, "6.0"

  s.source       = {:git => "https://github.com/vavaka/UbertestersSDK.git", :tag => "2.0.2"}

  s.public_header_files = "UbertestersSDK.framework/Versions/A/Headers/*.h"

  s.vendored_frameworks = "UbertestersSDK"

  s.frameworks = "AdSupport", "QuartzCore", "CoreImage", "SystemConfiguration", "CoreTelephony", "CoreLocation", "AudioToolbox", "OpenGLES", "CoreMotion"

  s.requires_arc = true
end
