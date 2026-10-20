// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EF370 .. +0x15A bytes.
extern "C" __declspec(naked) void FUN_100ef370_100EF370() {
    __asm {
        push -1
        push 1017403bh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        ; Exact mapped bytes 8B 1D 20 51 17 10: mov ebx, dword ptr [0x10175120]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 0e74h]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 66 8B 4F 04: mov cx, word ptr [edi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x04
        mov ebp, dword ptr [esi + 0e74h]
        cdq
        and ecx, 1ffh
        idiv ecx
        mov edi, edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        ; Exact mapped bytes 66 8B 4D 04: mov cx, word ptr [ebp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x04
        mov ebp, dword ptr [esi + 0b4h]
        cdq
        and ecx, 1ffh
        idiv ecx
        mov ebx, edx
        mov eax, ebx
        cdq
        and edx, 3
        add eax, edx
        mov ecx, eax
        mov eax, edi
        cdq
        and edx, 3
        sar ecx, 2
        add eax, edx
        imul ecx, ebp
        mov edx, ebp
        imul edx, ebp
        sar eax, 2
        add ecx, eax
        cmp ecx, edx
        ; Exact mapped bytes 0F 8D C5 00 00 00: jge 0x100ef4b5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5c40h]
        mov edx, dword ptr [esi + eax*4 + 0b8h]
        cmp byte ptr [edx + ecx], 0
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x100ef4b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0e74h]
        push 68h
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        shr edx, 1
        and edx, 0ffh
        sub ebx, edx
        shr ecx, 1
        lea eax, [ebx*8]
        and ecx, 0ffh
        sub eax, ebx
        sub edi, ecx
        lea eax, [eax + eax*2]
        lea ecx, [ebx + eax*2]
        mov eax, 51eb851fh
        shl ecx, 1
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov ebx, edx
        ; Exact mapped bytes E8 4C D3 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd3
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 74 50: je 0x100ef4b5
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D E8 57 1C 10: mov ecx, dword ptr [0x101c57e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 0e74h]
        cmp dword ptr [ecx + 160h], 1dh
        ; Exact mapped bytes 7E 10: jle 0x100ef48a
        __asm _emit 0x7e
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x100ef48a
        __asm _emit 0x74
        __asm _emit 0x06
        lea ebp, [ecx + 740h]
        mov dl, byte ptr [edx + 6]
        mov ecx, dword ptr [esi + 8]
        and edx, 3fh
        push 40h
        sub ecx, edx
        mov edx, dword ptr [esi + 4]
        push 0
        add ecx, ebx
        push 1388h
        add edx, edi
        push ecx
        mov ecx, dword ptr [esp + 34h]
        push edx
        push ebp
        push esi
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 3B 89 F2 FF: call 0x10017df0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x89
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
