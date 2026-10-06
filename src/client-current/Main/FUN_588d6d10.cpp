// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D6D10 .. +0x3B bytes.
// Source symbol alias: FUN_588d6d10.
extern "C" __declspec(naked) void FUN_588d6d10() {
    __asm {
        // 0x588D6D10: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588D6D15: mov eax, dword ptr [ecx + 0x12c0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6D1B: je 0x588d6d33
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588D6D1D: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6D22: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588D6D26: mov ecx, dword ptr [ecx + 0x12c4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6D2C: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588D6D30: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588D6D33: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6D38: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588D6D3C: mov ecx, dword ptr [ecx + 0x12c4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D6D42: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D6D44: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588D6D48: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
