// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 153 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fd790.

// Ghidra body range 0x588FD790..0x588FD829; 153 mapped bytes.
extern "C" __declspec(naked) void FUN_588fd790_segment_00() {
    __asm {
        // 0x588FD790: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x588FD793: push esi
        __asm _emit 0x56
        // 0x588FD794: push edi
        __asm _emit 0x57
        // 0x588FD795: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588FD799: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FD79B: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD7A1: push edi
        __asm _emit 0x57
        // 0x588FD7A2: call 0x588fea10
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD7A7: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588FD7A9: jne 0x588fd819
        __asm _emit 0x75
        __asm _emit 0x6E
        // 0x588FD7AB: lea eax, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FD7AF: push eax
        __asm _emit 0x50
        // 0x588FD7B0: call 0x587950d0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x79
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588FD7B5: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FD7B9: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FD7BD: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x588FD7C0: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x588FD7C2: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x588FD7C4: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FD7C8: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FD7CB: mov edx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x588FD7CF: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588FD7D2: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD7D8: push edi
        __asm _emit 0x57
        // 0x588FD7D9: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x588FD7DC: call 0x588fea30
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD7E1: push edi
        __asm _emit 0x57
        // 0x588FD7E2: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588FD7E4: je 0x588fd81a
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x588FD7E6: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588FD7E9: mov dword ptr [esi + 0x90], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD7EF: call 0x588ff530
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD7F4: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FD7F7: push edi
        __asm _emit 0x57
        // 0x588FD7F8: call 0x588fe9c0
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD7FD: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD803: push edi
        __asm _emit 0x57
        // 0x588FD804: call 0x588feb10
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FD809: push eax
        __asm _emit 0x50
        // 0x588FD80A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD80C: call 0x588fb8e0
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0xE0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD811: pop edi
        __asm _emit 0x5F
        // 0x588FD812: pop esi
        __asm _emit 0x5E
        // 0x588FD813: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FD816: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588FD819: push edi
        __asm _emit 0x57
        // 0x588FD81A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FD81C: call 0x588fc8e0
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FD821: pop edi
        __asm _emit 0x5F
        // 0x588FD822: pop esi
        __asm _emit 0x5E
        // 0x588FD823: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FD826: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
