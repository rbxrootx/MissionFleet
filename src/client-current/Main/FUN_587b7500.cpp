// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B7500 .. +0x7C bytes.
// Source symbol alias: FUN_587b7500.
extern "C" __declspec(naked) void FUN_587b7500() {
    __asm {
        // 0x587B7500: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587B7503: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B7507: push esi
        __asm _emit 0x56
        // 0x587B7508: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B750A: fdiv qword ptr [0x5898cf08]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7510: fstp dword ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B7514: fild dword ptr [esp + 0x1c]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B7518: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x57
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B751D: fstp dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B7521: fld dword ptr [esp + 0x1c]
        __asm _emit 0xD9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B7525: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B7529: fmul qword ptr [0x5899a158]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x58
        __asm _emit 0xA1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B752F: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587B7532: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x587B7534: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x587B7536: fstp dword ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B753A: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B753E: fild dword ptr [esp + 0x24]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B7542: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587B7545: fdiv qword ptr [0x5898cf08]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0x08
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B754B: fstp dword ptr [esp + 0x18]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B754F: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B7553: mov dword ptr [eax + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587B7556: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B7558: call 0x58907820
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x02
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587B755D: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587B755F: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x587B7562: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B7564: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587B7566: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B7568: jne 0x587b7575
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587B756A: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587B756C: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587B756F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587B7571: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B7573: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587B7575: pop esi
        __asm _emit 0x5E
        // 0x587B7576: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587B7579: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
