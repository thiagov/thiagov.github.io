const path = require('path');
const webpack = require('webpack');
const CopyWebpackPlugin = require('copy-webpack-plugin');
const HtmlWebpackPlugin = require('html-webpack-plugin')


module.exports = {
    entry: {
        'home': './src/home/index.js',
        'ihm': './src/ihm/index.js'
    },
    output: {
        filename: '[name]_bundle.js',
        path: path.resolve(__dirname, 'dist')
    },
    module: {
        rules: [
            {
                test: /\.css$/,
                use: ['style-loader', 'css-loader']
            },
            {
                test: /\.(png|svg|jpg|gif)$/,
                use: ['file-loader']
            }
        ]
    },
    plugins: [
        new webpack.ProvidePlugin({
            $: 'jquery',
            jQuery: 'jquery',
            'window.$': 'jquery',
            'window.jQuery': 'jquery'
        }),
        new CopyWebpackPlugin([
            { from: 'src/home/img', to: 'img' },
            // { from: 'resources#<{(||)}>#*' },
            { from: 'labaeds/**/*', context: 'src' }
        ]),
        new HtmlWebpackPlugin({
            hash: true,
            chunks: ['home'],
            template: 'src/home/index.html',
            filename: 'index.html'
        }),
        new HtmlWebpackPlugin({
            hash: true,
            chunks: ['ihm'],
            template: 'src/ihm/ihm.html',
            filename: 'ihm.html'
        })
    ],
    performance: { hints: false }
};
