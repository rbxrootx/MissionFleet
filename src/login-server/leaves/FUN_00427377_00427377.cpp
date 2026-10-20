// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427377 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_00427377_00427377() {
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
        ; Exact mapped bytes E8 A7 08 00 00: call 0x427c3a
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 AC FF FF FF: call 0x42734b
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 24h
        leave
        ret
    }
}
