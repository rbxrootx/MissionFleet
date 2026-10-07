// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58888970 .. +0x51 bytes.
// Source symbol alias: FUN_58888970.
extern "C" __declspec(naked) void FUN_58888970() {
    __asm {
        // 0x58888970: cmp dword ptr [0x589cd0f0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xF0
        __asm _emit 0xD0
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58888977: je 0x5888899d
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x58888979: mov eax, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x5888897C: mov ecx, dword ptr [ecx + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888982: push 0x589cd0d4
        __asm _emit 0x68
        __asm _emit 0xD4
        __asm _emit 0xD0
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58888987: push 0x589cd0b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0xD0
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5888898C: push eax
        __asm _emit 0x50
        // 0x5888898D: call 0x5874fbd0
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0x72
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x58888992: mov dword ptr [0x589cd0f0], 0
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0xF0
        __asm _emit 0xD0
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888899C: ret
        __asm _emit 0xC3
        // 0x5888899D: mov edx, dword ptr [ecx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x60
        // 0x588889A0: mov ecx, dword ptr [ecx + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588889A6: push 0x589cd09c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0xD0
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588889AB: push 0x589cd080
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xD0
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588889B0: push edx
        __asm _emit 0x52
        // 0x588889B1: call 0x5874fbd0
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x72
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588889B6: mov dword ptr [0x589cd0f0], 1
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0xF0
        __asm _emit 0xD0
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588889C0: ret
        __asm _emit 0xC3
    }
}
