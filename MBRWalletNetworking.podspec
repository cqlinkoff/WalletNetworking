
Pod::Spec.new do |s|

  s.name         = "MBRWalletNetworking"
  s.version      = "0.0.3"
  s.summary      = "网络请求封装."
  s.description  = <<-DESC 
  								为支付等功能提供网络功能.
                   DESC

  s.homepage     = "https://github.com/cqmbr/MBRWalletNetworking"
  s.license      = { :type => "Copyright", :text => "LICENSE Copyright 2017 - 2018 cqmbr.net, Inc. All rights reserved." }
  s.author       = { "cqmbr" => "250153903@qq.com" }
  s.platform     = :ios, "9.0"
  s.source       = { :git => "https://github.com/cqmbr/MBRWalletNetworking.git", :tag => "#{s.version}" }

  s.dependency 'MJExtension'
  s.dependency 'YYCategories'
  s.dependency 'AFNetworking'

  s.vendored_frameworks = "#{s.name}.framework"

end
