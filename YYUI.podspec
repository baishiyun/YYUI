

Pod::Spec.new do |spec|
spec.name         = 'YYUI'
spec.version      = '0.0.1'
spec.license      = { :type => 'MIT', :file => 'LICENSE' }
spec.homepage     = 'https://github.com/baishiyun/YYUI'
spec.authors      = { 'baishiyun' => 'baishiyun@163.com' }
spec.summary      = 'An iOS UIKIT'
spec.source       = { :git => 'https://github.com/baishiyun/YYUI.git', :tag => '0.0.1' }
spec.source_files = 'YYUI/**/*'
spec.framework    = 'UIKit'
spec.ios.deployment_target  = '7.0'
spec.ios.framework  = 'UIKit'
end

