// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004CCA0 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_1004cca0_1004CCA0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push 0
        lea edx, [eax*8]
        push edx
        mov edx, dword ptr [esp + 14h]
        push edx
        push eax
        mov eax, dword ptr [esp + 14h]
        push eax
        push 80010f12h
        ; Exact mapped bytes E8 8D F2 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf2
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
