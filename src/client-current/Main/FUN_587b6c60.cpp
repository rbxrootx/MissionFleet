// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B6C60 .. +0xAE bytes.
// Source symbol alias: FUN_587b6c60.
extern "C" __declspec(naked) void FUN_587b6c60() {
    __asm {
        // 0x587B6C60: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x587B6C63: push esi
        __asm _emit 0x56
        // 0x587B6C64: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B6C66: jne 0x587b6cd5
        __asm _emit 0x75
        __asm _emit 0x6D
        // 0x587B6C68: mov al, byte ptr [ecx + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x41
        __asm _emit 0x61
        // 0x587B6C6B: push ebx
        __asm _emit 0x53
        // 0x587B6C6C: push edi
        __asm _emit 0x57
        // 0x587B6C6D: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587B6C6F: jne 0x587b6ca1
        __asm _emit 0x75
        __asm _emit 0x30
        // 0x587B6C71: mov eax, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x587B6C74: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x587B6C77: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587B6C79: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587B6C7B: jle 0x587b6c94
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x587B6C7D: mov esi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x587B6C80: mov edi, dword ptr [ecx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x74
        // 0x587B6C83: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587B6C85: sub ebx, esi
        __asm _emit 0x2B
        __asm _emit 0xDE
        // 0x587B6C87: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x587B6C89: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x587B6C8B: jle 0x587b6c98
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x587B6C8D: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587B6C8F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B6C91: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587B6C94: pop edi
        __asm _emit 0x5F
        // 0x587B6C95: pop ebx
        __asm _emit 0x5B
        // 0x587B6C96: pop esi
        __asm _emit 0x5E
        // 0x587B6C97: ret
        __asm _emit 0xC3
        // 0x587B6C98: pop edi
        __asm _emit 0x5F
        // 0x587B6C99: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x587B6C9B: pop ebx
        __asm _emit 0x5B
        // 0x587B6C9C: mov dword ptr [ecx + 0x50], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x587B6C9F: pop esi
        __asm _emit 0x5E
        // 0x587B6CA0: ret
        __asm _emit 0xC3
        // 0x587B6CA1: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x587B6CA3: jne 0x587b6c94
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x587B6CA5: mov eax, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x587B6CA8: mov edx, dword ptr [ecx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x70
        // 0x587B6CAB: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587B6CAD: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587B6CAF: jle 0x587b6c94
        __asm _emit 0x7E
        __asm _emit 0xE3
        // 0x587B6CB1: mov esi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x587B6CB4: mov edi, dword ptr [ecx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x74
        // 0x587B6CB7: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587B6CB9: sub ebx, esi
        __asm _emit 0x2B
        __asm _emit 0xDE
        // 0x587B6CBB: add ebx, edx
        __asm _emit 0x03
        __asm _emit 0xDA
        // 0x587B6CBD: cmp ebx, edi
        __asm _emit 0x3B
        __asm _emit 0xDF
        // 0x587B6CBF: jle 0x587b6ccc
        __asm _emit 0x7E
        __asm _emit 0x0B
        // 0x587B6CC1: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587B6CC3: pop edi
        __asm _emit 0x5F
        // 0x587B6CC4: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B6CC6: pop ebx
        __asm _emit 0x5B
        // 0x587B6CC7: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587B6CCA: pop esi
        __asm _emit 0x5E
        // 0x587B6CCB: ret
        __asm _emit 0xC3
        // 0x587B6CCC: pop edi
        __asm _emit 0x5F
        // 0x587B6CCD: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x587B6CCF: pop ebx
        __asm _emit 0x5B
        // 0x587B6CD0: mov dword ptr [ecx + 0x54], esi
        __asm _emit 0x89
        __asm _emit 0x71
        __asm _emit 0x54
        // 0x587B6CD3: pop esi
        __asm _emit 0x5E
        // 0x587B6CD4: ret
        __asm _emit 0xC3
        // 0x587B6CD5: mov dl, byte ptr [ecx + 0x61]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x61
        // 0x587B6CD8: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x587B6CDB: jne 0x587b6cf3
        __asm _emit 0x75
        __asm _emit 0x16
        // 0x587B6CDD: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587B6CE0: mov esi, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x6C
        // 0x587B6CE3: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x587B6CE5: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x587B6CE7: cmp esi, dword ptr [ecx + 0x74]
        __asm _emit 0x3B
        __asm _emit 0x71
        __asm _emit 0x74
        // 0x587B6CEA: jge 0x587b6c96
        __asm _emit 0x7D
        __asm _emit 0xAA
        // 0x587B6CEC: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587B6CEE: mov dword ptr [ecx + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x587B6CF1: pop esi
        __asm _emit 0x5E
        // 0x587B6CF2: ret
        __asm _emit 0xC3
        // 0x587B6CF3: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587B6CF6: jne 0x587b6c96
        __asm _emit 0x75
        __asm _emit 0x9E
        // 0x587B6CF8: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587B6CFB: mov esi, dword ptr [ecx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x70
        // 0x587B6CFE: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x587B6D00: add esi, eax
        __asm _emit 0x03
        __asm _emit 0xF0
        // 0x587B6D02: cmp esi, dword ptr [ecx + 0x74]
        __asm _emit 0x3B
        __asm _emit 0x71
        __asm _emit 0x74
        // 0x587B6D05: jge 0x587b6c96
        __asm _emit 0x7D
        __asm _emit 0x8F
        // 0x587B6D07: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x587B6D09: mov dword ptr [ecx + 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x54
        // 0x587B6D0C: pop esi
        __asm _emit 0x5E
        // 0x587B6D0D: ret
        __asm _emit 0xC3
    }
}
