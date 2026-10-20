// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057F944 .. +0x276 bytes.
extern "C" __declspec(naked) void FUN_0057f944_0057F944() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x57f967
        __asm _emit 0x75
        __asm _emit 0x11
        push 5ch
        push 67849ch
        ; Exact mapped bytes E8 DE 93 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x93
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57f967
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x57f950
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 10h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 11: jne 0x57f986
        __asm _emit 0x75
        __asm _emit 0x11
        push 5dh
        push 67849ch
        ; Exact mapped bytes E8 BF 93 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x93
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57f986
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x57f96d
        __asm _emit 0x75
        __asm _emit 0xe1
        mov dword ptr [ebp - 14h], 0
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 0C A7 ED FF: call 0x45a0a8
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xa7
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        cmp ecx, 0ch
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x57fa42
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        cmp eax, edx
        ; Exact mapped bytes 74 77: je 0x57fa42
        __asm _emit 0x74
        __asm _emit 0x77
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        push ecx
        push 0
        mov edx, dword ptr [ebp - 18h]
        push edx
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 FC BA 68 00: call dword ptr [0x68bafc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 23: jge 0x57fa0f
        __asm _emit 0x7d
        __asm _emit 0x23
        push 6784c4h
        push 6784f4h
        ; Exact mapped bytes E8 1A 0C F2 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x0c
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], 0
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes E9 A2 01 00 00: jmp 0x57fbb1
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        cmp edx, ecx
        ; Exact mapped bytes 74 11: je 0x57fa36
        __asm _emit 0x74
        __asm _emit 0x11
        push 6eh
        push 67849ch
        ; Exact mapped bytes E8 0F 93 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x93
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57fa36
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x57fa0f
        __asm _emit 0x75
        __asm _emit 0xd3
        lea eax, [ebp - 10h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 20h]
        add edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        sub edx, 2
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0eh
        ; Exact mapped bytes 0F 87 0F 01 00 00: ja 0x57fb7c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 24 85 BA FB 57 00: jmp dword ptr [eax*4 + 0x57fbba]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0x57
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 18h]
        mov al, byte ptr [edx + 8]
        mov byte ptr [ecx], al
        ; Exact mapped bytes E9 05 01 00 00: jmp 0x57fb8c
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes E9 F3 00 00 00: jmp 0x57fb8c
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x57fb8c
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 D3 00 00 00: jmp 0x57fb8c
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 4], ecx
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x57fb8c
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x57fb8c
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 0ch]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x57fb8c
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 55 65 FC FF: call 0x546060
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x65
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 7F: jmp 0x57fb8c
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 72: jmp 0x57fb8c
        __asm _emit 0xeb
        __asm _emit 0x72
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BF 51 08: movsx edx, word ptr [ecx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x08
        neg edx
        sbb edx, edx
        neg edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 5E: jmp 0x57fb8c
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 00 BB 68 00: call dword ptr [0x68bb00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x57fb49
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        ; Exact mapped bytes EB 41: jmp 0x57fb8c
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 12: je 0x57fb66
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 04: call dword ptr [ecx + 4]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 DC AD FC FF: call 0x54a94b
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 10: jmp 0x57fb8c
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        mov dword ptr [ebp - 14h], 80020008h
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 08 BB 68 00: call dword ptr [0x68bb08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7C 12: jl 0x57fbae
        __asm _emit 0x7c
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 74 09: je 0x57fbae
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 14h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
