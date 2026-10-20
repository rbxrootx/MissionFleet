// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588747C0 .. +0x192 bytes.
extern "C" __declspec(naked) void FUN_588747c0() {
    __asm {
        sub esp, 1ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 18h], eax
        cmp dword ptr [esp + 24h], 2
        push edi
        mov edi, ecx
        ; Exact mapped bytes 0F 85 EC 00 00 00: jne 0x588748c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        cmp eax, dword ptr [edi + 70h]
        ; Exact mapped bytes 0F 85 49 01 00 00: jne 0x58874932
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x49
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 6C B4 A0 58: mov ecx, dword ptr [0x58a0b46c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0xb4
        __asm _emit 0xa0
        __asm _emit 0x58
        mov eax, dword ptr [edi + 6ch]
        xor ecx, 0aaaaaaaah
        cmp ecx, dword ptr [eax + 64h]
        ; Exact mapped bytes 0F 82 FD 00 00 00: jb 0x588748fe
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 68h]
        xor eax, eax
        mov dword ptr [esp + 4], eax
        mov dword ptr [esp + 8], eax
        mov dword ptr [esp + 0ch], eax
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 14h], eax
        mov byte ptr [esp + 18h], al
        mov edx, dword ptr [edx + 80h]
        push esi
        mov esi, 15h
        lea eax, [esp + 8]
        mov edi, edi
        lea ecx, [esi + 7fffffe9h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5887484b
        __asm _emit 0x74
        __asm _emit 0x11
        mov cl, byte ptr [edx]
        test cl, cl
        ; Exact mapped bytes 74 0B: je 0x5887484b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [eax], cl
        inc eax
        inc edx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x58874830
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x5887484f
        __asm _emit 0xeb
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x58874850
        __asm _emit 0x75
        __asm _emit 0x01
        dec eax
        push ebx
        ; Exact mapped bytes 8B 1D A8 C1 98 58: mov ebx, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        lea edx, [esp + 0ch]
        push edx
        mov byte ptr [eax], 0
        xor esi, esi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5887488b
        __asm _emit 0x74
        __asm _emit 0x24
        mov al, byte ptr [esp + esi + 0ch]
        cmp al, 20h
        ; Exact mapped bytes 74 6D: je 0x588748dc
        __asm _emit 0x74
        __asm _emit 0x6d
        cmp al, 27h
        ; Exact mapped bytes 74 69: je 0x588748dc
        __asm _emit 0x74
        __asm _emit 0x69
        cmp al, 1
        ; Exact mapped bytes 7C 04: jl 0x5887487b
        __asm _emit 0x7c
        __asm _emit 0x04
        cmp al, 1fh
        ; Exact mapped bytes 7E 61: jle 0x588748dc
        __asm _emit 0x7e
        __asm _emit 0x61
        cmp al, 7fh
        ; Exact mapped bytes 74 5D: je 0x588748dc
        __asm _emit 0x74
        __asm _emit 0x5d
        lea eax, [esp + 0ch]
        push eax
        inc esi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        cmp esi, eax
        ; Exact mapped bytes 75 DC: jne 0x58874867
        __asm _emit 0x75
        __asm _emit 0xdc
        lea eax, [esp + 0ch]
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x58874892
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edx
        mov edx, dword ptr [edi + 78h]
        push 0
        inc eax
        push eax
        mov eax, dword ptr [edx + 50h]
        lea ecx, [esp + 14h]
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push eax
        push 8001c10ah
        ; Exact mapped bytes E8 B3 C3 0F 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xc3
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, 0fffdh
        ; Exact mapped bytes 66 21 4F 24: and word ptr [edi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4f
        __asm _emit 0x24
        pop ebx
        pop esi
        xor eax, eax
        pop edi
        mov ecx, dword ptr [esp + 18h]
        xor ecx, esp
        ; Exact mapped bytes E8 04 83 10 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x83
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 1ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0a6ch
        ; Exact mapped bytes E8 04 72 EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x72
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3D 04 EF FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 8]
        mov ecx, edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB C8: jmp 0x588748c6
        __asm _emit 0xeb
        __asm _emit 0xc8
        push 0
        push 0
        push 0
        push 0a6bh
        ; Exact mapped bytes E8 E2 71 EF FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x71
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1B 04 EF FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 8]
        mov ecx, edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        pop edi
        mov ecx, dword ptr [esp + 18h]
        xor ecx, esp
        ; Exact mapped bytes E8 AE 82 10 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x82
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 1ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [edi + 74h]
        ; Exact mapped bytes 75 91: jne 0x588748c8
        __asm _emit 0x75
        __asm _emit 0x91
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 1ch]
        pop edi
        xor ecx, esp
        xor eax, eax
        ; Exact mapped bytes E8 8E 82 10 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x82
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 1ch
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
