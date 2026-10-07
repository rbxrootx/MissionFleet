// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D6C40 .. +0x44 bytes.
// Source symbol alias: FUN_588d6c40.
extern "C" __declspec(naked) void FUN_588d6c40() {
    __asm {
        // 0x588D6C40: mov ax, word ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588D6C45: mov dx, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588D6C4A: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x588D6C4E: jne 0x588d6c5c
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588D6C50: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x588D6C53: mov eax, dword ptr [ecx + eax*8 + 0x1420]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6C5A: jmp 0x588d6c73
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x588D6C5C: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x588D6C60: jne 0x588d6c6e
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588D6C62: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x588D6C65: mov eax, dword ptr [ecx + eax*8 + 0x1424]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6C6C: jmp 0x588d6c73
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588D6C6E: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6C73: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588D6C76: je 0x588d6c81
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588D6C78: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D6C7A: jne 0x588d6c81
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588D6C7C: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6C81: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
