include ReactNative.NativeElement;
open ReactNative;

type tintColors;
[@bs.obj]
external tintColors:
  (~_true: Color.t=?, ~_false: Color.t=?, unit) => tintColors =
  "";

type checkBoxEvent =
  Event.syntheticEvent({
    .
    "target": int,
    "value": bool,
  });

[@react.component] [@bs.module "@react-native-community/checkbox"]
external make:
  (
    ~ref: ref=?,
    // Common props
    ~onChange: checkBoxEvent => unit=?,
    ~onValueChange: bool => unit=?,
    ~value: bool=?,
    // Android only props
    ~disabled: bool=?,
    ~tintColors: tintColors=?,
    // IOS only props
    ~lineWidth: float=?, //TIP: offical docs say bool, that's clearly not right
    ~hideBox: bool=?,
    ~boxType: [@bs.string] [ | `circle | `square]=?,
    ~tintColor: string=?,
    ~onCheckColor: string=?,
    ~onFillColor: string=?,
    ~onTintColor: string=?,
    ~animationDuration: float=?,
    ~onAnimationType: [@bs.string] [
                        | `stroke
                        | `fill
                        | `bounce
                        | `flat
                        | [@bs.as "one-stroke"] `oneStroke
                        | `fade
                      ]
                        =?,
    ~offAnimationType: [@bs.string] [
                         | `stroke
                         | `fill
                         | `bounce
                         | `flat
                         | [@bs.as "one-stroke"] `oneStroke
                         | `fade
                       ]
                         =?,
    // View props
    ~accessibilityComponentType: [@bs.string] [
                                   | `none
                                   | `button
                                   | `radiobutton_checked
                                   | `radiobutton_unchecked
                                 ]
                                   =?,
    ~accessibilityElementsHidden: bool=?,
    ~accessibilityHint: string=?,
    ~accessibilityIgnoresInvertColors: bool=?,
    ~accessibilityLabel: string=?,
    ~accessibilityLiveRegion: [@bs.string] [ | `none | `polite | `assertive]=?,
    ~accessibilityRole: [@bs.string] [
                          | `none
                          | `button
                          | `link
                          | `search
                          | `image
                          | `keyboardkey
                          | `text
                          | `adjustable
                          | `header
                          | `summary
                          | `imagebutton
                        ]
                          =?,
    ~accessibilityStates: array(AccessibilityState.t)=?,
    ~accessibilityTraits: array(AccessibilityTrait.t)=?,
    ~accessibilityViewIsModal: bool=?,
    ~accessible: bool=?,
    ~collapsable: bool=?,
    ~hitSlop: View.edgeInsets=?,
    ~importantForAccessibility: [@bs.string] [
                                  | `auto
                                  | `yes
                                  | `no
                                  | [@bs.as "no-hide-descendants"]
                                    `noHideDescendants
                                ]
                                  =?,
    ~nativeID: string=?,
    ~needsOffscreenAlphaCompositing: bool=?,
    ~onAccessibilityEscape: unit => unit=?,
    ~onAccessibilityTap: unit => unit=?,
    ~onLayout: Event.layoutEvent => unit=?,
    ~onMagicTap: unit => unit=?,
    // Gesture Responder props
    ~onMoveShouldSetResponder: Event.pressEvent => bool=?,
    ~onMoveShouldSetResponderCapture: Event.pressEvent => bool=?,
    ~onResponderEnd: Event.pressEvent => unit=?,
    ~onResponderGrant: Event.pressEvent => unit=?,
    ~onResponderMove: Event.pressEvent => unit=?,
    ~onResponderReject: Event.pressEvent => unit=?,
    ~onResponderRelease: Event.pressEvent => unit=?,
    ~onResponderStart: Event.pressEvent => unit=?,
    ~onResponderTerminate: Event.pressEvent => unit=?,
    ~onResponderTerminationRequest: Event.pressEvent => bool=?,
    ~onStartShouldSetResponder: Event.pressEvent => bool=?,
    ~onStartShouldSetResponderCapture: Event.pressEvent => bool=?,
    ~pointerEvents: [@bs.string] [
                      | `auto
                      | `none
                      | [@bs.as "box-none"] `boxNone
                      | [@bs.as "box-only"] `boxOnly
                    ]
                      =?,
    ~removeClippedSubviews: bool=?,
    ~renderToHardwareTextureAndroid: bool=?,
    ~shouldRasterizeIOS: bool=?,
    ~style: Style.t=?,
    ~testID: string=?
  ) =>
  React.element =
  "default";
