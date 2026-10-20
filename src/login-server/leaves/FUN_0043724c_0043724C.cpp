// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043724C .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_0043724c_0043724C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 D4 C0 43 00: call dword ptr [0x43c0d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 C8 C0 43 00: call dword ptr [0x43c0c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push 1
        pop eax
        cmp eax, dword ptr [ebp - 14h]
        sbb eax, eax
        neg eax
        leave
        ret
    }
}
