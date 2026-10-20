// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E15B .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_0042e15b_0042E15B() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ecx + 34h]
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x42e179
        __asm _emit 0x75
        __asm _emit 0x14
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push dword ptr [ecx + 1ch]
        ; Exact mapped bytes FF 15 F8 C4 43 00: call dword ptr [0x43c4f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x42e18c
        __asm _emit 0xeb
        __asm _emit 0x13
        push dword ptr [ebp + 10h]
        mov edx, dword ptr [eax]
        mov ecx, eax
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 92 80 00 00 00: call dword ptr [edx + 0x80]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
