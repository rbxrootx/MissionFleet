// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B0C10 .. +0x88 bytes.
// Source symbol alias: FUN_587b0c10.
extern "C" __declspec(naked) void FUN_587b0c10() {
    __asm {
        // 0x587B0C10: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587B0C13: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B0C17: push esi
        __asm _emit 0x56
        // 0x587B0C18: push edi
        __asm _emit 0x57
        // 0x587B0C19: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587B0C1B: sub eax, dword ptr [edi + 4]
        __asm _emit 0x2B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587B0C1E: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B0C22: imul eax, eax, 0x56
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x56
        // 0x587B0C25: sub esi, dword ptr [edi + 8]
        __asm _emit 0x2B
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x587B0C28: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B0C2A: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x587B0C2F: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587B0C31: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587B0C34: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587B0C36: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587B0C39: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587B0C3B: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x587B0C3D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B0C3F: imul edx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD0
        // 0x587B0C42: imul ecx, esi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCE
        // 0x587B0C45: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B0C49: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587B0C4B: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B0C4F: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B0C53: fstp qword ptr [esp + 8]
        __asm _emit 0xDD
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B0C57: fild dword ptr [esp + 0x14]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B0C5B: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B0C60: fdivr qword ptr [esp + 8]
        __asm _emit 0xDC
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B0C64: call 0x5897cee0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0xC2
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B0C69: fmul qword ptr [0x5898cf08]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x08
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B0C6F: fdiv qword ptr [0x58997e98]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x7E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B0C75: fmul qword ptr [0x5898cb38]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x38
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B0C7B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B0C7D: jl 0x587b0c85
        __asm _emit 0x7C
        __asm _emit 0x06
        // 0x587B0C7F: fsubr qword ptr [0x58999ea8]
        __asm _emit 0xDC
        __asm _emit 0x2D
        __asm _emit 0xA8
        __asm _emit 0x9E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587B0C85: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xC0
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587B0C8A: mov dword ptr [edi + 0x180], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B0C90: pop edi
        __asm _emit 0x5F
        // 0x587B0C91: pop esi
        __asm _emit 0x5E
        // 0x587B0C92: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587B0C95: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
