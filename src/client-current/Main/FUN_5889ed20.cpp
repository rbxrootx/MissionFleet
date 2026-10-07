// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5889ED20 .. +0x54 bytes.
// Source symbol alias: FUN_5889ed20.
extern "C" __declspec(naked) void FUN_5889ed20() {
    __asm {
        // 0x5889ED20: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889ED24: cmp eax, 0x41
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x41
        // 0x5889ED27: jb 0x5889ed2e
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5889ED29: cmp eax, 0x5a
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x5A
        // 0x5889ED2C: jbe 0x5889ed6c
        __asm _emit 0x76
        __asm _emit 0x3E
        // 0x5889ED2E: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x5889ED31: je 0x5889ed6c
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5889ED33: cmp eax, 0x11
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x11
        // 0x5889ED36: je 0x5889ed6c
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x5889ED38: cmp eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x20
        // 0x5889ED3B: je 0x5889ed6c
        __asm _emit 0x74
        __asm _emit 0x2F
        // 0x5889ED3D: cmp eax, 0xdc
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ED42: je 0x5889ed6c
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5889ED44: cmp eax, 0xba
        __asm _emit 0x3D
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ED49: je 0x5889ed6c
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x5889ED4B: cmp eax, 0xde
        __asm _emit 0x3D
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ED50: je 0x5889ed6c
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5889ED52: cmp eax, 0xbc
        __asm _emit 0x3D
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ED57: je 0x5889ed6c
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5889ED59: cmp eax, 0xbe
        __asm _emit 0x3D
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ED5E: je 0x5889ed6c
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5889ED60: cmp eax, 0xbf
        __asm _emit 0x3D
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ED65: je 0x5889ed6c
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5889ED67: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889ED69: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5889ED6C: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ED71: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
