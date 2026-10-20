// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041FC4E .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_0041fc4e_0041FC4E() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        xor ebx, ebx
        cmp dword ptr [ebp + 10h], ebx
        push esi
        push edi
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x41fd36
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 39 1D AC 11 45 00: cmp dword ptr [0x4511ac], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xac
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 75 16: jne 0x41fc7d
        __asm _emit 0x75
        __asm _emit 0x16
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5B 58 00 00: call 0x4254d0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x41fd38
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 86 29 00 00: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        dec dword ptr [ebp + 10h]
        mov esi, dword ptr [ebp + 0ch]
        mov edi, dword ptr [ebp + 8]
        pop ecx
        ; Exact mapped bytes 66 0F B6 0F: movzx cx, byte ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x0f
        movzx eax, cl
        inc edi
        mov dword ptr [ebp + 0ch], ecx
        test byte ptr [eax + 4512c1h], 4
        ; Exact mapped bytes 74 2D: je 0x41fccf
        __asm _emit 0x74
        __asm _emit 0x2d
        cmp dword ptr [ebp + 10h], ebx
        ; Exact mapped bytes 75 13: jne 0x41fcba
        __asm _emit 0x75
        __asm _emit 0x13
        movzx eax, byte ptr [esi]
        mov dword ptr [ebp + 0ch], ebx
        test byte ptr [eax + 4512c1h], 4
        ; Exact mapped bytes 75 78: jne 0x41fd2e
        __asm _emit 0x75
        __asm _emit 0x78
        mov ebx, eax
        ; Exact mapped bytes EB 42: jmp 0x41fcfc
        __asm _emit 0xeb
        __asm _emit 0x42
        mov al, byte ptr [edi]
        test al, al
        ; Exact mapped bytes 75 05: jne 0x41fcc5
        __asm _emit 0x75
        __asm _emit 0x05
        mov dword ptr [ebp + 0ch], ebx
        ; Exact mapped bytes EB 0A: jmp 0x41fccf
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor edx, edx
        inc edi
        mov dh, cl
        mov dl, al
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 66 0F B6 1E: movzx bx, byte ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x1e
        movzx eax, bl
        inc esi
        test byte ptr [eax + 4512c1h], 4
        ; Exact mapped bytes 74 1C: je 0x41fcfc
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x41fcef
        __asm _emit 0x74
        __asm _emit 0x09
        mov al, byte ptr [esi]
        dec dword ptr [ebp + 10h]
        test al, al
        ; Exact mapped bytes 75 04: jne 0x41fcf3
        __asm _emit 0x75
        __asm _emit 0x04
        xor ebx, ebx
        ; Exact mapped bytes EB 09: jmp 0x41fcfc
        __asm _emit 0xeb
        __asm _emit 0x09
        xor ecx, ecx
        inc esi
        mov ch, bl
        mov cl, al
        mov ebx, ecx
        ; Exact mapped bytes 66 39 5D 0C: cmp word ptr [ebp + 0xc], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x5d
        __asm _emit 0x0c
        ; Exact mapped bytes 75 18: jne 0x41fd1a
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 66 83 7D 0C 00: cmp word ptr [ebp + 0xc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 74 25: je 0x41fd2e
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 10h]
        dec dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x41fd2e
        __asm _emit 0x74
        __asm _emit 0x1b
        xor ebx, ebx
        ; Exact mapped bytes E9 74 FF FF FF: jmp 0x41fc8e
        __asm _emit 0xe9
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 19h
        ; Exact mapped bytes E8 4A 29 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B 5D 0C: cmp bx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x5d
        __asm _emit 0x0c
        pop ecx
        sbb eax, eax
        and eax, 2
        dec eax
        ; Exact mapped bytes EB 0A: jmp 0x41fd38
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 19h
        ; Exact mapped bytes E8 36 29 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
