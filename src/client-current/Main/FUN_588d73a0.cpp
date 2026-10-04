// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D73A0 .. +0x28 bytes.
// Source symbol alias: FUN_588d73a0.
extern "C" __declspec(naked) void FUN_588d73a0() {
    __asm {
        // 0x588D73A0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588D73A4: cmp eax, 0x1be
        __asm _emit 0x3D
        __asm _emit 0xBE
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D73A9: ja 0x588d73b7
        __asm _emit 0x77
        __asm _emit 0x0C
        // 0x588D73AB: je 0x588d73c3
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588D73AD: cmp eax, 0x27
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x27
        // 0x588D73B0: je 0x588d73c3
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588D73B2: cmp eax, 0x59
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x59
        // 0x588D73B5: jmp 0x588d73bc
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588D73B7: cmp eax, 0x20b
        __asm _emit 0x3D
        __asm _emit 0x0B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D73BC: je 0x588d73c3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588D73BE: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x588D73C0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588D73C3: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x588D73C5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
