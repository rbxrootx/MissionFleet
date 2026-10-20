// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433166 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_00433166_00433166() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 04: jne 0x433173
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 29: jmp 0x43319c
        __asm _emit 0xeb
        __asm _emit 0x29
        lea eax, [ebp + 0ch]
        push 0
        push eax
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push dword ptr [ecx + 4]
        ; Exact mapped bytes FF 15 54 C2 43 00: call dword ptr [0x43c254]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x433199
        __asm _emit 0x75
        __asm _emit 0x0d
        push eax
        ; Exact mapped bytes FF 15 C0 C1 43 00: call dword ptr [0x43c1c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 D5 05 00 00: call 0x43376e
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
