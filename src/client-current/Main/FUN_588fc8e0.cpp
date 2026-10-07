// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 72 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fc8e0.

// Ghidra body range 0x588FC8E0..0x588FC928; 72 mapped bytes.
extern "C" __declspec(naked) void FUN_588fc8e0_segment_00() {
    __asm {
        // 0x588FC8E0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC8E2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FC8E4: mov word ptr [ecx + 0x94], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC8EB: mov dword ptr [ecx + 0x98], 1
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC8F5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC8F7: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC8FC: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588FC900: mov eax, 0x7d
        __asm _emit 0xB8
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC905: mov word ptr [ecx + 0x94], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC90C: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FC910: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC912: push ecx
        __asm _emit 0x51
        // 0x588FC913: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC919: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC91B: push 0x80015101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x588FC920: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x43
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FC925: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
