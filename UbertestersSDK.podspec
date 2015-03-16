Pod::Spec.new do |s|
  s.name         = "Ubertesters"
  s.version      = "2.0.3"
  s.summary      = "Mobile beta testing solution"
  s.homepage     = "https://github.com/sciutand/UbertestersSDK"

  s.license      = {:type => 'MIT', :file => 'LICENSE'}
  s.author       = {"Andrea Sciutto" => "sciutand@gmail.com"}

  s.platform     = :ios, "6.0"

  s.source       = {:git => "https://github.com/sciutand/UbertestersSDK.git", :tag => "2.0.3"}

  s.source_files = "UbertestersSDK.framework/Versions/A/Headers/*.h"
  s.vendored_frameworks = "UbertestersSDK.framework"

  s.frameworks = "AdSupport", "QuartzCore", "CoreImage", "SystemConfiguration", "CoreTelephony", "CoreLocation", "AudioToolbox", "OpenGLES", "CoreMotion"

  s.requires_arc = true
end
