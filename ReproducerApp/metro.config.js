const { getDefaultConfig, mergeConfig } = require('@react-native/metro-config');
// import { getDefaultConfig, mergeConfig } from '@react-native/metro-config';

/**
 * Metro configuration
 * https://reactnative.dev/docs/metro
 *
 * @type {import('metro-config').MetroConfig}
 */
const config = {
    resolver: {
        sourceExts: ['js', 'json', 'ts', 'tsx', 'cjs', 'svg'],
        assetExts: ['gltf', 'glb', '.glb', 'png', 'jpg', 'ttf', 'mp3'],
    },
    transformer: {
        assetPlugins: ['expo-asset/tools/hashAssetFiles'],
        babelTransformerPath: require.resolve('react-native-svg-transformer'),
    },
};

module.exports = mergeConfig(getDefaultConfig(__dirname), config);