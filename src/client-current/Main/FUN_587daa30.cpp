// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 139 bytes in 1 exact ranges.
// Source symbol alias: FUN_587daa30.

// Ghidra body range 0x587DAA30..0x587DAABB; 139 mapped bytes.
extern "C" __declspec(naked) void FUN_587daa30_segment_00() {
    __asm {
        // 0x587DAA30: push esi
        __asm _emit 0x56
        // 0x587DAA31: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587DAA33: mov eax, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAA39: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587DAA3B: je 0x587daa85
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x587DAA3D: cmp dword ptr [eax + 0x9a4], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xA4
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAA44: je 0x587daa85
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x587DAA46: mov ecx, dword ptr [eax + 0xcc0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAA4C: mov edx, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x78
        // 0x587DAA4F: mov eax, dword ptr [eax + 0xa70]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x70
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAA55: imul edx, edx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAA5B: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587DAA60: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x587DAA62: ja 0x587daa85
        __asm _emit 0x77
        __asm _emit 0x21
        // 0x587DAA64: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587DAA66: call 0x587d9340
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587DAA6B: mov ecx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAA71: mov edx, dword ptr [ecx + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x48
        // 0x587DAA74: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DAA7A: shr edx, 0xa
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0A
        // 0x587DAA7D: push edx
        __asm _emit 0x52
        // 0x587DAA7E: call 0x587b99b0
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xEF
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587DAA83: pop esi
        __asm _emit 0x5E
        // 0x587DAA84: ret
        __asm _emit 0xC3
        // 0x587DAA85: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAA87: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAA89: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAA8B: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x587DAA8D: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x10
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x587DAA92: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587DAA94: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x97
        __asm _emit 0xA2
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587DAA99: mov eax, dword ptr [0x58a248fc]
        __asm _emit 0xA1
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587DAA9E: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAAA4: push eax
        __asm _emit 0x50
        // 0x587DAAA5: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xCE
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x587DAAAA: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587DAAB0: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587DAAB2: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587DAAB5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587DAAB7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587DAAB9: pop esi
        __asm _emit 0x5E
        // 0x587DAABA: ret
        __asm _emit 0xC3
    }
}
