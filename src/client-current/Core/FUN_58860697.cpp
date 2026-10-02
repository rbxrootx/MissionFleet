// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58860697 .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_58860697() {
    __asm {
        // 0x58860697: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58860699: mov ecx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x5886069C: cmp ecx, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x5886069F: jne 0x588606a5
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x588606A1: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x588606A4: ret
        __asm _emit 0xC3
        // 0x588606A5: movzx eax, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x01
        // 0x588606A8: inc ecx
        __asm _emit 0x41
        // 0x588606A9: mov dword ptr [edx + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x588606AC: ret
        __asm _emit 0xC3
    }
}
