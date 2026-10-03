// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897CCA0 .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_5897cca0() {
    __asm {
        // 0x5897CCA0: cmp dword ptr [0x58a289a4], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0x89
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5897CCA7: je 0x5897ccd6
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x5897CCA9: push ebp
        __asm _emit 0x55
        // 0x5897CCAA: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5897CCAC: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5897CCAF: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x5897CCB2: fstp qword ptr [esp]
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x5897CCB5: cvttsd2si eax, qword ptr [esp]
        __asm _emit 0xF2
        __asm _emit 0x0F
        __asm _emit 0x2C
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x5897CCBA: leave
        __asm _emit 0xC9
        // 0x5897CCBB: ret
        __asm _emit 0xC3
        // 0x5897CCBC: cmp dword ptr [0x58a289a4], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0x89
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5897CCC3: je 0x5897ccd6
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5897CCC5: sub esp, 4
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x04
        // 0x5897CCC8: fnstcw word ptr [esp]
        __asm _emit 0xD9
        __asm _emit 0x3C
        __asm _emit 0x24
        // 0x5897CCCB: pop eax
        __asm _emit 0x58
        // 0x5897CCCC: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x7F
        // 0x5897CCD0: cmp ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x7F
        // 0x5897CCD4: je 0x5897cca9
        __asm _emit 0x74
        __asm _emit 0xD3
        // 0x5897CCD6: push ebp
        __asm _emit 0x55
        // 0x5897CCD7: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5897CCD9: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x5897CCDC: and esp, 0xfffffff0
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF0
        // 0x5897CCDF: fld st(0)
        __asm _emit 0xD9
        __asm _emit 0xC0
        // 0x5897CCE1: fst dword ptr [esp + 0x18]
        __asm _emit 0xD9
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5897CCE5: fistp qword ptr [esp + 0x10]
        __asm _emit 0xDF
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897CCE9: fild qword ptr [esp + 0x10]
        __asm _emit 0xDF
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897CCED: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5897CCF1: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897CCF5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897CCF7: je 0x5897cd35
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5897CCF9: fsubp st(1)
        __asm _emit 0xDE
        __asm _emit 0xE9
        // 0x5897CCFB: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5897CCFD: jns 0x5897cd1d
        __asm _emit 0x79
        __asm _emit 0x1E
        // 0x5897CCFF: fstp dword ptr [esp]
        __asm _emit 0xD9
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x5897CD02: mov ecx, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x24
        // 0x5897CD05: xor ecx, 0x80000000
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x5897CD0B: add ecx, 0x7fffffff
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5897CD11: adc eax, 0
        __asm _emit 0x83
        __asm _emit 0xD0
        __asm _emit 0x00
        // 0x5897CD14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897CD18: adc edx, 0
        __asm _emit 0x83
        __asm _emit 0xD2
        __asm _emit 0x00
        // 0x5897CD1B: jmp 0x5897cd49
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x5897CD1D: fstp dword ptr [esp]
        __asm _emit 0xD9
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x5897CD20: mov ecx, dword ptr [esp]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x24
        // 0x5897CD23: add ecx, 0x7fffffff
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5897CD29: sbb eax, 0
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0x00
        // 0x5897CD2C: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897CD30: sbb edx, 0
        __asm _emit 0x83
        __asm _emit 0xDA
        __asm _emit 0x00
        // 0x5897CD33: jmp 0x5897cd49
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x5897CD35: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5897CD39: test edx, 0x7fffffff
        __asm _emit 0xF7
        __asm _emit 0xC2
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5897CD3F: jne 0x5897ccf9
        __asm _emit 0x75
        __asm _emit 0xB8
        // 0x5897CD41: fstp dword ptr [esp + 0x18]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5897CD45: fstp dword ptr [esp + 0x18]
        __asm _emit 0xD9
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5897CD49: leave
        __asm _emit 0xC9
        // 0x5897CD4A: ret
        __asm _emit 0xC3
    }
}
