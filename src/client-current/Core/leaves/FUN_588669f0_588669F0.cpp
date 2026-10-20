// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588669F0 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_588669f0_588669F0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        test esi, esi
        ; Exact mapped bytes 74 36: je 0x58866a35
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, esi
        lea edx, [ecx + 1]
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x58866a04
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, edx
        lea ebx, [ecx + 1]
        push ebx
        ; Exact mapped bytes E8 FA 2B FF FF: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        add esp, 4
        test edi, edi
        ; Exact mapped bytes 74 16: je 0x58866a35
        __asm _emit 0x74
        __asm _emit 0x16
        push esi
        push ebx
        push edi
        ; Exact mapped bytes E8 69 0D FF FF: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x58866a3c
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ebp
        ret
        push 0
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 8E A5 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
