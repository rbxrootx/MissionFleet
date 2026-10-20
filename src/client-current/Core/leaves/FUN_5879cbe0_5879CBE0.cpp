// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879CBE0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_5879cbe0_5879CBE0() {
    __asm {
        push ecx
        push dword ptr [esp + 18h]
        ; Exact mapped bytes F2 0F 10 44 24 10: movsd xmm0, qword ptr [esp + 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        push dword ptr [esp + 18h]
        push 0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        push dword ptr [esp + 1ch]
        ; Exact mapped bytes E8 2E FD FF FF: call 0x5879c930
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 20h]
        add esp, 1ch
        ret
    }
}
