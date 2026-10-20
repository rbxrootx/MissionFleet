// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A8E80 .. +0x242 bytes.
extern "C" __declspec(naked) void FUN_587a8e80_587A8E80() {
    __asm {
        sub esp, 14h
        push ebx
        push esi
        mov esi, dword ptr [esp + 28h]
        push edi
        mov edi, dword ptr [esp + 24h]
        lea eax, [esi + 1]
        push eax
        push edi
        ; Exact mapped bytes E8 98 12 00 00: call 0x587aa130
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        add esp, 8
        mov dword ptr [esp + 18h], ebx
        test ebx, ebx
        ; Exact mapped bytes 75 1F: jne 0x587a8ec4
        __asm _emit 0x75
        __asm _emit 0x1f
        push eax
        push esi
        push edi
        ; Exact mapped bytes E8 83 0A 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b9760h
        push edi
        ; Exact mapped bytes E8 C8 5D FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 14h
        ret
        test edi, edi
        ; Exact mapped bytes 74 13: je 0x587a8edb
        __asm _emit 0x74
        __asm _emit 0x13
        push esi
        push ebx
        push edi
        ; Exact mapped bytes E8 20 E4 FF FF: call 0x587a72f0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        push ebx
        push edi
        ; Exact mapped bytes E8 D8 66 FF FF: call 0x5879f5b0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        push 0
        push 0
        push edi
        ; Exact mapped bytes E8 4B 0A 00 00: call 0x587a9930
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x587a8ebb
        __asm _emit 0x75
        __asm _emit 0xcf
        lea eax, [ebx + esi]
        mov edx, ebx
        mov byte ptr [eax], 0
        cmp byte ptr [ebx], 0
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 74 09: je 0x587a8f06
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        inc edx
        cmp byte ptr [edx], 0
        ; Exact mapped bytes 75 FA: jne 0x587a8f00
        __asm _emit 0x75
        __asm _emit 0xfa
        sub eax, edx
        cmp eax, 0ch
        ; Exact mapped bytes 7F 17: jg 0x587a8f24
        __asm _emit 0x7f
        __asm _emit 0x17
        push 588b974ch
        push edi
        ; Exact mapped bytes E8 68 5D FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        add esp, 14h
        ret
        mov cl, byte ptr [edx + 1]
        movzx eax, byte ptr [edx + 2]
        movzx ebx, cl
        shl ebx, 8
        add ebx, eax
        movzx eax, byte ptr [edx + 3]
        shl ebx, 8
        add ebx, eax
        movzx eax, byte ptr [edx + 4]
        shl ebx, 8
        add ebx, eax
        test cl, cl
        ; Exact mapped bytes 79 0A: jns 0x587a8f53
        __asm _emit 0x79
        __asm _emit 0x0a
        neg ebx
        and ebx, 7fffffffh
        neg ebx
        mov cl, byte ptr [edx + 5]
        movzx eax, byte ptr [edx + 6]
        push ebp
        movzx ebp, cl
        shl ebp, 8
        add ebp, eax
        movzx eax, byte ptr [edx + 7]
        shl ebp, 8
        add ebp, eax
        movzx eax, byte ptr [edx + 8]
        shl ebp, 8
        add ebp, eax
        test cl, cl
        ; Exact mapped bytes 79 0A: jns 0x587a8f83
        __asm _emit 0x79
        __asm _emit 0x0a
        neg ebp
        and ebp, 7fffffffh
        neg ebp
        mov cl, byte ptr [edx + 9]
        mov al, byte ptr [edx + 0ah]
        add edx, 0bh
        mov byte ptr [esp + 13h], cl
        mov byte ptr [esp + 30h], al
        mov dword ptr [esp + 14h], edx
        test cl, cl
        ; Exact mapped bytes 75 06: jne 0x587a8fa2
        __asm _emit 0x75
        __asm _emit 0x06
        cmp al, 2
        ; Exact mapped bytes 75 21: jne 0x587a8fc1
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes EB 52: jmp 0x587a8ff4
        __asm _emit 0xeb
        __asm _emit 0x52
        cmp cl, 1
        ; Exact mapped bytes 75 06: jne 0x587a8fad
        __asm _emit 0x75
        __asm _emit 0x06
        cmp al, 3
        ; Exact mapped bytes 75 16: jne 0x587a8fc1
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes EB 47: jmp 0x587a8ff4
        __asm _emit 0xeb
        __asm _emit 0x47
        cmp cl, 2
        ; Exact mapped bytes 75 06: jne 0x587a8fb8
        __asm _emit 0x75
        __asm _emit 0x06
        cmp al, 3
        ; Exact mapped bytes 75 0B: jne 0x587a8fc1
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes EB 3C: jmp 0x587a8ff4
        __asm _emit 0xeb
        __asm _emit 0x3c
        cmp cl, 3
        ; Exact mapped bytes 75 1C: jne 0x587a8fd9
        __asm _emit 0x75
        __asm _emit 0x1c
        cmp al, 4
        ; Exact mapped bytes 74 33: je 0x587a8ff4
        __asm _emit 0x74
        __asm _emit 0x33
        push 588b9874h
        push edi
        ; Exact mapped bytes E8 B4 5C FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 14h
        ret
        cmp cl, 4
        ; Exact mapped bytes 72 16: jb 0x587a8ff4
        __asm _emit 0x72
        __asm _emit 0x16
        push 588b988ch
        push edi
        ; Exact mapped bytes E8 97 5C FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [esp + 38h]
        add esp, 8
        mov edx, dword ptr [esp + 14h]
        cmp byte ptr [edx], 0
        mov esi, edx
        ; Exact mapped bytes 74 0B: je 0x587a9006
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 75 FA: jne 0x587a9000
        __asm _emit 0x75
        __asm _emit 0xfa
        movzx eax, al
        mov dword ptr [esp + 30h], eax
        shl eax, 2
        push eax
        push edi
        ; Exact mapped bytes E8 B9 DA FF FF: call 0x587a6ad0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xda
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, eax
        add esp, 8
        mov dword ptr [esp + 20h], edx
        test edx, edx
        ; Exact mapped bytes 75 18: jne 0x587a903c
        __asm _emit 0x75
        __asm _emit 0x18
        push 588b9760h
        push edi
        ; Exact mapped bytes E8 51 5C FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 14h
        ret
        mov eax, dword ptr [esp + 30h]
        xor ecx, ecx
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x587a908c
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        mov dword ptr [edx + ecx*4], esi
        cmp esi, eax
        ; Exact mapped bytes 77 0A: ja 0x587a9062
        __asm _emit 0x77
        __asm _emit 0x0a
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 74 24: je 0x587a9081
        __asm _emit 0x74
        __asm _emit 0x24
        inc esi
        cmp esi, eax
        ; Exact mapped bytes 76 F6: jbe 0x587a9058
        __asm _emit 0x76
        __asm _emit 0xf6
        push edx
        push edi
        ; Exact mapped bytes E8 67 D9 FF FF: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b98a8h
        push edi
        ; Exact mapped bytes E8 0C 5C FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 14h
        ret
        inc ecx
        cmp ecx, dword ptr [esp + 30h]
        ; Exact mapped bytes 7C C8: jl 0x587a9050
        __asm _emit 0x7c
        __asm _emit 0xc8
        mov eax, dword ptr [esp + 30h]
        push edx
        push dword ptr [esp + 18h]
        push eax
        movzx eax, byte ptr [esp + 1fh]
        push eax
        push ebp
        push ebx
        push dword ptr [esp + 34h]
        push dword ptr [esp + 48h]
        push edi
        ; Exact mapped bytes E8 58 83 FF FF: call 0x587a1400
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esp + 44h]
        push edi
        ; Exact mapped bytes E8 1E D9 FF FF: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 2ch
        mov eax, 3
        pop ebp
        pop edi
        pop esi
        pop ebx
        add esp, 14h
        ret
    }
}
