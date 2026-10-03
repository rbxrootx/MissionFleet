// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58972500 .. +0x4F bytes.
// Source symbol alias: FUN_58972500.
extern "C" __declspec(naked) void FUN_58972500() {
    __asm {
        // 0x58972500: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58972504: push esi
        __asm _emit 0x56
        // 0x58972505: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58972507: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58972509: jg 0x58972514
        __asm _emit 0x7F
        __asm _emit 0x09
        // 0x5897250B: mov eax, 0x60
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972510: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58972514: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58972518: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5897251B: mov dword ptr [esi + 0x16c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972521: fmul qword ptr [0x589a3048]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58972527: fadd qword ptr [0x5898cf60]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897252D: fstp qword ptr [esp]
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x58972530: call dword ptr [0x5898c354]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58972536: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58972539: call 0x5897d5d0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897253E: mov dword ptr [esi + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58972541: mov esi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x58972544: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58972546: je 0x5897254b
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x58972548: mov dword ptr [esi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x5897254B: pop esi
        __asm _emit 0x5E
        // 0x5897254C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
