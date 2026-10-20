// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008EC40 .. +0x24E bytes.
extern "C" __declspec(naked) void FUN_1008ec40_1008EC40() {
    __asm {
        sub esp, 8
        push ebx
        push esi
        push edi
        mov ebx, ecx
        push 18h
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes E8 4D DB 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xdb
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 1ch]
        add esp, 4
        inc ecx
        mov dword ptr [esp + 0ch], eax
        push ecx
        push edx
        push eax
        ; Exact mapped bytes FF 15 B4 50 17 10: call dword ptr [0x101750b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov esi, dword ptr [ebx + 218h]
        mov eax, dword ptr [ebx + 21ch]
        cmp esi, eax
        ; Exact mapped bytes 74 25: je 0x1008eca1
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes 8B 3D A0 50 17 10: mov edi, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esp + 0ch]
        push eax
        push ecx
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 0F 84 F1 01 00 00: je 0x1008ee85
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 21ch]
        add esi, 4
        cmp esi, eax
        ; Exact mapped bytes 75 E1: jne 0x1008ec82
        __asm _emit 0x75
        __asm _emit 0xe1
        mov eax, dword ptr [ebx + 21ch]
        mov edx, dword ptr [ebx + 220h]
        lea esi, [ebx + 214h]
        sub edx, eax
        sar edx, 2
        cmp edx, 1
        mov edi, eax
        ; Exact mapped bytes 0F 83 DF 00 00 00: jae 0x1008eda2
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x1008ecd6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ; Exact mapped bytes 77 05: ja 0x1008ecdb
        __asm _emit 0x77
        __asm _emit 0x05
        mov ecx, 1
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x1008ece3
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x1008ece8
        __asm _emit 0xeb
        __asm _emit 0x05
        sub eax, edx
        sar eax, 2
        add eax, ecx
        test eax, eax
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 7D 02: jge 0x1008ecf4
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        shl eax, 2
        push ebp
        push eax
        ; Exact mapped bytes E8 A2 DA 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ebp, dword ptr [esi + 4]
        add esp, 4
        cmp ebp, edi
        mov dword ptr [esp + 20h], eax
        mov ebx, eax
        ; Exact mapped bytes 74 14: je 0x1008ed22
        __asm _emit 0x74
        __asm _emit 0x14
        push ebp
        push ebx
        ; Exact mapped bytes E8 7B 30 FB FF: call 0x10041d90
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x30
        __asm _emit 0xfb
        __asm _emit 0xff
        add ebp, 4
        add esp, 8
        add ebx, 4
        cmp ebp, edi
        ; Exact mapped bytes 75 EC: jne 0x1008ed0e
        __asm _emit 0x75
        __asm _emit 0xec
        lea ecx, [esp + 10h]
        push ecx
        push 1
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 2F 30 FB FF: call 0x10041d60
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x30
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [esi + 8]
        add ebx, 4
        push ebx
        push edx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 EF 2F FB FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x2f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 80 FE 00 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        push edx
        ; Exact mapped bytes E8 2B DA 0D 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xda
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 20h]
        add esp, 4
        lea ecx, [edx + eax*4]
        mov eax, dword ptr [esi + 4]
        test eax, eax
        mov dword ptr [esi + 0ch], ecx
        pop ebp
        ; Exact mapped bytes 75 15: jne 0x1008ed87
        __asm _emit 0x75
        __asm _emit 0x15
        mov ebx, dword ptr [esp + 10h]
        xor ecx, ecx
        mov dword ptr [esi + 4], edx
        lea eax, [edx + ecx*4 + 4]
        mov dword ptr [esi + 8], eax
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x1008ee2e
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov ebx, dword ptr [esp + 10h]
        sub ecx, eax
        mov dword ptr [esi + 4], edx
        sar ecx, 2
        lea eax, [edx + ecx*4 + 4]
        mov dword ptr [esi + 8], eax
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x1008ee2e
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        ; Exact mapped bytes 73 42: jae 0x1008edf0
        __asm _emit 0x73
        __asm _emit 0x42
        lea edx, [edi + 4]
        mov ecx, esi
        push edx
        push eax
        push edi
        ; Exact mapped bytes E8 75 2F FB FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x2f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        lea ecx, [esp + 0ch]
        mov edx, eax
        push ecx
        sub edx, edi
        mov ecx, 1
        sar edx, 2
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 86 2F FB FF: call 0x10041d60
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x2f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        cmp edi, eax
        ; Exact mapped bytes 74 49: je 0x1008ee2a
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [esp + 0ch]
        mov dword ptr [edi], edx
        add edi, 4
        cmp edi, eax
        ; Exact mapped bytes 75 F3: jne 0x1008ede1
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes EB 3A: jmp 0x1008ee2a
        __asm _emit 0xeb
        __asm _emit 0x3a
        push eax
        push eax
        add eax, -4
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 33 2F FB FF: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x2f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        lea eax, [ecx - 4]
        cmp edi, eax
        ; Exact mapped bytes 74 0F: je 0x1008ee16
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [eax - 4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edi
        mov dword ptr [ecx], edx
        ; Exact mapped bytes 75 F1: jne 0x1008ee07
        __asm _emit 0x75
        __asm _emit 0xf1
        lea eax, [edi + 4]
        cmp edi, eax
        ; Exact mapped bytes 74 0D: je 0x1008ee2a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [edi], ecx
        add edi, 4
        cmp edi, eax
        ; Exact mapped bytes 75 F3: jne 0x1008ee1d
        __asm _emit 0x75
        __asm _emit 0xf3
        add dword ptr [esi + 8], 4
        ; Exact mapped bytes 66 8B 53 24: mov dx, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0x24
        and edx, 1f00h
        cmp edx, 200h
        ; Exact mapped bytes 75 45: jne 0x1008ee85
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [esp + 0ch]
        mov ecx, dword ptr [ebx + 208h]
        push 83add7h
        push 0
        push eax
        ; Exact mapped bytes E8 59 4E 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x4e
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 20ch]
        push 0ffffffh
        push -1
        push 101ace48h
        ; Exact mapped bytes E8 42 4E 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x4e
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 210h]
        push 0ffffffh
        push -1
        push 101ace48h
        ; Exact mapped bytes E8 2B 4E 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x4e
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
