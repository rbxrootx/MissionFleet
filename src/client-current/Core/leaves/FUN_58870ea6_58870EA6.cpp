// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58870EA6 .. +0xF6 bytes.
extern "C" __declspec(naked) void FUN_58870ea6_58870EA6() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A3 BD FF FF: call 0x5886cc56
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        pop ecx
        mov eax, dword ptr [eax + 0ch]
        nop
        test al, 6
        ; Exact mapped bytes 75 1F: jne 0x58870ede
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 18h], 9
        mov byte ptr [eax + 1ch], 1
        mov eax, dword ptr [ebp + 0ch]
        push 10h
        pop ecx
        add eax, 0ch
        ; Exact mapped bytes F0 09 08: lock or dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x08
        or eax, 0ffffffffh
        pop ebp
        ret
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 0ch]
        nop
        shr eax, 0ch
        test al, 1
        ; Exact mapped bytes 74 0C: je 0x58870ef8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax + 18h], 22h
        ; Exact mapped bytes EB D1: jmp 0x58870ec9
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 0ch]
        nop
        test al, 1
        ; Exact mapped bytes 74 28: je 0x58870f2b
        __asm _emit 0x74
        __asm _emit 0x28
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 63 01 00 00: call 0x5887106e
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp + 0ch]
        and dword ptr [ecx + 8], 0
        test al, al
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 B6: je 0x58870ed0
        __asm _emit 0x74
        __asm _emit 0xb6
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp + 0ch]
        push -2
        pop ecx
        add eax, 0ch
        ; Exact mapped bytes F0 21 08: lock and dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        push 2
        pop ecx
        add eax, 0ch
        ; Exact mapped bytes F0 09 08: lock or dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        push -9
        pop ecx
        add eax, 0ch
        ; Exact mapped bytes F0 21 08: lock and dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        and dword ptr [eax + 8], 0
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 0ch]
        nop
        test eax, 4c0h
        ; Exact mapped bytes 75 16: jne 0x58870f6e
        __asm _emit 0x75
        __asm _emit 0x16
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B4 D2 FF FF: call 0x5886e214
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test al, al
        ; Exact mapped bytes 75 09: jne 0x58870f6e
        __asm _emit 0x75
        __asm _emit 0x09
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 FF 03 00 00: call 0x5887136c
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push ebx
        push dword ptr [ebp + 10h]
        mov ebx, dword ptr [ebp + 8]
        push dword ptr [ebp + 0ch]
        push ebx
        ; Exact mapped bytes E8 1E 00 00 00: call 0x58870f9c
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test al, al
        ; Exact mapped bytes 75 11: jne 0x58870f96
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        push 10h
        pop ecx
        add eax, 0ch
        ; Exact mapped bytes F0 09 08: lock or dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 03: jmp 0x58870f99
        __asm _emit 0xeb
        __asm _emit 0x03
        movzx eax, bl
        pop ebx
        pop ebp
        ret
    }
}
