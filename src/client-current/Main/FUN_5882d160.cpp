// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 136 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882d160.

// Ghidra body range 0x5882D160..0x5882D1E8; 136 mapped bytes.
extern "C" __declspec(naked) void FUN_5882d160_segment_00() {
    __asm {
        // 0x5882D160: push esi
        __asm _emit 0x56
        // 0x5882D161: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882D163: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D169: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882D16B: je 0x5882d1e6
        __asm _emit 0x74
        __asm _emit 0x79
        // 0x5882D16D: push ebx
        __asm _emit 0x53
        // 0x5882D16E: push ebp
        __asm _emit 0x55
        // 0x5882D16F: push edi
        __asm _emit 0x57
        // 0x5882D170: call 0x58786030
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x8E
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882D175: mov ecx, dword ptr [esi + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D17B: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5882D17D: call 0x58786460
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x92
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882D182: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882D188: push 0x5899df7c
        __asm _emit 0x68
        __asm _emit 0x7C
        __asm _emit 0xDF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882D18D: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5882D18F: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5882D191: mov ecx, dword ptr [esi + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D197: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882D19A: push eax
        __asm _emit 0x50
        // 0x5882D19B: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x4B
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882D1A0: push 0x5899df5c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0xDF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5882D1A5: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5882D1A7: mov ecx, dword ptr [esi + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D1AD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5882D1B0: push eax
        __asm _emit 0x50
        // 0x5882D1B1: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x4B
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x5882D1B6: mov ecx, dword ptr [esi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D1BC: push edi
        __asm _emit 0x57
        // 0x5882D1BD: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xA1
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882D1C2: mov ecx, dword ptr [esi + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D1C8: push ebx
        __asm _emit 0x53
        // 0x5882D1C9: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xA1
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882D1CE: mov ecx, dword ptr [esi + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D1D4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882D1D6: push eax
        __asm _emit 0x50
        // 0x5882D1D7: mov word ptr [esi + 0x18e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D1DE: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x7D
        __asm _emit 0xA1
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882D1E3: pop edi
        __asm _emit 0x5F
        // 0x5882D1E4: pop ebp
        __asm _emit 0x5D
        // 0x5882D1E5: pop ebx
        __asm _emit 0x5B
        // 0x5882D1E6: pop esi
        __asm _emit 0x5E
        // 0x5882D1E7: ret
        __asm _emit 0xC3
    }
}
