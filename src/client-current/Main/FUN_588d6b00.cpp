// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 308 bytes in 2 exact ranges.
// Source symbol alias: FUN_588d6b00.

// Ghidra body range 0x588D6B00..0x588D6BD9; 217 mapped bytes.
extern "C" __declspec(naked) void FUN_588d6b00_segment_00() {
    __asm {
        // 0x588D6B00: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x588D6B03: push ebx
        __asm _emit 0x53
        // 0x588D6B04: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D6B08: push edi
        __asm _emit 0x57
        // 0x588D6B09: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588D6B0B: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588D6B0D: jne 0x588d6b19
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x588D6B0F: pop edi
        __asm _emit 0x5F
        // 0x588D6B10: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D6B12: pop ebx
        __asm _emit 0x5B
        // 0x588D6B13: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x588D6B16: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588D6B19: mov ecx, dword ptr [edi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6B1F: add ecx, dword ptr [edi + 4]
        __asm _emit 0x03
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588D6B22: mov eax, dword ptr [edi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6B28: mov edx, dword ptr [edi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6B2E: add edx, dword ptr [edi + 8]
        __asm _emit 0x03
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x588D6B31: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588D6B33: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D6B37: mov eax, dword ptr [edi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6B3D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D6B3F: push ebp
        __asm _emit 0x55
        // 0x588D6B40: mov ebp, dword ptr [ebx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0xAB
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6B46: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D6B4A: mov eax, dword ptr [ebx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6B50: add eax, dword ptr [ebx + 4]
        __asm _emit 0x03
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x588D6B53: push esi
        __asm _emit 0x56
        // 0x588D6B54: mov esi, dword ptr [ebx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0xB3
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6B5A: add esi, dword ptr [ebx + 8]
        __asm _emit 0x03
        __asm _emit 0x73
        __asm _emit 0x08
        // 0x588D6B5D: add ebp, eax
        __asm _emit 0x03
        __asm _emit 0xE8
        // 0x588D6B5F: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D6B63: mov ebp, dword ptr [ebx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xAB
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6B69: add ebp, esi
        __asm _emit 0x03
        __asm _emit 0xEE
        // 0x588D6B6B: cmp dword ptr [esp + 0x1c], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D6B6F: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D6B73: jl 0x588d6c20
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6B79: cmp ecx, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D6B7D: jg 0x588d6c20
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6B83: mov ebp, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588D6B87: cmp ebp, esi
        __asm _emit 0x3B
        __asm _emit 0xEE
        // 0x588D6B89: jl 0x588d6c20
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6B8F: cmp edx, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D6B93: jg 0x588d6c20
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6B99: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588D6B9B: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D6B9F: jg 0x588d6ba5
        __asm _emit 0x7F
        __asm _emit 0x04
        // 0x588D6BA1: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D6BA5: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D6BA9: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D6BAD: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588D6BAF: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D6BB3: jl 0x588d6bb9
        __asm _emit 0x7C
        __asm _emit 0x04
        // 0x588D6BB5: mov dword ptr [esp + 0x28], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D6BB9: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x588D6BBB: jg 0x588d6bbf
        __asm _emit 0x7F
        __asm _emit 0x02
        // 0x588D6BBD: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x588D6BBF: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D6BC3: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x588D6BC5: mov dword ptr [esp + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D6BC9: jl 0x588d6bcf
        __asm _emit 0x7C
        __asm _emit 0x04
        // 0x588D6BCB: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D6BCF: cmp edx, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D6BD3: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x588D6BD5: jge 0x588d6c20
        __asm _emit 0x7D
        __asm _emit 0x49
        // 0x588D6BD7: jmp 0x588d6be0
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x588D6BE0..0x588D6C3B; 91 mapped bytes.
extern "C" __declspec(naked) void FUN_588d6b00_segment_01() {
    __asm {
        // 0x588D6BE0: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D6BE4: cmp esi, dword ptr [esp + 0x28]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D6BE8: jge 0x588d6c17
        __asm _emit 0x7D
        __asm _emit 0x2D
        // 0x588D6BEA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6BF0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D6BF2: push ebp
        __asm _emit 0x55
        // 0x588D6BF3: push esi
        __asm _emit 0x56
        // 0x588D6BF4: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588D6BF6: call 0x588d6960
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D6BFB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D6BFD: je 0x588d6c0e
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588D6BFF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D6C01: push ebp
        __asm _emit 0x55
        // 0x588D6C02: push esi
        __asm _emit 0x56
        // 0x588D6C03: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588D6C05: call 0x588d6960
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D6C0A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D6C0C: jne 0x588d6c2c
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x588D6C0E: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588D6C11: cmp esi, dword ptr [esp + 0x28]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x588D6C15: jl 0x588d6bf0
        __asm _emit 0x7C
        __asm _emit 0xD9
        // 0x588D6C17: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x588D6C1A: cmp ebp, dword ptr [esp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D6C1E: jl 0x588d6be0
        __asm _emit 0x7C
        __asm _emit 0xC0
        // 0x588D6C20: pop esi
        __asm _emit 0x5E
        // 0x588D6C21: pop ebp
        __asm _emit 0x5D
        // 0x588D6C22: pop edi
        __asm _emit 0x5F
        // 0x588D6C23: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D6C25: pop ebx
        __asm _emit 0x5B
        // 0x588D6C26: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x588D6C29: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588D6C2C: pop esi
        __asm _emit 0x5E
        // 0x588D6C2D: pop ebp
        __asm _emit 0x5D
        // 0x588D6C2E: pop edi
        __asm _emit 0x5F
        // 0x588D6C2F: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6C34: pop ebx
        __asm _emit 0x5B
        // 0x588D6C35: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x588D6C38: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
