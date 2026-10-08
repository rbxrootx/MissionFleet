// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 149 bytes in 1 exact ranges.
// Source symbol alias: FUN_5876ccc0.

// Ghidra body range 0x5876CCC0..0x5876CD55; 149 mapped bytes.
extern "C" __declspec(naked) void FUN_5876ccc0_segment_00() {
    __asm {
        // 0x5876CCC0: push ecx
        __asm _emit 0x51
        // 0x5876CCC1: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876CCC7: push ebx
        __asm _emit 0x53
        // 0x5876CCC8: push esi
        __asm _emit 0x56
        // 0x5876CCC9: push edi
        __asm _emit 0x57
        // 0x5876CCCA: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5876CCCC: cmp dword ptr [ecx + 0x1c], edi
        __asm _emit 0x39
        __asm _emit 0x79
        __asm _emit 0x1C
        // 0x5876CCCF: mov byte ptr [esp + 0xc], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x01
        // 0x5876CCD4: mov byte ptr [esp + 0xd], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5876CCD9: jle 0x5876cd0a
        __asm _emit 0x7E
        __asm _emit 0x2F
        // 0x5876CCDB: mov bx, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876CCE0: mov word ptr [esp + 0xe], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0E
        // 0x5876CCE5: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876CCE9: push eax
        __asm _emit 0x50
        // 0x5876CCEA: call 0x58778b20
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CCEF: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5876CCF1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5876CCF3: je 0x5876ccfe
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5876CCF5: cmp word ptr [esi + 0x35e], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x5E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CCFC: je 0x5876cd11
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5876CCFE: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876CD04: inc edi
        __asm _emit 0x47
        // 0x5876CD05: cmp edi, dword ptr [ecx + 0x1c]
        __asm _emit 0x3B
        __asm _emit 0x79
        __asm _emit 0x1C
        // 0x5876CD08: jl 0x5876cce0
        __asm _emit 0x7C
        __asm _emit 0xD6
        // 0x5876CD0A: pop edi
        __asm _emit 0x5F
        // 0x5876CD0B: pop esi
        __asm _emit 0x5E
        // 0x5876CD0C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876CD0E: pop ebx
        __asm _emit 0x5B
        // 0x5876CD0F: pop ecx
        __asm _emit 0x59
        // 0x5876CD10: ret
        __asm _emit 0xC3
        // 0x5876CD11: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x5876CD13: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876CD15: push 0x589cfc60
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5876CD1A: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xFF
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5876CD1F: mov cx, word ptr [esi + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5876CD23: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5876CD27: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x5876CD2A: push 0x589cfc60
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5876CD2F: push edx
        __asm _emit 0x52
        // 0x5876CD30: call 0x5876ca70
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876CD35: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5876CD38: add esi, 0x33c
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876CD3E: push esi
        __asm _emit 0x56
        // 0x5876CD3F: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x5876CD41: push 0x589cfc60
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5876CD46: call 0x58731bd0
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x4E
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x5876CD4B: pop edi
        __asm _emit 0x5F
        // 0x5876CD4C: pop esi
        __asm _emit 0x5E
        // 0x5876CD4D: mov eax, 0x589cfc60
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5876CD52: pop ebx
        __asm _emit 0x5B
        // 0x5876CD53: pop ecx
        __asm _emit 0x59
        // 0x5876CD54: ret
        __asm _emit 0xC3
    }
}
