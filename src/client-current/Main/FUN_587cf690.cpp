// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587CF690 .. +0x3B bytes.
// Source symbol alias: FUN_587cf690.
extern "C" __declspec(naked) void FUN_587cf690() {
    __asm {
        // 0x587CF690: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587CF695: movzx edx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x587CF698: mov word ptr [ecx + 0xa06], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF69F: mov dx, word ptr [edx*2 + 0x589c3e2e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x55
        __asm _emit 0x2E
        __asm _emit 0x3E
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CF6A7: mov word ptr [ecx + 0xd8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF6AE: mov edx, dword ptr [ecx + 0x7a4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF6B4: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587CF6B6: je 0x587cf6c8
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587CF6B8: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x587CF6BB: dec eax
        __asm _emit 0x48
        // 0x587CF6BC: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x587CF6BF: mov ecx, dword ptr [ecx + 0x7a8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CF6C5: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587CF6C8: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
