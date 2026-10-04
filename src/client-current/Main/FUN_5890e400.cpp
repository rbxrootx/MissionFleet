// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890E400 .. +0xD4 bytes.
// Source symbol alias: FUN_5890e400.
extern "C" __declspec(naked) void FUN_5890e400() {
    __asm {
        // 0x5890E400: sub esp, 0x7c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x7C
        // 0x5890E403: push ebx
        __asm _emit 0x53
        // 0x5890E404: mov ebx, dword ptr [esp + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890E40B: push ebp
        __asm _emit 0x55
        // 0x5890E40C: push esi
        __asm _emit 0x56
        // 0x5890E40D: push edi
        __asm _emit 0x57
        // 0x5890E40E: mov edi, dword ptr [esp + 0x90]
        __asm _emit 0x8B
        __asm _emit 0xBC
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890E415: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890E417: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5890E419: mov dword ptr [esi + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x5890E41C: mov dword ptr [esi + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x20
        // 0x5890E41F: mov dword ptr [esi + 0x18], 0x1000000
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5890E426: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x5890E428: je 0x5890e4bc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890E42E: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x5890E430: je 0x5890e4bc
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890E436: push 0x7c
        __asm _emit 0x6A
        __asm _emit 0x7C
        // 0x5890E438: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890E43C: push ebp
        __asm _emit 0x55
        // 0x5890E43D: push eax
        __asm _emit 0x50
        // 0x5890E43E: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x05
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5890E443: mov ecx, dword ptr [esp + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890E44A: mov eax, dword ptr [0x58a28504]
        __asm _emit 0xA1
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5890E44F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5890E452: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5890E456: push ebp
        __asm _emit 0x55
        // 0x5890E457: mov dword ptr [esp + 0x7c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x5890E45B: lea edi, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x5890E45E: push edi
        __asm _emit 0x57
        // 0x5890E45F: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5890E463: mov dword ptr [esp + 0x18], 0x7c
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890E46B: mov dword ptr [esp + 0x1c], 7
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890E473: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5890E477: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5890E479: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x5890E47C: push ecx
        __asm _emit 0x51
        // 0x5890E47D: push eax
        __asm _emit 0x50
        // 0x5890E47E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890E480: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890E482: je 0x5890e492
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5890E484: mov dword ptr [edi], ebp
        __asm _emit 0x89
        __asm _emit 0x2F
        // 0x5890E486: pop edi
        __asm _emit 0x5F
        // 0x5890E487: pop esi
        __asm _emit 0x5E
        // 0x5890E488: pop ebp
        __asm _emit 0x5D
        // 0x5890E489: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890E48B: pop ebx
        __asm _emit 0x5B
        // 0x5890E48C: add esp, 0x7c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x7C
        // 0x5890E48F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5890E492: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5890E494: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890E496: call 0x5890e0b0
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890E49B: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x5890E49D: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x5890E49F: je 0x5890e4ad
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5890E4A1: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5890E4A3: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890E4A9: push ebp
        __asm _emit 0x55
        // 0x5890E4AA: push edi
        __asm _emit 0x57
        // 0x5890E4AB: call ecx
        __asm _emit 0xFF
        __asm _emit 0xD1
        // 0x5890E4AD: pop edi
        __asm _emit 0x5F
        // 0x5890E4AE: pop esi
        __asm _emit 0x5E
        // 0x5890E4AF: pop ebp
        __asm _emit 0x5D
        // 0x5890E4B0: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890E4B5: pop ebx
        __asm _emit 0x5B
        // 0x5890E4B6: add esp, 0x7c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x7C
        // 0x5890E4B9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5890E4BC: pop edi
        __asm _emit 0x5F
        // 0x5890E4BD: mov dword ptr [esi + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x04
        // 0x5890E4C0: mov dword ptr [esi + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x08
        // 0x5890E4C3: mov dword ptr [esi + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x5890E4C6: mov dword ptr [esi + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x5890E4C9: pop esi
        __asm _emit 0x5E
        // 0x5890E4CA: pop ebp
        __asm _emit 0x5D
        // 0x5890E4CB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890E4CD: pop ebx
        __asm _emit 0x5B
        // 0x5890E4CE: add esp, 0x7c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x7C
        // 0x5890E4D1: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
