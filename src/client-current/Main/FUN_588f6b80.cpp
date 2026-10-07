// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 183 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f6b80.

// Ghidra body range 0x588F6B80..0x588F6C37; 183 mapped bytes.
extern "C" __declspec(naked) void FUN_588f6b80_segment_00() {
    __asm {
        // 0x588F6B80: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F6B82: push 0x5898947b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F6B87: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6B8D: push eax
        __asm _emit 0x50
        // 0x588F6B8E: push ecx
        __asm _emit 0x51
        // 0x588F6B8F: push esi
        __asm _emit 0x56
        // 0x588F6B90: push edi
        __asm _emit 0x57
        // 0x588F6B91: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F6B96: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F6B98: push eax
        __asm _emit 0x50
        // 0x588F6B99: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F6B9D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6BA3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F6BA5: push 0xf0c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6BAA: mov dword ptr [esi + 0x60], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6BB1: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F6BB6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F6BB9: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F6BBD: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6BC5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F6BC7: je 0x588f6bde
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588F6BC9: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588F6BCD: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F6BD1: push ecx
        __asm _emit 0x51
        // 0x588F6BD2: push edx
        __asm _emit 0x52
        // 0x588F6BD3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F6BD5: call 0x588e9f60
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x33
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6BDA: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588F6BDC: jmp 0x588f6be0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588F6BDE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588F6BE0: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6BE8: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588F6BEA: je 0x588f6c23
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x588F6BEC: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588F6BEF: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588F6BF2: add eax, 0x11
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x11
        // 0x588F6BF5: push eax
        __asm _emit 0x50
        // 0x588F6BF6: push ecx
        __asm _emit 0x51
        // 0x588F6BF7: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588F6BFA: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6BFF: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x588F6C02: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F6C04: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588F6C06: mov dword ptr [edx + 0x148], 1
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6C10: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588F6C13: push edi
        __asm _emit 0x57
        // 0x588F6C14: call 0x588bedc0
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x81
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x588F6C19: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588F6C1C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F6C1E: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588F6C21: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F6C23: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588F6C27: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6C2E: pop ecx
        __asm _emit 0x59
        // 0x588F6C2F: pop edi
        __asm _emit 0x5F
        // 0x588F6C30: pop esi
        __asm _emit 0x5E
        // 0x588F6C31: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588F6C34: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
