module.exports = function (api) {
    api.cache(true);
    return {
        presets: ['babel-preset-expo'],
        plugins: [
            'react-native-reanimated/plugin',
            '@babel/plugin-transform-react-jsx',
            [
                'module:react-native-dotenv',
                {
                    envName: 'APP_ENV',
                    path: '.env',
                    allowUndefined: false,
                },
            ],
            [
                'module-resolver',
                {
                    alias: {
                        '@': './src',
                    },
                },
            ],
        ],
        env: {
            production: {
                plugins: ['transform-remove-console'], //removing consoles.log from app during release (production) versions
            },
        },
    };
};
