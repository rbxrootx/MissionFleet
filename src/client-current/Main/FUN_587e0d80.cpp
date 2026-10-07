// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 183 bytes in 1 exact ranges.
// Source symbol alias: FUN_587e0d80.

// Ghidra body range 0x587E0D80..0x587E0E37; 183 mapped bytes.
extern "C" __declspec(naked) void FUN_587e0d80_segment_00() {
    __asm {
        // 0x587E0D80: push ebx
        __asm _emit 0x53
        // 0x587E0D81: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587E0D85: push esi
        __asm _emit 0x56
        // 0x587E0D86: push edi
        __asm _emit 0x57
        // 0x587E0D87: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587E0D89: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E0D8F: push ebx
        __asm _emit 0x53
        // 0x587E0D90: call 0x588f4060
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x32
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E0D95: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587E0D97: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587E0D99: je 0x587e0e31
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0D9F: cmp dword ptr [esi + 0xd78], edi
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0DA5: jne 0x587e0e10
        __asm _emit 0x75
        __asm _emit 0x69
        // 0x587E0DA7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E0DA9: push edi
        __asm _emit 0x57
        // 0x587E0DAA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E0DAC: call 0x587d8ff0
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x82
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E0DB1: mov dword ptr [esi + 0xe10], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0DB7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E0DB9: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E0DBB: je 0x587e0dc4
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587E0DBD: call 0x587dad80
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x9F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E0DC2: jmp 0x587e0de9
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x587E0DC4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E0DC6: push edi
        __asm _emit 0x57
        // 0x587E0DC7: call 0x587d8f90
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E0DCC: mov dword ptr [esi + 0xe10], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0DD2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E0DD4: je 0x587e0ddf
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587E0DD6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E0DD8: call 0x587dac20
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x9E
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E0DDD: jmp 0x587e0de9
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x587E0DDF: mov dword ptr [esi + 0xe10], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0DE9: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E0DEB: call 0x588e9880
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x8A
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E0DF0: mov eax, dword ptr [esi + 0xe10]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0DF6: push eax
        __asm _emit 0x50
        // 0x587E0DF7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E0DF9: call 0x587df580
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E0DFE: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E0E04: push ebx
        __asm _emit 0x53
        // 0x587E0E05: call 0x588f41e0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x33
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E0E0A: pop edi
        __asm _emit 0x5F
        // 0x587E0E0B: pop esi
        __asm _emit 0x5E
        // 0x587E0E0C: pop ebx
        __asm _emit 0x5B
        // 0x587E0E0D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587E0E10: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587E0E12: call 0x588e9880
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x8A
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587E0E17: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E0E1D: push ebx
        __asm _emit 0x53
        // 0x587E0E1E: call 0x588f41e0
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x33
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x587E0E23: mov ecx, dword ptr [esi + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E0E29: push ecx
        __asm _emit 0x51
        // 0x587E0E2A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587E0E2C: call 0x587df580
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587E0E31: pop edi
        __asm _emit 0x5F
        // 0x587E0E32: pop esi
        __asm _emit 0x5E
        // 0x587E0E33: pop ebx
        __asm _emit 0x5B
        // 0x587E0E34: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
