// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 112 bytes in 1 exact ranges.
// Source symbol alias: FUN_58971e50.

// Ghidra body range 0x58971E50..0x58971EC0; 112 mapped bytes.
extern "C" __declspec(naked) void FUN_58971e50_segment_00() {
    __asm {
        // 0x58971E50: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58971E54: push esi
        __asm _emit 0x56
        // 0x58971E55: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58971E57: push edi
        __asm _emit 0x57
        // 0x58971E58: jne 0x58971e86
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x58971E5A: lea edx, [ecx + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x44
        // 0x58971E5D: mov edi, 0x589ce5cc
        __asm _emit 0xBF
        __asm _emit 0xCC
        __asm _emit 0xE5
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58971E62: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58971E65: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58971E67: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x58971E69: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x58971E6B: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58971E6D: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58971E6F: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58971E71: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58971E73: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58971E76: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58971E78: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58971E7A: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58971E7C: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58971E7F: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58971E81: pop edi
        __asm _emit 0x5F
        // 0x58971E82: pop esi
        __asm _emit 0x5E
        // 0x58971E83: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58971E86: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58971E89: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58971E8B: jne 0x58971eb9
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x58971E8D: lea edx, [ecx + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x44
        // 0x58971E90: mov edi, 0x589ce5bc
        __asm _emit 0xBF
        __asm _emit 0xBC
        __asm _emit 0xE5
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58971E95: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x58971E98: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58971E9A: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x58971E9C: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x58971E9E: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x58971EA0: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58971EA2: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x58971EA4: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58971EA6: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x58971EA9: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58971EAB: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58971EAD: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58971EAF: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58971EB2: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58971EB4: pop edi
        __asm _emit 0x5F
        // 0x58971EB5: pop esi
        __asm _emit 0x5E
        // 0x58971EB6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58971EB9: pop edi
        __asm _emit 0x5F
        // 0x58971EBA: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58971EBC: pop esi
        __asm _emit 0x5E
        // 0x58971EBD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
