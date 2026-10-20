// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B3AB .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_5887b3ab_5887B3AB() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 E6 11 00 00: call 0x5887c59c
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x5887b3d6
        __asm _emit 0x74
        __asm _emit 0x1c
        lea eax, [ebp - 4]
        push eax
        lea eax, [ebp + 8]
        push 1
        push eax
        ; Exact mapped bytes E8 09 12 00 00: call 0x5887c5d2
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x5887b3d6
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        leave
        ret
        mov eax, 0ffffh
        leave
        ret
    }
}
