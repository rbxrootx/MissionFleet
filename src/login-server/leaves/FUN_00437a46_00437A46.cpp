// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437A46 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_00437a46_00437A46() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 110h
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 11: jne 0x437a64
        __asm _emit 0x75
        __asm _emit 0x11
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 22 6A FF FF: call 0x42e484
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 29: jmp 0x437a8d
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, 111h
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 1D: jne 0x437a8b
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes 66 83 7D 10 63: cmp word ptr [ebp + 0x10], 0x63
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x10
        __asm _emit 0x63
        ; Exact mapped bytes 75 16: jne 0x437a8b
        __asm _emit 0x75
        __asm _emit 0x16
        push 0
        push 0e146h
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push 1
        pop eax
        ; Exact mapped bytes EB 02: jmp 0x437a8d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
