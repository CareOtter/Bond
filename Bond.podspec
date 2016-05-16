#
# Be sure to run `pod lib lint Bond.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "Bond"
  s.version          = "1.0.0"
  s.summary          = "The header-only bond cpp library, exposed through a cocoapod"

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
The header-only bond cpp library, exposed through a cocoapod.  Created to support the bond serialization objective c library for CareOtter
                       DESC

  s.homepage         = "https://github.com/CareOtter/Bond"
  # s.screenshots     = "www.example.com/screenshots_1", "www.example.com/screenshots_2"
  s.license          = 'MIT'
  s.author           = { "Scott Mueller" => "scott.mueller@careotter.com" }
  s.source           = { :git => "https://github.com/CareOtter/Bond.git", :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'

  s.source_files = 'Bond/Classes/**/*'
  
  # s.resource_bundles = {
  #   'Bond' => ['Bond/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
