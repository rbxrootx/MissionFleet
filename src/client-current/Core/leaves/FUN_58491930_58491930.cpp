// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58491930 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_58491930_58491930() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes F2 0F 2A 45 10: cvtsi2sd xmm0, dword ptr [ebp + 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x10
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 45 08: movsd xmm0, qword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 DE F6 3B 00: call 0x58851030
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf6
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 10h
        pop ebp
        ret
    }
}
