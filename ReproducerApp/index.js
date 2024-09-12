import { registerRootComponent } from 'expo';
import {
  Text,
  TextInput,
} from "react-native";

import App from './App';

// registerRootComponent calls AppRegistry.registerComponent('main', () => App);
// It also ensures that whether you load the app in Expo Go or in a native build,
// the environment is set up appropriately

// Disable allowFontScaling for Text/TextInput component
Text.defaultProps = Text.defaultProps || {};
Text.defaultProps.allowFontScaling = false;
TextInput.defaultProps = TextInput.defaultProps || {};
TextInput.defaultProps.allowFontScaling = false;

registerRootComponent(App);

// SystemSetting.isBluetoothEnabled().then((enable)=>{
//     const state = enable ? 'On' : 'Off';
//     console.log('Current bluetooth is ' + state);
// })

// SystemSetting.switchBluetooth(()=>{
//     console.log('switch bluetooth successfully');
// })
