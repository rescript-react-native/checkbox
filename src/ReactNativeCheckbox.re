open ReactNative;
include NativeElement;

type tintColors;
[@bs.obj]
external tintColors: (~_true: int=?, ~_false: int=?, unit) => tintColors;

module CheckBoxEvent = {
  type payload = {
    target: int,
    value: bool,
  };

  include Event.SyntheticEvent({
    type _payload = payload;
  });
};

[@react.component] [@bs.module "@react-native-community/checkbox"]
external make:
  (
    ~ref: ref=?,
    // CheckBox common props
    ~onChange: CheckBoxEvent.t => unit=?,
    ~onValueChange: bool => unit=?,
    ~value: bool=?,
    ~disabled: bool=?,
    // CheckBox Android props
    ~tintColors: tintColors=?,
    // CheckBox iOS props
    ~lineWidth: float=?,
    ~hideBox: bool=?,
    ~boxType: [ | `circle | `square]=?,
    ~tintColor: Color.t=?,
    ~onCheckColor: Color.t=?,
    ~onFillColor: Color.t=?,
    ~onTintColor: Color.t=?,
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
    // View props 0.63.0
    ~accessibilityActions: array(Accessibility.actionInfo)=?,
    ~accessibilityElementsHidden: bool=?,
    ~accessibilityHint: string=?,
    ~accessibilityIgnoresInvertColors: bool=?,
    ~accessibilityLabel: string=?,
    ~accessibilityLiveRegion: Accessibility.liveRegion=?,
    ~accessibilityRole: Accessibility.role=?,
    ~accessibilityState: Accessibility.state=?,
    ~accessibilityValue: Accessibility.value=?,
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
    ~onAccessibilityAction: Accessibility.actionEvent => unit=?,
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
    ~testID: string=?,
    ~children: React.element=?,
    // React Native Web Props
    ~onMouseDown: ReactEvent.Mouse.t => unit=?,
    ~onMouseEnter: ReactEvent.Mouse.t => unit=?,
    ~onMouseLeave: ReactEvent.Mouse.t => unit=?,
    ~onMouseMove: ReactEvent.Mouse.t => unit=?,
    ~onMouseOver: ReactEvent.Mouse.t => unit=?,
    ~onMouseOut: ReactEvent.Mouse.t => unit=?,
    ~onMouseUp: ReactEvent.Mouse.t => unit=?
  ) =>
  React.element =
  "default";
