// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873A6A0 .. +0x27 bytes.
// Source symbol alias: FUN_5873a6a0.
extern "C" __declspec(naked) void FUN_5873a6a0() {
    __asm {
        // 0x5873A6A0: mov eax, dword ptr [ecx + 0x6104]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A6A6: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5873A6AA: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A6AF: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5873A6B2: mov dl, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5873A6B6: and dl, 1
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x01
        // 0x5873A6B9: movzx dx, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x5873A6BD: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xCA
        // 0x5873A6C0: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5873A6C4: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
