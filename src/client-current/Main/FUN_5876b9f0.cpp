// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 246 bytes in 1 exact ranges.
// Source symbol alias: FUN_5876b9f0.
// Fresh Ghidra shows three child initializations, selector values 3/4/8, a
// conditional localized quit-confirmation message, and a vtable call at +4.
// Verified incoming calls: FUN_587d51d0 at 0x587D59D4 and FUN_587deb30 at 0x587DEDEE.

// Ghidra body range 0x5876B9F0..0x5876BAE6; 246 mapped bytes.
extern "C" __declspec(naked) void FUN_5876b9f0_segment_00() {
    __asm {
        // 0x5876B9F0: push esi
        __asm _emit 0x56
        // 0x5876B9F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876B9F3: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5876B9F6: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876B9FB: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0x39
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876BA00: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5876BA03: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876BA08: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x39
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876BA0D: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5876BA10: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876BA15: call 0x5875f360
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0x39
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876BA1A: push 0xe8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BA1F: push 0xfb
        __asm _emit 0x68
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BA24: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876BA26: mov dword ptr [esi + 0xa4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BA30: call 0x58762a60
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876BA35: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5876BA38: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5876BA3B: add eax, 0x82
        __asm _emit 0x05
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BA40: add ecx, 0x69
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x69
        // 0x5876BA43: push eax
        __asm _emit 0x50
        // 0x5876BA44: push ecx
        __asm _emit 0x51
        // 0x5876BA45: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BA4B: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x78
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876BA50: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5876BA53: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5876BA56: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BA5C: add edx, 0x82
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BA62: push edx
        __asm _emit 0x52
        // 0x5876BA63: add eax, 0xe1
        __asm _emit 0x05
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BA68: push eax
        __asm _emit 0x50
        // 0x5876BA69: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x78
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876BA6E: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5876BA71: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5876BA74: add ecx, 0x82
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BA7A: push ecx
        __asm _emit 0x51
        // 0x5876BA7B: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BA81: add edx, 0x159
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BA87: push edx
        __asm _emit 0x52
        // 0x5876BA88: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x78
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876BA8D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876BA8F: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5876BA91: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876BA93: call 0x58762b60
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876BA98: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5876BA9A: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5876BA9C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876BA9E: call 0x58762b60
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876BAA3: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5876BAA5: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x5876BAA7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876BAA9: call 0x58762b60
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876BAAE: cmp dword ptr [esp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5876BAB3: mov dword ptr [esi + 0x78], 3
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BABA: jne 0x5876bad9
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x5876BABC: push 0x58995ad4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0x5A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5876BAC1: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5876BAC7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5876BACA: push eax
        __asm _emit 0x50
        // 0x5876BACB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876BACD: call 0x587645f0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x8B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876BAD2: mov dword ptr [esi + 0x7c], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BAD9: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5876BADB: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5876BADE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876BAE0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876BAE2: pop esi
        __asm _emit 0x5E
        // 0x5876BAE3: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
