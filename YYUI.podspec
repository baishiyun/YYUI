

Pod::Spec.new do |s|
s.name         = "YYUI"
s.version      = "0.0.1"
s.ios.deployment_target = '7.0'
s.summary      = "A delightful setting interface framework."
s.homepage     = "https://github.com/baishiyun/YYUI"
s.license              = { :type => "MIT", :file => "LICENSE" }
s.author             = { "baishiyun" => "baishiyun@163.com" }
s.source       = { :git => "https://github.com/baishiyun/YYUI.git", :tag => s.version }
s.source_files  = "YYUI", "YYUI/**/*.{h,m}"
s.requires_arc = true
end

