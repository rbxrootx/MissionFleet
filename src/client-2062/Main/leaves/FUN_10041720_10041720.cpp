// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10041720 .. +0x236 bytes.
extern "C" __declspec(naked) void FUN_10041720_10041720() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr [esp + 14h], ebp
        mov eax, dword ptr [ebp + 0e0h]
        mov ecx, dword ptr [ebp + 0e4h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 84 0B 02 00 00: je 0x1004194c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 1ch]
        xor edx, edx
        mov ebx, 4
        mov dl, byte ptr [esi + 0ch]
        mov edi, dword ptr [eax]
        cmp dword ptr [edi + 78h], edx
        ; Exact mapped bytes 74 10: je 0x10041766
        __asm _emit 0x74
        __asm _emit 0x10
        add eax, ebx
        cmp eax, ecx
        ; Exact mapped bytes 75 F3: jne 0x1004174f
        __asm _emit 0x75
        __asm _emit 0xf3
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [esi + 28h], edx
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [edx + 68h]
        mov edx, dword ptr [esp + 1ch]
        mov dword ptr [edx + 2ch], ecx
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx]
        mov esi, dword ptr [eax + 88h]
        mov eax, dword ptr [esi + 4]
        test eax, eax
        ; Exact mapped bytes 74 52: je 0x100417f1
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [esi + 8]
        sub ecx, eax
        sar ecx, 2
        ; Exact mapped bytes 74 48: je 0x100417f1
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [esi + 8]
        cmp eax, ecx
        ; Exact mapped bytes 74 16: je 0x100417c6
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 66 8B 52 08: mov dx, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x08
        mov edi, dword ptr [eax]
        ; Exact mapped bytes 66 39 57 08: cmp word ptr [edi + 8], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x57
        __asm _emit 0x08
        ; Exact mapped bytes 77 1D: ja 0x100417dd
        __asm _emit 0x77
        __asm _emit 0x1d
        add eax, ebx
        cmp eax, ecx
        ; Exact mapped bytes 75 F2: jne 0x100417b8
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, dword ptr [esi + 8]
        lea edx, [esp + 1ch]
        push edx
        push 1
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 38 44 05 00: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 64 01 00 00: jmp 0x10041941
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        push ecx
        push 1
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 24 44 05 00: call 0x10095c10
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 50 01 00 00: jmp 0x10041941
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 0ch]
        sub ecx, eax
        mov edi, eax
        sar ecx, 2
        cmp ecx, 1
        ; Exact mapped bytes 0F 83 B0 00 00 00: jae 0x100418b7
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x1004181a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ; Exact mapped bytes 77 05: ja 0x1004181f
        __asm _emit 0x77
        __asm _emit 0x05
        mov ecx, 1
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x10041827
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x1004182c
        __asm _emit 0xeb
        __asm _emit 0x05
        sub eax, edx
        sar eax, 2
        add eax, ecx
        test eax, eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 7D 02: jge 0x10041838
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        lea edx, [eax*4]
        push edx
        ; Exact mapped bytes E8 5B AF 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xaf
        __asm _emit 0x12
        __asm _emit 0x00
        add esp, 4
        mov ebx, eax
        mov eax, dword ptr [esi + 4]
        mov ecx, esi
        push ebx
        push edi
        push eax
        ; Exact mapped bytes E8 D9 04 00 00: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esp + 1ch]
        mov ebp, eax
        push ecx
        push 1
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 F8 04 00 00: call 0x10041d60
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        add ebp, 4
        push ebp
        push edx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 B8 04 00 00: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 49 D3 05 00: call 0x1009ebd0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd3
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        push edx
        ; Exact mapped bytes E8 F4 AE 12 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xae
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        add esp, 4
        lea ecx, [ebx + eax*4]
        mov dword ptr [esi + 0ch], ecx
        mov ecx, esi
        ; Exact mapped bytes E8 6C 04 00 00: call 0x10041d10
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 14h]
        lea edx, [ebx + eax*4 + 4]
        mov dword ptr [esi + 8], edx
        mov dword ptr [esi + 4], ebx
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x10041941
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        sub ecx, edi
        sar ecx, 2
        cmp ecx, 1
        ; Exact mapped bytes 73 43: jae 0x10041906
        __asm _emit 0x73
        __asm _emit 0x43
        lea edx, [edi + 4]
        mov ecx, esi
        push edx
        push eax
        push edi
        ; Exact mapped bytes E8 60 04 00 00: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        lea ecx, [esp + 1ch]
        mov edx, eax
        push ecx
        sub edx, edi
        mov ecx, 1
        sar edx, 2
        sub ecx, edx
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 71 04 00 00: call 0x10041d60
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov eax, edi
        cmp edi, ecx
        ; Exact mapped bytes 74 46: je 0x1004193e
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [esp + 1ch]
        mov dword ptr [eax], edx
        add eax, ebx
        cmp eax, ecx
        ; Exact mapped bytes 75 F4: jne 0x100418f8
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes EB 38: jmp 0x1004193e
        __asm _emit 0xeb
        __asm _emit 0x38
        push eax
        push eax
        add eax, -4
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 1D 04 00 00: call 0x10041d30
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        lea eax, [ecx - 4]
        cmp edi, eax
        ; Exact mapped bytes 74 0C: je 0x10041929
        __asm _emit 0x74
        __asm _emit 0x0c
        sub eax, ebx
        sub ecx, ebx
        cmp eax, edi
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes 75 F4: jne 0x1004191d
        __asm _emit 0x75
        __asm _emit 0xf4
        lea ecx, [edi + 4]
        mov eax, edi
        cmp edi, ecx
        ; Exact mapped bytes 74 0C: je 0x1004193e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [esp + 1ch]
        mov dword ptr [eax], edx
        add eax, ebx
        cmp eax, ecx
        ; Exact mapped bytes 75 F4: jne 0x10041932
        __asm _emit 0x75
        __asm _emit 0xf4
        add dword ptr [esi + 8], ebx
        mov eax, dword ptr [esp + 20h]
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x1004194c
        __asm _emit 0x74
        __asm _emit 0x03
        inc dword ptr [ebp + 44h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
