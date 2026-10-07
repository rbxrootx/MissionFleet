// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 178 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f6c60.

// Ghidra body range 0x588F6C60..0x588F6D12; 178 mapped bytes.
extern "C" __declspec(naked) void FUN_588f6c60_segment_00() {
    __asm {
        // 0x588F6C60: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F6C62: push 0x589894ab
        __asm _emit 0x68
        __asm _emit 0xAB
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F6C67: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6C6D: push eax
        __asm _emit 0x50
        // 0x588F6C6E: push ecx
        __asm _emit 0x51
        // 0x588F6C6F: push ebx
        __asm _emit 0x53
        // 0x588F6C70: push ebp
        __asm _emit 0x55
        // 0x588F6C71: push esi
        __asm _emit 0x56
        // 0x588F6C72: push edi
        __asm _emit 0x57
        // 0x588F6C73: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F6C78: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F6C7A: push eax
        __asm _emit 0x50
        // 0x588F6C7B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F6C7F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6C85: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588F6C87: push 0x1c
        __asm _emit 0x6A
        __asm _emit 0x1C
        // 0x588F6C89: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x5F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F6C8E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F6C91: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F6C95: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588F6C97: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F6C9B: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x588F6C9D: je 0x588f6ca8
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588F6C9F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F6CA1: call 0x588f6210
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6CA6: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588F6CA8: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F6CAC: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F6CB0: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588F6CB4: push eax
        __asm _emit 0x50
        // 0x588F6CB5: push ecx
        __asm _emit 0x51
        // 0x588F6CB6: push edx
        __asm _emit 0x52
        // 0x588F6CB7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F6CB9: mov dword ptr [esp + 0x2c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6CC1: call 0x588f6290
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6CC6: mov ecx, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x588F6CC9: push esi
        __asm _emit 0x56
        // 0x588F6CCA: call 0x588f6470
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6CCF: mov ecx, dword ptr [edi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x74
        // 0x588F6CD2: mov eax, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x588F6CD5: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x588F6CD8: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588F6CDA: or ebx, edx
        __asm _emit 0x0B
        __asm _emit 0xDA
        // 0x588F6CDC: je 0x588f6cee
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588F6CDE: mov ebx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x588F6CE1: mov ebp, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x2B
        // 0x588F6CE3: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x588F6CE5: jne 0x588f6cfc
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x588F6CE7: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x588F6CEA: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588F6CEC: jne 0x588f6cfc
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x588F6CEE: push esi
        __asm _emit 0x56
        // 0x588F6CEF: call 0x588f6e70
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6CF4: mov edi, dword ptr [edi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x74
        // 0x588F6CF7: or word ptr [edi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588F6CFC: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F6D00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6D07: pop ecx
        __asm _emit 0x59
        // 0x588F6D08: pop edi
        __asm _emit 0x5F
        // 0x588F6D09: pop esi
        __asm _emit 0x5E
        // 0x588F6D0A: pop ebp
        __asm _emit 0x5D
        // 0x588F6D0B: pop ebx
        __asm _emit 0x5B
        // 0x588F6D0C: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588F6D0F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
