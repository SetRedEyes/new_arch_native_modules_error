import React from 'react';
import * as ScreenOrientation from 'expo-screen-orientation';
import { LogBox, Text } from 'react-native';
import * as Sentry from '@sentry/react-native';

Sentry.init({
    dsn: 'https://17fcb768415152e9dd34a84a5b168d07@o4504758237986816.ingest.us.sentry.io/4507783716667392',
    // enableInExpoDevelopment: true,
    debug: true, // If `true`, Sentry will try to print out useful debugging information if something goes wrong with sending the event. Set it to `false` in production
});

async function changeScreenOrientation() {
    await ScreenOrientation.lockAsync(ScreenOrientation.OrientationLock.LANDSCAPE);
}

changeScreenOrientation();

function App(): React.JSX.Element {
    LogBox.ignoreLogs(['new NativeEventEmitter()']);
    return <Text>SETREDEYES</Text>;
}

export default Sentry.wrap(App);
// export default App;
