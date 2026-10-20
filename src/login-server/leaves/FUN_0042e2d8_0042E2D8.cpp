// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E2D8 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_0042e2d8_0042E2D8() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ecx + 38h]
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x42e307
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x42e2ec
        __asm _emit 0x74
        __asm _emit 0x03
        mov eax, dword ptr [eax + 1ch]
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push eax
        push dword ptr [ecx + 1ch]
        ; Exact mapped bytes FF 15 D4 C4 43 00: call dword ptr [0x43c4d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x42e323
        __asm _emit 0xeb
        __asm _emit 0x1c
        push dword ptr [ebp + 1ch]
        mov edx, dword ptr [eax]
        mov ecx, eax
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 92 9C 00 00 00: call dword ptr [edx + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
