// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584ACFC0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_584acfc0_584ACFC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes F3 0F 5A 45 08: cvtss2sd xmm0, dword ptr [ebp + 8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5a
        __asm _emit 0x45
        __asm _emit 0x08
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 3A 42 3A 00: call 0x58851210
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x42
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes D9 5D FC: fstp dword ptr [ebp - 4]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xfc
        ; Exact mapped bytes D9 45 FC: fld dword ptr [ebp - 4]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0xfc
        mov esp, ebp
        pop ebp
        ret
    }
}
