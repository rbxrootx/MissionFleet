// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876BF40 .. +0x33 bytes.
// Source symbol alias: FUN_5876bf40.
extern "C" __declspec(naked) void FUN_5876bf40() {
    __asm {
        // 0x5876BF40: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5876BF44: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5876BF46: je 0x5876bf70
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5876BF48: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5876BF4C: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5876BF4E: jle 0x5876bf52
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x5876BF50: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5876BF52: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876BF58: cdq
        __asm _emit 0x99
        // 0x5876BF59: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x5876BF5B: mov eax, dword ptr [eax*4 + 0x58a15d98]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x5D
        __asm _emit 0xA1
        __asm _emit 0x58
        // 0x5876BF62: imul eax, dword ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5876BF67: cdq
        __asm _emit 0x99
        // 0x5876BF68: idiv dword ptr [0x58a16d34]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0x34
        __asm _emit 0x6D
        __asm _emit 0xA1
        __asm _emit 0x58
        // 0x5876BF6E: inc eax
        __asm _emit 0x40
        // 0x5876BF6F: ret
        __asm _emit 0xC3
        // 0x5876BF70: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876BF72: ret
        __asm _emit 0xC3
    }
}
