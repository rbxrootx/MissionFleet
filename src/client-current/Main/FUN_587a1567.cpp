// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A1567 .. +0x78 bytes.
// Source symbol alias: FUN_587a1567.
extern "C" __declspec(naked) void FUN_587a1567() {
    __asm {
        // 0x587A1567: push ebx
        __asm _emit 0x53
        // 0x587A1568: push ebp
        __asm _emit 0x55
        // 0x587A1569: push esi
        __asm _emit 0x56
        // 0x587A156A: push edi
        __asm _emit 0x57
        // 0x587A156B: lea esi, [ecx + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x74
        // 0x587A156E: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A1572: push eax
        __asm _emit 0x50
        // 0x587A1573: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587A1577: push ecx
        __asm _emit 0x51
        // 0x587A1578: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A157A: call 0x58743af0
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x25
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587A157F: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x587A1581: mov ebp, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x18
        // 0x587A1584: mov ebx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x587A1587: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x587A1589: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A158B: je 0x587a1591
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587A158D: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x587A158F: je 0x587a1596
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587A1591: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xB6
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A1596: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x587A1598: jne 0x587a15a6
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x587A159A: pop edi
        __asm _emit 0x5F
        // 0x587A159B: pop esi
        __asm _emit 0x5E
        // 0x587A159C: pop ebp
        __asm _emit 0x5D
        // 0x587A159D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A159F: pop ebx
        __asm _emit 0x5B
        // 0x587A15A0: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A15A3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A15A6: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587A15A8: jne 0x587a15db
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x587A15AA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xB6
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A15AF: cmp ebx, dword ptr [edi + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x5F
        __asm _emit 0x18
        // 0x587A15B2: jne 0x587a15b9
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x587A15B4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xB6
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A15B9: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A15BD: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A15C1: push edx
        __asm _emit 0x52
        // 0x587A15C2: add ecx, 0x54
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x54
        // 0x587A15C5: call 0x587a1330
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A15CA: pop edi
        __asm _emit 0x5F
        // 0x587A15CB: pop esi
        __asm _emit 0x5E
        // 0x587A15CC: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587A15CE: mov eax, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x587A15D1: xor eax, dword ptr [ecx]
        __asm _emit 0x33
        __asm _emit 0x01
        // 0x587A15D3: pop ebp
        __asm _emit 0x5D
        // 0x587A15D4: pop ebx
        __asm _emit 0x5B
        // 0x587A15D5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A15D8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A15DB: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x587A15DD: jmp 0x587a15af
        __asm _emit 0xEB
        __asm _emit 0xD0
    }
}
