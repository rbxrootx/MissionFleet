// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F9FA0 .. +0x24A bytes.
extern "C" __declspec(naked) void FUN_100f9fa0_100F9FA0() {
    __asm {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov ecx, dword ptr [ebp + 118h]
        mov esi, dword ptr [ebp + 3e0h]
        sub esi, 8
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 7F 9E 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        add edi, -8
        cmp eax, edi
        ; Exact mapped bytes 0F 8D 18 02 00 00: jge 0x100fa1e4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 118h]
        ; Exact mapped bytes E8 69 9E 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 8E 05 02 00 00: jle 0x100fa1e4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 118h]
        ; Exact mapped bytes E8 56 9E 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 118h]
        mov dword ptr [esp + 10h], eax
        mov ebx, dword ptr [ecx + 5ch]
        ; Exact mapped bytes E8 24 A6 00 00: call 0x10104620
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [ebp + 11ch]
        mov edi, 4
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 12 A6 00 00: call 0x10104620
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 F3: jne 0x100fa007
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, dword ptr [ebp + 118h]
        ; Exact mapped bytes E8 21 9E 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 10h], eax
        ; Exact mapped bytes 0F 84 BB 01 00 00: je 0x100fa1e4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 3e0h]
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 0F 8E 77 01 00 00: jle 0x100fa1b0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 89ch
        lea esi, [ebp + 130h]
        neg ebx
        sub eax, ebp
        mov dword ptr [esp + 10h], eax
        mov ecx, dword ptr [esi - 98h]
        push ebx
        ; Exact mapped bytes E8 68 4E 00 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push ebx
        ; Exact mapped bytes E8 60 4E 00 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        push ebx
        ; Exact mapped bytes E8 54 4E 00 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 100h]
        push ebx
        ; Exact mapped bytes E8 48 4E 00 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 118h]
        ; Exact mapped bytes E8 BD 9D 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 8
        cmp edi, eax
        ; Exact mapped bytes 0F 8D E7 00 00 00: jge 0x100fa175
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 118h]
        ; Exact mapped bytes E8 A7 9D 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 0F 8C D4 00 00 00: jl 0x100fa175
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 98h]
        or byte ptr [eax + 24h], 1
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0d0ch]
        mov edx, dword ptr [ecx + 0b4ch]
        ; Exact mapped bytes 66 8B 42 0A: mov ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0a
        shr eax, 0ah
        and eax, 1fh
        cmp edi, eax
        ; Exact mapped bytes 7D 59: jge 0x100fa123
        __asm _emit 0x7d
        __asm _emit 0x59
        mov eax, dword ptr [esp + 10h]
        lea edx, [eax + esi]
        mov eax, dword ptr [edx + ecx]
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x100fa0fd
        __asm _emit 0x74
        __asm _emit 0x25
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 1A: jne 0x100fa0fd
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [esi]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x100fa19e
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + ecx]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x100fa19e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ecx]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x100fa19e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 100h]
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes EB 7B: jmp 0x100fa19e
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov edx, edi
        sub edx, eax
        mov eax, dword ptr [ecx + edx*4 + 0a3ch]
        test eax, eax
        ; Exact mapped bytes 74 6C: je 0x100fa19e
        __asm _emit 0x74
        __asm _emit 0x6c
        mov eax, dword ptr [esi]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 0d0ch]
        mov eax, dword ptr [edx + 0b4ch]
        ; Exact mapped bytes 66 8B 50 0A: mov dx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0a
        mov eax, edi
        shr edx, 0ah
        and edx, 1fh
        sub eax, edx
        cmp eax, 1
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 7E 06: jle 0x100fa16d
        __asm _emit 0x7e
        __asm _emit 0x06
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes EB 31: jmp 0x100fa19e
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        ; Exact mapped bytes EB 29: jmp 0x100fa19e
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [esi - 98h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 100h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 3e0h]
        inc edi
        add esi, 4
        cmp edi, eax
        ; Exact mapped bytes 0F 8C 9C FE FF FF: jl 0x100fa04c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 118h]
        ; Exact mapped bytes E8 85 9C 00 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 3e0h]
        mov ecx, eax
        mov eax, 46h
        sub esi, 8
        cdq
        idiv esi
        mov edx, dword ptr [ebp + 8]
        imul ecx, eax
        lea eax, [ecx + edx + 48h]
        mov ecx, dword ptr [ebp + 2b8h]
        push eax
        ; Exact mapped bytes E8 DC 4B 00 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
