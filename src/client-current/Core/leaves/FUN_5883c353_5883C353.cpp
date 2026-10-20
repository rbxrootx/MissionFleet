// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883C353 .. +0x1C3 bytes.
extern "C" __declspec(naked) void FUN_5883c353_5883C353() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 818h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 80ch], esi
        ; Exact mapped bytes E8 1F 07 00 00: call 0x5883ca95
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        mov dword ptr [ebp - 818h], ebx
        cmp dword ptr [ebx + 18h], 0
        ; Exact mapped bytes 74 07: je 0x5883c38b
        __asm _emit 0x74
        __asm _emit 0x07
        push ebx
        ; Exact mapped bytes FF 15 20 42 89 58: call dword ptr [0x58894220]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test esi, esi
        ; Exact mapped bytes 0F 84 64 01 00 00: je 0x5883c4f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi], 1
        ; Exact mapped bytes 0F 85 5B 01 00 00: jne 0x5883c4f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 46 01: movsx eax, byte ptr [esi + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x46
        __asm _emit 0x01
        imul ecx, eax, 3
        push edi
        push 0
        pop edx
        lea eax, [ecx + 65h]
        xor byte ptr [esi + 2], al
        lea eax, [ecx + 1]
        movzx edi, byte ptr [esi + 2]
        imul ecx, eax, 3
        shl edi, 8
        lea eax, [ecx + 65h]
        xor byte ptr [esi + 3], al
        inc ecx
        movzx eax, byte ptr [esi + 3]
        or edi, eax
        ; Exact mapped bytes 76 13: jbe 0x5883c3dc
        __asm _emit 0x76
        __asm _emit 0x13
        imul ecx, ecx, 3
        lea eax, [ecx + 65h]
        xor al, byte ptr [esi + edx + 4]
        inc ecx
        mov byte ptr [esi + edx], al
        inc edx
        cmp edx, edi
        ; Exact mapped bytes 7C ED: jl 0x5883c3c9
        __asm _emit 0x7c
        __asm _emit 0xed
        mov byte ptr [esi + edi], 0
        xor ebx, ebx
        ; Exact mapped bytes FF 15 4C 42 89 58: call dword ptr [0x5889424c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        xor ecx, ecx
        mov edx, eax
        inc ecx
        cmp dword ptr [ecx*4 + 58968cd0h], edx
        ; Exact mapped bytes 74 08: je 0x5883c3fe
        __asm _emit 0x74
        __asm _emit 0x08
        inc ecx
        cmp ecx, 14h
        ; Exact mapped bytes 7C F1: jl 0x5883c3ed
        __asm _emit 0x7c
        __asm _emit 0xf1
        ; Exact mapped bytes EB 06: jmp 0x5883c404
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ebx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 19: jne 0x5883c41d
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes A1 C8 8C 96 58: mov eax, dword ptr [0x58968cc8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x8c
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 13h
        ; Exact mapped bytes 73 0F: jae 0x5883c41d
        __asm _emit 0x73
        __asm _emit 0x0f
        inc eax
        ; Exact mapped bytes A3 C8 8C 96 58: mov dword ptr [0x58968cc8], eax
        __asm _emit 0xa3
        __asm _emit 0xc8
        __asm _emit 0x8c
        __asm _emit 0x96
        __asm _emit 0x58
        mov ebx, eax
        mov dword ptr [eax*4 + 58968cd0h], edx
        mov edi, dword ptr [ebx*4 + 58968c78h]
        mov dword ptr [ebx*4 + 58968c78h], esi
        test edi, edi
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x5883c4f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, esi
        ; Exact mapped bytes 0F 84 B5 00 00 00: je 0x5883c4f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi], 1
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x5883c4f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edi], 1
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x5883c4f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 800h
        push edi
        lea eax, [ebp - 804h]
        push eax
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 804h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 808h], eax
        test eax, eax
        ; Exact mapped bytes 74 79: je 0x5883c4f0
        __asm _emit 0x74
        __asm _emit 0x79
        lea eax, [ebp - 804h]
        mov byte ptr [edi], 1
        movzx ecx, al
        xor ebx, ebx
        imul eax, ecx, 3
        mov byte ptr [edi + 1], cl
        push 4
        pop edx
        lea ecx, [eax + 65h]
        inc eax
        mov dword ptr [ebp - 810h], ecx
        imul ecx, eax, 3
        lea eax, [ecx + 65h]
        inc ecx
        mov dword ptr [ebp - 814h], eax
        cmp dword ptr [ebp - 808h], ebx
        ; Exact mapped bytes 7E 23: jle 0x5883c4d0
        __asm _emit 0x7e
        __asm _emit 0x23
        mov esi, dword ptr [ebp - 808h]
        imul ecx, ecx, 3
        lea eax, [ecx + 65h]
        xor al, byte ptr [ebp + ebx - 804h]
        mov byte ptr [edx + edi], al
        inc edx
        inc ecx
        inc ebx
        cmp ebx, esi
        ; Exact mapped bytes 7C E9: jl 0x5883c4b3
        __asm _emit 0x7c
        __asm _emit 0xe9
        mov esi, dword ptr [ebp - 80ch]
        lea ecx, [edx - 4]
        mov byte ptr [edx + edi], 0
        mov eax, ecx
        sar eax, 8
        xor al, byte ptr [ebp - 810h]
        mov byte ptr [edi + 2], al
        mov eax, dword ptr [ebp - 814h]
        xor al, cl
        mov byte ptr [edi + 3], al
        mov ebx, dword ptr [ebp - 818h]
        pop edi
        cmp dword ptr [ebx + 18h], 0
        ; Exact mapped bytes 74 07: je 0x5883c504
        __asm _emit 0x74
        __asm _emit 0x07
        push ebx
        ; Exact mapped bytes FF 15 1C 42 89 58: call dword ptr [0x5889421c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov eax, esi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 3E 4B FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
