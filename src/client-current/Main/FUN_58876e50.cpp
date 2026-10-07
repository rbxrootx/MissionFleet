// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 300 bytes in 1 exact ranges.
// Source symbol alias: FUN_58876e50.

// Ghidra body range 0x58876E50..0x58876F7C; 300 mapped bytes.
extern "C" __declspec(naked) void FUN_58876e50_segment_00() {
    __asm {
        // 0x58876E50: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58876E53: push ebp
        __asm _emit 0x55
        // 0x58876E54: push esi
        __asm _emit 0x56
        // 0x58876E55: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58876E57: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876E5C: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58876E5E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58876E60: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58876E62: push 0x80000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58876E67: push 0x5899efbc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0xEF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58876E6C: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58876E6E: mov dword ptr [esp + 0x24], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876E76: call dword ptr [0x5898c180]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58876E7C: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58876E7E: cmp esi, -1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58876E81: jne 0x58876e8f
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x58876E83: push eax
        __asm _emit 0x50
        // 0x58876E84: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58876E8A: jmp 0x58876f62
        __asm _emit 0xE9
        __asm _emit 0xD3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876E8F: push ebx
        __asm _emit 0x53
        // 0x58876E90: push edi
        __asm _emit 0x57
        // 0x58876E91: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58876E93: push esi
        __asm _emit 0x56
        // 0x58876E94: call dword ptr [0x5898c18c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58876E9A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58876E9C: push edi
        __asm _emit 0x57
        // 0x58876E9D: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xA6
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58876EA2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58876EA5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58876EA7: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58876EA9: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58876EAD: push eax
        __asm _emit 0x50
        // 0x58876EAE: push edi
        __asm _emit 0x57
        // 0x58876EAF: push ebx
        __asm _emit 0x53
        // 0x58876EB0: push esi
        __asm _emit 0x56
        // 0x58876EB1: call dword ptr [0x5898c190]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58876EB7: push esi
        __asm _emit 0x56
        // 0x58876EB8: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58876EBE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58876EC0: dec edi
        __asm _emit 0x4F
        // 0x58876EC1: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58876EC5: cmp byte ptr [eax + ebx], 0xd
        __asm _emit 0x80
        __asm _emit 0x3C
        __asm _emit 0x18
        __asm _emit 0x0D
        // 0x58876EC9: jne 0x58876ed0
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58876ECB: inc eax
        __asm _emit 0x40
        // 0x58876ECC: inc dword ptr [esp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58876ED0: inc eax
        __asm _emit 0x40
        // 0x58876ED1: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58876ED3: jbe 0x58876ec5
        __asm _emit 0x76
        __asm _emit 0xF0
        // 0x58876ED5: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58876ED9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58876EDB: inc eax
        __asm _emit 0x40
        // 0x58876EDC: mov edx, 0x47
        __asm _emit 0xBA
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876EE1: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x58876EE3: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x58876EE6: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x58876EE8: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58876EEA: push ecx
        __asm _emit 0x51
        // 0x58876EEB: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xA6
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58876EF0: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58876EF4: inc ecx
        __asm _emit 0x41
        // 0x58876EF5: imul ecx, ecx, 0x47
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x47
        // 0x58876EF8: push ecx
        __asm _emit 0x51
        // 0x58876EF9: push 0x20
        __asm _emit 0x6A
        __asm _emit 0x20
        // 0x58876EFB: push eax
        __asm _emit 0x50
        // 0x58876EFC: mov dword ptr [ebp + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876F02: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x5D
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58876F07: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58876F0A: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58876F0C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58876F0E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58876F10: mov dl, byte ptr [esi + ebx]
        __asm _emit 0x8A
        __asm _emit 0x14
        __asm _emit 0x1E
        // 0x58876F13: cmp dl, 0xd
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x58876F16: jne 0x58876f1e
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58876F18: inc esi
        __asm _emit 0x46
        // 0x58876F19: inc ecx
        __asm _emit 0x41
        // 0x58876F1A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58876F1C: jmp 0x58876f4e
        __asm _emit 0xEB
        __asm _emit 0x30
        // 0x58876F1E: cmp dl, 9
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x58876F21: jne 0x58876f3a
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58876F23: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876F28: cmp eax, 0x46
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x46
        // 0x58876F2B: jb 0x58876f32
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58876F2D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58876F2F: inc ecx
        __asm _emit 0x41
        // 0x58876F30: jmp 0x58876f33
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x58876F32: inc eax
        __asm _emit 0x40
        // 0x58876F33: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x58876F36: jne 0x58876f28
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x58876F38: jmp 0x58876f4e
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x58876F3A: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58876F3C: imul edi, edi, 0x47
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0x47
        // 0x58876F3F: add edi, dword ptr [ebp + 0xa4]
        __asm _emit 0x03
        __asm _emit 0xBD
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876F45: inc eax
        __asm _emit 0x40
        // 0x58876F46: mov byte ptr [edi + eax - 1], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x07
        __asm _emit 0xFF
        // 0x58876F4A: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58876F4E: inc esi
        __asm _emit 0x46
        // 0x58876F4F: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x58876F51: jbe 0x58876f10
        __asm _emit 0x76
        __asm _emit 0xBD
        // 0x58876F53: imul ecx, ecx, 0x47
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x47
        // 0x58876F56: add ecx, dword ptr [ebp + 0xa4]
        __asm _emit 0x03
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876F5C: pop edi
        __asm _emit 0x5F
        // 0x58876F5D: mov byte ptr [ecx + eax], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58876F61: pop ebx
        __asm _emit 0x5B
        // 0x58876F62: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58876F66: mov ecx, dword ptr [ebp + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876F6C: inc edx
        __asm _emit 0x42
        // 0x58876F6D: imul edx, edx, 0x47
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x47
        // 0x58876F70: push edx
        __asm _emit 0x52
        // 0x58876F71: call 0x58748e40
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x1E
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58876F76: pop esi
        __asm _emit 0x5E
        // 0x58876F77: pop ebp
        __asm _emit 0x5D
        // 0x58876F78: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58876F7B: ret
        __asm _emit 0xC3
    }
}
