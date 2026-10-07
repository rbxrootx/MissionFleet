// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588D81A0 .. +0x29 bytes.
// Source symbol alias: FUN_588d81a0.
extern "C" __declspec(naked) void FUN_588d81a0() {
    __asm {
        // 0x588D81A0: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588D81A4: mov dword ptr [ecx + 0x6060], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D81AA: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x588D81AF: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x588D81B1: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D81B4: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588D81B6: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x588D81B9: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D81BB: mov byte ptr [ecx + 0x355], al
        __asm _emit 0x88
        __asm _emit 0x81
        __asm _emit 0x55
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D81C1: call 0x588d8080
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D81C6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
