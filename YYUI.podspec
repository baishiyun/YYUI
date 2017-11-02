Pod::Spec.new do |s|
  s.name         = "YYUI"
  s.version      = “0.0.1”
  s.summary      = “UIKit for ios."
  s.homepage     = "https://github.com/baishiyun/YYUI"
  s.license      = "MIT"
  s.author             = { “ShiYun Bai” => “baishiyun@163.com" }
  s.platform     = :ios, “7.0”
  s.source       = { :git => "https://github.com/baishiyun/YYUI.git", :tag => “0.0.1” }
  s.source_files  = "YYUI", "YYUI/**/*.{h,m}"
  s.framework  = "UIKit"
  spec.requires_arc = true
end