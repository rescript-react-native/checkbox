# `@reason-react-native/checkbox`

[![Build Status](https://github.com/reason-react-native/checkbox/workflows/Build/badge.svg)](https://github.com/reason-react-native/checkbox/actions)
[![Version](https://img.shields.io/npm/v/@reason-react-native/checkbox.svg)](https://www.npmjs.com/@reason-react-native/checkbox)
[![Chat](https://img.shields.io/discord/235176658175262720.svg?logo=discord&colorb=blue)](https://reasonml-community.github.io/reason-react-native/discord/)

[ReasonML](https://reasonml.github.io) /
[BuckleScript](https://bucklescript.github.io) bindings for
[`@react-native-community/react-native-checkbox`](https://github.com/react-native-community/react-native-checkbox).

The module will be exposed as `ReactNativeCheckbox`.

Version x.y.z of `@reason-react-native/checkbox` is intended to be compatible
with version x.y.z of `@react-native-community/react-native-checkbox`.

## Installation

When
[`@react-native-community/react-native-checkbox`](`https://github.com/react-native-community/react-native-checkbox`)
is properly installed & configured by following their installation instructions,
you can install the bindings:

```console
npm install @reason-react-native/checkbox
# or
yarn add @reason-react-native/checkbox
```

`@reason-react-native/checkbox` should be added to `bs-dependencies` in your
`bsconfig.json`. For example,

```diff
{
  //...
  "bs-dependencies": [
    "reason-react",
    "reason-react-native",
    // ...
+    "@reason-react-native/checkbox"
  ],
  //...
}
```

## Usage

### Types

#### `checkBoxEvent`

```reason
type checkBoxEvent =
  ReactNative.Event.syntheticEvent({
    .
    "target": int,
    "value": bool,
  });
```

`value` represents value of the checkbox as updated by the event.

#### `element`

Type to be used in `ref` and with `NativeMethods`, as with other components in
React Native bindings.

#### `ref`

is an alias for `React.Ref.t(Js.nullable(element))`.

### Props

All props are optional.

#### `value: bool`

Value of the checkbox. When `true`, checkbox will be checked. Default value is
`false`.

#### `disabled: bool`

When `true`, user will not be able to toggle the checkbox. Default value is
`false`.

#### `onChange: checkBoxEvent => unit`

Returns a [native event](#checkBoxEvent).

#### `onValueChange`

Returns the new `bool` value.

#### `tintColors`

```reason
tintColors:
  (~_true: ReactNative.Color.t=?, ~_false: ReactNative.Color.t=?, unit) => tintColors
```

Value for `_true` will be used when the checkbox is checked, and value for
`_false` will be used when it is not checked.

### `View` props

Refer to
[`@reason-react-native/react-native`](https://github.com/reason-react-native/react-native)
[documentation](https://reasonml-community.github.io/reason-react-native/en/docs/components/View/).

---

## Changelog

Check the [changelog](./CHANGELOG.md) for more information about recent
releases.

## Contribute

Read the [contribution guidelines](./CONTRIBUTING.md) before contributing.

## Code of Conduct

We want this community to be friendly and respectful to each other. Please read
[our full code of conduct](./CODE_OF_CONDUCT.md) so that you can understand what
actions will and will not be tolerated.
