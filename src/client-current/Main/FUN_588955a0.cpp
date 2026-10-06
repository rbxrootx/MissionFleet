// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588955A0 .. +0x101 bytes.
// Source symbol alias: FUN_588955a0.
extern "C" __declspec(naked) void FUN_588955a0() {
    __asm {
        // 0x588955A0: push ebx
        __asm _emit 0x53
        // 0x588955A1: mov ebx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588955A5: mov eax, 0x66666667
        __asm _emit 0xB8
        __asm _emit 0x67
        __asm _emit 0x66
        __asm _emit 0x66
        __asm _emit 0x66
        // 0x588955AA: imul ebx
        __asm _emit 0xF7
        __asm _emit 0xEB
        // 0x588955AC: sar edx, 1
        __asm _emit 0xD1
        __asm _emit 0xFA
        // 0x588955AE: push ebp
        __asm _emit 0x55
        // 0x588955AF: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588955B3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588955B5: push esi
        __asm _emit 0x56
        // 0x588955B6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588955B8: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588955BB: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588955BD: push edi
        __asm _emit 0x57
        // 0x588955BE: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588955C2: lea ecx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x40
        // 0x588955C5: mov dword ptr [esi + 0xb8], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588955CB: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588955D1: lea edx, [eax + eax]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588955D4: push edi
        __asm _emit 0x57
        // 0x588955D5: mov dword ptr [esi + 0xb4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588955DF: mov dword ptr [esi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588955E5: mov dword ptr [esi + 0x90], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588955EB: mov dword ptr [esi + 0xa4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588955F1: mov dword ptr [esi + 0xb0], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588955FB: mov dword ptr [esi + 0xbc], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895601: mov dword ptr [esi + 0xc0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895607: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0x1D
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5889560C: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895612: push ebx
        __asm _emit 0x53
        // 0x58895613: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0x1D
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58895618: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5889561B: push ebx
        __asm _emit 0x53
        // 0x5889561C: push edi
        __asm _emit 0x57
        // 0x5889561D: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x91
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58895622: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x58895624: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58895626: jne 0x5889562d
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x58895628: mov eax, 0x2710
        __asm _emit 0xB8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889562D: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58895630: push eax
        __asm _emit 0x50
        // 0x58895631: push ebp
        __asm _emit 0x55
        // 0x58895632: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x91
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58895637: mov eax, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889563D: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58895640: push eax
        __asm _emit 0x50
        // 0x58895641: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58895643: call 0x5877e7a0
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x91
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58895648: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5889564A: imul eax, eax, 0x373
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895650: cdq
        __asm _emit 0x99
        // 0x58895651: mov dword ptr [esi + 0x94], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895657: mov dword ptr [esi + 0x9c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889565D: mov dword ptr [esi + 0x98], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895663: mov dword ptr [esi + 0xa0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895669: idiv dword ptr [esi + 0xa8]
        __asm _emit 0xF7
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889566F: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58895672: add eax, 0x7e
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x7E
        // 0x58895675: push eax
        __asm _emit 0x50
        // 0x58895676: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xDC
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889567B: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895681: imul eax, eax, 0x373
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895687: cdq
        __asm _emit 0x99
        // 0x58895688: idiv dword ptr [esi + 0xa8]
        __asm _emit 0xF7
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889568E: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58895691: add eax, 0x7e
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x7E
        // 0x58895694: push eax
        __asm _emit 0x50
        // 0x58895695: call 0x589032e0
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xDC
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889569A: pop edi
        __asm _emit 0x5F
        // 0x5889569B: pop esi
        __asm _emit 0x5E
        // 0x5889569C: pop ebp
        __asm _emit 0x5D
        // 0x5889569D: pop ebx
        __asm _emit 0x5B
        // 0x5889569E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
