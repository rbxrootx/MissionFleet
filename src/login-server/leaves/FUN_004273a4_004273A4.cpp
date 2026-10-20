// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004273A4 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_004273a4_004273A4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push dword ptr [ebp + 0ch]
        lea eax, [ebp + 0ch]
        push eax
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 7A 08 00 00: call 0x427c3a
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 95 FF FF FF: call 0x427361
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        leave
        ret
    }
}
