// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58856028 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_58856028_58856028() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 0ch]
        nop
        shr eax, 0ch
        test al, 1
        ; Exact mapped bytes 74 0C: je 0x58856046
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 04: jne 0x58856046
        __asm _emit 0x75
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 18: jmp 0x5885605e
        __asm _emit 0xeb
        __asm _emit 0x18
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 45 08: movsx eax, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x08
        push dword ptr [ecx]
        push eax
        ; Exact mapped bytes E8 24 43 00 00: call 0x5885a379
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp eax, -1
        setne al
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
