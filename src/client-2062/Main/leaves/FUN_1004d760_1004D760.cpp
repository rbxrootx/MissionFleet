// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004D760 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_1004d760_1004D760() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 0ch]
        and eax, 0ffffh
        and edx, 0ffffh
        shl eax, 10h
        push 0
        push 0
        or eax, edx
        push 0
        push eax
        mov eax, dword ptr [esp + 14h]
        push eax
        push 80015000h
        ; Exact mapped bytes E8 C2 E7 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xe7
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
