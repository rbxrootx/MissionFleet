// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042839E .. +0x3F bytes.
extern "C" __declspec(naked) void __mbsnbicoll_0042839E() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 04: jne 0x4283ab
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        pop ebp
        ret
        ; Exact mapped bytes FF 35 9C 11 45 00: push dword ptr [0x45119c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 8]
        push 1
        ; Exact mapped bytes FF 35 C4 13 45 00: push dword ptr [0x4513c4]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc4
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes E8 2D 04 00 00: call 0x4287f7
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4283d8
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 7fffffffh
        pop ebp
        ret
        add eax, -2
        pop ebp
        ret
    }
}
