// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589724B0 .. +0x4F bytes.
// Source symbol alias: FUN_589724b0.
extern "C" __declspec(naked) void FUN_589724b0() {
    __asm {
        // 0x589724B0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589724B4: push esi
        __asm _emit 0x56
        // 0x589724B5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589724B7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x589724B9: jg 0x589724c4
        __asm _emit 0x7F
        __asm _emit 0x09
        // 0x589724BB: mov eax, 0x60
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589724C0: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x589724C4: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x589724C8: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x589724CB: mov dword ptr [esi + 0x168], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589724D1: fmul qword ptr [0x589a3048]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x48
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589724D7: fadd qword ptr [0x5898cf60]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x60
        __asm _emit 0xCF
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x589724DD: fstp qword ptr [esp]
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x589724E0: call dword ptr [0x5898c354]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x589724E6: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x589724E9: call 0x5897d5d0
        __asm _emit 0xE8
        __asm _emit 0xE2
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589724EE: mov dword ptr [esi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x589724F1: mov esi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x04
        // 0x589724F4: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x589724F6: je 0x589724fb
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x589724F8: mov dword ptr [esi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x589724FB: pop esi
        __asm _emit 0x5E
        // 0x589724FC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
