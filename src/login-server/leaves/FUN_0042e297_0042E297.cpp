// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E297 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_0042e297_0042E297() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ecx + 38h]
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x42e2bb
        __asm _emit 0x75
        __asm _emit 0x1a
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push dword ptr [ecx + 1ch]
        ; Exact mapped bytes FF 15 D8 C4 43 00: call dword ptr [0x43c4d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 19: jmp 0x42e2d4
        __asm _emit 0xeb
        __asm _emit 0x19
        push dword ptr [ebp + 18h]
        mov edx, dword ptr [eax]
        mov ecx, eax
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 92 98 00 00 00: call dword ptr [edx + 0x98]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
