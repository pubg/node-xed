{
    "targets": [
        {
            "target_name": "node-xed",
            "cflags!": ["-fno-exceptions"],
            "cflags_cc!": ["-fno-exceptions"],
            "sources": [
                "cpp/node-xed.cpp"
            ],
            "include_dirs": [
                "<!@(node -p \"require('node-addon-api').include\")",
                "cpp/include"
            ],
            "conditions": [
                ["OS in \"linux\"", {
                    "libraries": [
                        "../cpp/lib/linux/libxed.a"
                    ],
                }],
                ["OS in \"win\"", {
                    "libraries": [
                        "../cpp/lib/win/xed.lib"
                    ],
                }],
                ["OS in \"mac\"", {
                    "libraries": [
                        "../cpp/lib/mac/libxed.a"
                    ],
                }]
            ],
            "dependencies": [
                "<!(node -p \"require('node-addon-api').gyp\")"
            ],
            "defines": ["NAPI_DISABLE_CPP_EXCEPTIONS"]
        },
        {
            "target_name": "action_after_build",
            "type": "none",
            "dependencies": ["<(module_name)"],
            "copies": [
                {
                    "files": ["<(PRODUCT_DIR)/<(module_name).node"],
                    "destination": "<(module_path)"
                }
            ]
        }
    ]
}
