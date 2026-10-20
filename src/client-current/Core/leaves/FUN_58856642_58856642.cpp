// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58856642 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_58856642_58856642() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 0ch]
        push esi
        test ecx, ecx
        ; Exact mapped bytes 75 13: jne 0x58856662
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 1B BE 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 4D A9 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 4F: jmp 0x588566b1
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov edx, dword ptr [ebp + 10h]
        push ebx
        test edx, edx
        ; Exact mapped bytes 74 24: je 0x5885668e
        __asm _emit 0x74
        __asm _emit 0x24
        mov ebx, dword ptr [ebp + 18h]
        xor eax, eax
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        movzx eax, bl
        inc eax
        cmp edx, eax
        ; Exact mapped bytes 77 09: ja 0x58856683
        __asm _emit 0x77
        __asm _emit 0x09
        ; Exact mapped bytes E8 F0 BD 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        push 22h
        ; Exact mapped bytes EB 12: jmp 0x58856695
        __asm _emit 0xeb
        __asm _emit 0x12
        mov esi, dword ptr [ebp + 14h]
        lea eax, [esi - 2]
        cmp eax, 22h
        ; Exact mapped bytes 76 13: jbe 0x588566a1
        __asm _emit 0x76
        __asm _emit 0x13
        ; Exact mapped bytes E8 DC BD 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 0E A9 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 0F: jmp 0x588566b0
        __asm _emit 0xeb
        __asm _emit 0x0f
        push ebx
        push esi
        push edx
        push ecx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B4 FD FF FF: call 0x58856461
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop ebx
        pop esi
        pop ebp
        ret
    }
}
