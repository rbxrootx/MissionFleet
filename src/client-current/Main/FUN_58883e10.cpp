// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 134 bytes in 1 exact ranges.
// Source symbol alias: FUN_58883e10.

// Ghidra body range 0x58883E10..0x58883E96; 134 mapped bytes.
extern "C" __declspec(naked) void FUN_58883e10_segment_00() {
    __asm {
        // 0x58883E10: push ebp
        __asm _emit 0x55
        // 0x58883E11: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58883E13: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58883E15: push 0x58986830
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58883E1A: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58883E20: push eax
        __asm _emit 0x50
        // 0x58883E21: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58883E24: push ebx
        __asm _emit 0x53
        // 0x58883E25: push esi
        __asm _emit 0x56
        // 0x58883E26: push edi
        __asm _emit 0x57
        // 0x58883E27: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58883E2C: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x58883E2E: push eax
        __asm _emit 0x50
        // 0x58883E2F: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58883E32: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58883E38: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x58883E3B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58883E3D: mov dword ptr [ebp - 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x58883E40: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58883E43: push edi
        __asm _emit 0x57
        // 0x58883E44: call 0x58882680
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58883E49: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58883E4B: je 0x58883e82
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x58883E4D: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58883E50: mov byte ptr [ebp + 8], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58883E54: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58883E57: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58883E5A: push eax
        __asm _emit 0x50
        // 0x58883E5B: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x58883E5E: push ecx
        __asm _emit 0x51
        // 0x58883E5F: lea edx, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58883E62: push edx
        __asm _emit 0x52
        // 0x58883E63: push eax
        __asm _emit 0x50
        // 0x58883E64: push edi
        __asm _emit 0x57
        // 0x58883E65: push ebx
        __asm _emit 0x53
        // 0x58883E66: mov dword ptr [ebp - 4], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58883E6D: call 0x5887cb30
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58883E72: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58883E74: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x58883E77: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58883E7A: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x58883E7C: lea edx, [ebx + ecx*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x4B
        // 0x58883E7F: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x58883E82: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x58883E85: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58883E8C: pop ecx
        __asm _emit 0x59
        // 0x58883E8D: pop edi
        __asm _emit 0x5F
        // 0x58883E8E: pop esi
        __asm _emit 0x5E
        // 0x58883E8F: pop ebx
        __asm _emit 0x5B
        // 0x58883E90: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58883E92: pop ebp
        __asm _emit 0x5D
        // 0x58883E93: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
