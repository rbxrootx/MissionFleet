// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 178 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f6d20.

// Ghidra body range 0x588F6D20..0x588F6DD2; 178 mapped bytes.
extern "C" __declspec(naked) void FUN_588f6d20_segment_00() {
    __asm {
        // 0x588F6D20: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F6D22: push 0x589894ab
        __asm _emit 0x68
        __asm _emit 0xAB
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F6D27: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6D2D: push eax
        __asm _emit 0x50
        // 0x588F6D2E: push ecx
        __asm _emit 0x51
        // 0x588F6D2F: push ebx
        __asm _emit 0x53
        // 0x588F6D30: push ebp
        __asm _emit 0x55
        // 0x588F6D31: push esi
        __asm _emit 0x56
        // 0x588F6D32: push edi
        __asm _emit 0x57
        // 0x588F6D33: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F6D38: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F6D3A: push eax
        __asm _emit 0x50
        // 0x588F6D3B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F6D3F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6D45: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588F6D47: push 0x1c
        __asm _emit 0x6A
        __asm _emit 0x1C
        // 0x588F6D49: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x5F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F6D4E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F6D51: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F6D55: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588F6D57: mov dword ptr [esp + 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F6D5B: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x588F6D5D: je 0x588f6d68
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588F6D5F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F6D61: call 0x588f6210
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6D66: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588F6D68: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588F6D6C: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588F6D70: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588F6D74: push eax
        __asm _emit 0x50
        // 0x588F6D75: push ecx
        __asm _emit 0x51
        // 0x588F6D76: push edx
        __asm _emit 0x52
        // 0x588F6D77: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588F6D79: mov dword ptr [esp + 0x2c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6D81: call 0x588f6300
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6D86: mov ecx, dword ptr [edi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x78
        // 0x588F6D89: push esi
        __asm _emit 0x56
        // 0x588F6D8A: call 0x588f6470
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6D8F: mov ecx, dword ptr [edi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x74
        // 0x588F6D92: mov eax, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x588F6D95: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x588F6D98: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x588F6D9A: or ebx, edx
        __asm _emit 0x0B
        __asm _emit 0xDA
        // 0x588F6D9C: je 0x588f6dae
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588F6D9E: mov ebx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x588F6DA1: mov ebp, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x2B
        // 0x588F6DA3: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x588F6DA5: jne 0x588f6dbc
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x588F6DA7: mov eax, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x588F6DAA: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588F6DAC: jne 0x588f6dbc
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x588F6DAE: push esi
        __asm _emit 0x56
        // 0x588F6DAF: call 0x588f6e70
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6DB4: mov edi, dword ptr [edi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x7F
        __asm _emit 0x74
        // 0x588F6DB7: or word ptr [edi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588F6DBC: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F6DC0: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6DC7: pop ecx
        __asm _emit 0x59
        // 0x588F6DC8: pop edi
        __asm _emit 0x5F
        // 0x588F6DC9: pop esi
        __asm _emit 0x5E
        // 0x588F6DCA: pop ebp
        __asm _emit 0x5D
        // 0x588F6DCB: pop ebx
        __asm _emit 0x5B
        // 0x588F6DCC: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588F6DCF: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
