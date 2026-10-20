// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A0B40 .. +0x11F bytes.
extern "C" __declspec(naked) void FUN_587a0b40_587A0B40() {
    __asm {
        sub esp, 10ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 108h], eax
        mov eax, dword ptr [esp + 110h]
        mov edx, dword ptr [esp + 118h]
        push ebx
        push ebp
        push esi
        xor esi, esi
        mov dword ptr [esp + 0ch], eax
        push edi
        mov edi, dword ptr [esp + 124h]
        xor ebx, ebx
        mov ecx, edi
        mov dword ptr [esp + 14h], ecx
        lea ebp, [esi + 1]
        test edi, edi
        ; Exact mapped bytes 75 09: jne 0x587a0b8b
        __asm _emit 0x75
        __asm _emit 0x09
        mov byte ptr [edx], bl
        xor eax, eax
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x587a0c46
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edi], bl
        ; Exact mapped bytes 74 63: je 0x587a0bf2
        __asm _emit 0x74
        __asm _emit 0x63
        nop
        cmp esi, 4fh
        ; Exact mapped bytes 73 41: jae 0x587a0bd6
        __asm _emit 0x73
        __asm _emit 0x41
        mov cl, byte ptr [edi]
        inc edi
        cmp cl, 20h
        ; Exact mapped bytes 76 05: jbe 0x587a0ba2
        __asm _emit 0x76
        __asm _emit 0x05
        cmp cl, 7eh
        ; Exact mapped bytes 76 05: jbe 0x587a0ba7
        __asm _emit 0x76
        __asm _emit 0x05
        cmp cl, 0a1h
        ; Exact mapped bytes 72 08: jb 0x587a0baf
        __asm _emit 0x72
        __asm _emit 0x08
        mov byte ptr [edx], cl
        inc esi
        inc edx
        xor ebp, ebp
        ; Exact mapped bytes EB 22: jmp 0x587a0bd1
        __asm _emit 0xeb
        __asm _emit 0x22
        test ebp, ebp
        ; Exact mapped bytes 75 17: jne 0x587a0bca
        __asm _emit 0x75
        __asm _emit 0x17
        mov byte ptr [edx], 20h
        inc esi
        inc edx
        movzx eax, cl
        cmp cl, 20h
        mov ebp, 1
        cmove eax, ebx
        mov ebx, eax
        ; Exact mapped bytes EB 07: jmp 0x587a0bd1
        __asm _emit 0xeb
        __asm _emit 0x07
        test ebx, ebx
        ; Exact mapped bytes 75 03: jne 0x587a0bd1
        __asm _emit 0x75
        __asm _emit 0x03
        movzx ebx, cl
        cmp byte ptr [edi], 0
        ; Exact mapped bytes 75 BA: jne 0x587a0b90
        __asm _emit 0x75
        __asm _emit 0xba
        mov ecx, dword ptr [esp + 14h]
        test esi, esi
        ; Exact mapped bytes 74 10: je 0x587a0bee
        __asm _emit 0x74
        __asm _emit 0x10
        test ebp, ebp
        ; Exact mapped bytes 74 0C: je 0x587a0bee
        __asm _emit 0x74
        __asm _emit 0x0c
        dec esi
        dec edx
        test ebx, ebx
        mov eax, 20h
        cmove ebx, eax
        mov eax, dword ptr [esp + 10h]
        mov byte ptr [edx], 0
        test esi, esi
        ; Exact mapped bytes 74 8B: je 0x587a0b84
        __asm _emit 0x74
        __asm _emit 0x8b
        cmp byte ptr [edi], 0
        ; Exact mapped bytes 74 10: je 0x587a0c0e
        __asm _emit 0x74
        __asm _emit 0x10
        push 588b8954h
        push eax
        ; Exact mapped bytes E8 27 E8 FF FF: call 0x5879f430
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 36: jmp 0x587a0c44
        __asm _emit 0xeb
        __asm _emit 0x36
        test ebx, ebx
        ; Exact mapped bytes 74 32: je 0x587a0c44
        __asm _emit 0x74
        __asm _emit 0x32
        push ecx
        lea eax, [esp + 1ch]
        push 1
        push eax
        ; Exact mapped bytes E8 61 E8 FF FF: call 0x5879f480
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        push 4
        lea eax, [esp + 2ch]
        push 2
        push eax
        ; Exact mapped bytes E8 A2 E8 FF FF: call 0x5879f4d0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b8968h
        lea eax, [esp + 38h]
        push eax
        push dword ptr [esp + 34h]
        ; Exact mapped bytes E8 DF E4 FF FF: call 0x5879f120
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 28h
        mov eax, esi
        mov ecx, dword ptr [esp + 118h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 F8 03 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 10ch
        ret
    }
}
