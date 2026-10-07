// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 164 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a85e0.

// Ghidra body range 0x587A85E0..0x587A8684; 164 mapped bytes.
extern "C" __declspec(naked) void FUN_587a85e0_segment_00() {
    __asm {
        // 0x587A85E0: push ecx
        __asm _emit 0x51
        // 0x587A85E1: push ebx
        __asm _emit 0x53
        // 0x587A85E2: push ebp
        __asm _emit 0x55
        // 0x587A85E3: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587A85E5: push esi
        __asm _emit 0x56
        // 0x587A85E6: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A85EA: mov ebp, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A85F0: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A85F6: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A85FC: mov dword ptr [esi + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8602: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8608: cmp esi, dword ptr [ecx + 4]
        __asm _emit 0x3B
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x587A860B: push edi
        __asm _emit 0x57
        // 0x587A860C: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x587A860F: mov byte ptr [esi + 0x9c], al
        __asm _emit 0x88
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8615: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x587A8618: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A861C: cmp edi, dword ptr [ebp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x587A861F: jbe 0x587a8626
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A8621: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x46
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8626: mov ebp, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x00
        // 0x587A8629: cmp byte ptr [esi + 0xa], bl
        __asm _emit 0x38
        __asm _emit 0x5E
        __asm _emit 0x0A
        // 0x587A862C: je 0x587a8672
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x587A862E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x587A8630: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A8632: jne 0x587a867a
        __asm _emit 0x75
        __asm _emit 0x46
        // 0x587A8634: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8639: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A863B: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587A863E: jb 0x587a8645
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8640: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0x46
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8645: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587A8647: push ecx
        __asm _emit 0x51
        // 0x587A8648: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A864C: call 0x587a85e0
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A8651: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A8653: jne 0x587a867f
        __asm _emit 0x75
        __asm _emit 0x2A
        // 0x587A8655: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x46
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A865A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A865C: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587A865F: jb 0x587a8666
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587A8661: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x46
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8666: movzx edx, byte ptr [esi + 0xa]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x56
        __asm _emit 0x0A
        // 0x587A866A: inc ebx
        __asm _emit 0x43
        // 0x587A866B: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587A866E: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x587A8670: jne 0x587a8630
        __asm _emit 0x75
        __asm _emit 0xBE
        // 0x587A8672: pop edi
        __asm _emit 0x5F
        // 0x587A8673: pop esi
        __asm _emit 0x5E
        // 0x587A8674: pop ebp
        __asm _emit 0x5D
        // 0x587A8675: pop ebx
        __asm _emit 0x5B
        // 0x587A8676: pop ecx
        __asm _emit 0x59
        // 0x587A8677: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A867A: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587A867D: jmp 0x587a863b
        __asm _emit 0xEB
        __asm _emit 0xBC
        // 0x587A867F: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587A8682: jmp 0x587a865c
        __asm _emit 0xEB
        __asm _emit 0xD8
    }
}
