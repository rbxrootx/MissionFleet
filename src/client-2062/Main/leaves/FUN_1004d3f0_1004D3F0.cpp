// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004D3F0 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_1004d3f0_1004D3F0() {
    __asm {
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 10h]
        push 0
        push eax
        mov eax, dword ptr [esp + 0ch]
        push edx
        mov edx, dword ptr [esp + 14h]
        and eax, 0ffffh
        shl eax, 10h
        and edx, 0ffffh
        push 0
        or eax, edx
        push eax
        push 80020a00h
        ; Exact mapped bytes E8 2F EB 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xeb
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
