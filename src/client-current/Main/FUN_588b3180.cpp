// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 73 bytes in 1 exact ranges.
// Source symbol alias: FUN_588b3180.

// Ghidra body range 0x588B3180..0x588B31C9; 73 mapped bytes.
extern "C" __declspec(naked) void FUN_588b3180_segment_00() {
    __asm {
        // 0x588B3180: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588B3184: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3189: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x588B318C: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B3191: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588B3194: jne 0x588b31ab
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x588B3196: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588B3198: mov dword ptr [ecx + 0x124], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B319E: mov dword ptr [ecx + 0x120], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B31A4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588B31A6: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588B31A9: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
        // 0x588B31AB: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588B31AF: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B31B4: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x588B31B7: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B31BC: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588B31BF: jne 0x588b31c8
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588B31C1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588B31C3: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588B31C6: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
        // 0x588B31C8: ret
        __asm _emit 0xC3
    }
}
