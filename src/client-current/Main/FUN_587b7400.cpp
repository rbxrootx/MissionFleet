// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B7400 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_587b7400() {
    __asm {
        // 0x587B7400: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B7404: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587B7407: add eax, 0x27f
        __asm _emit 0x05
        __asm _emit 0x7F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B740C: push esi
        __asm _emit 0x56
        // 0x587B740D: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B740F: cmp eax, 0x4fe
        __asm _emit 0x3D
        __asm _emit 0xFE
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7414: ja 0x587b74ee
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B741A: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B741E: add ecx, 0x1ff
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7424: cmp ecx, 0x3fe
        __asm _emit 0x81
        __asm _emit 0xF9
        __asm _emit 0xFE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B742A: ja 0x587b74ee
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7430: cmp dword ptr [esi + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B7434: je 0x587b748a
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x587B7436: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B743A: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587B743D: fld qword ptr [0x5898cf08]
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B7443: mov eax, esp
        __asm _emit 0x8B
        __asm _emit 0xC4
        // 0x587B7445: fdiv st(1), st(0)
        __asm _emit 0xDC
        __asm _emit 0xF9
        // 0x587B7447: fxch st(1)
        __asm _emit 0xD9
        __asm _emit 0xC9
        // 0x587B7449: fstp dword ptr [esp + 0x10]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B744D: fild dword ptr [esp + 0x28]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587B7451: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B7455: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587B7457: fstp dword ptr [esp + 0x14]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B745B: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B745F: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587B7462: fidivr dword ptr [esp + 0x24]
        __asm _emit 0xDA
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B7466: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B7468: fstp dword ptr [esp + 0x18]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B746C: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B7470: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587B7473: call 0x58907820
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587B7478: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587B747A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587B747D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B747F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B7481: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587B7483: pop esi
        __asm _emit 0x5E
        // 0x587B7484: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587B7487: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587B748A: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B748E: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x587B7491: jg 0x587b74bd
        __asm _emit 0x7F
        __asm _emit 0x2A
        // 0x587B7493: je 0x587b74b6
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x587B7495: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x587B7498: je 0x587b74b2
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587B749A: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587B749D: je 0x587b74ab
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587B749F: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x03
        // 0x587B74A2: jne 0x587b74c7
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x587B74A4: push 0xfffff9c0
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B74A9: jmp 0x587b74da
        __asm _emit 0xEB
        __asm _emit 0x2F
        // 0x587B74AB: push 0xfffffce0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B74B0: jmp 0x587b74da
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x587B74B2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B74B4: jmp 0x587b74da
        __asm _emit 0xEB
        __asm _emit 0x24
        // 0x587B74B6: push 0xfffff6a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B74BB: jmp 0x587b74da
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x587B74BD: cmp eax, 0x10
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x587B74C0: je 0x587b74d5
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587B74C2: cmp eax, 0x19
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x19
        // 0x587B74C5: je 0x587b74ce
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587B74C7: push 0xffffd8f0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0xD8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B74CC: jmp 0x587b74da
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x587B74CE: push 0xfffff060
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B74D3: jmp 0x587b74da
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x587B74D5: push 0xfffff380
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B74DA: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587B74DC: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587B74DF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B74E1: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587B74E3: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587B74E5: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587B74E8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B74EA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B74EC: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587B74EE: pop esi
        __asm _emit 0x5E
        // 0x587B74EF: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587B74F2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
