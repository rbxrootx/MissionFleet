// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100183C0 .. +0x207 bytes.
extern "C" __declspec(naked) void FUN_100183c0_100183C0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 F6 01 00 00: je 0x100185c5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        test ecx, ecx
        ; Exact mapped bytes 76 13: jbe 0x100183e9
        __asm _emit 0x76
        __asm _emit 0x13
        test al, 1
        ; Exact mapped bytes 74 09: je 0x100183e3
        __asm _emit 0x74
        __asm _emit 0x09
        and eax, 0fffeh
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        dec ecx
        mov dword ptr [esi + 70h], ecx
        pop esi
        ret
        test al, 1
        ; Exact mapped bytes 75 06: jne 0x100183f3
        __asm _emit 0x75
        __asm _emit 0x06
        or al, 1
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 84h]
        mov ecx, dword ptr [esi + 88h]
        push ebx
        push edi
        mov edi, dword ptr [esi + 8ch]
        neg eax
        neg ecx
        neg edi
        cmp eax, -10h
        ; Exact mapped bytes 7E 41: jle 0x10018453
        __asm _emit 0x7e
        __asm _emit 0x41
        cmp eax, 10h
        ; Exact mapped bytes 7D 3C: jge 0x10018453
        __asm _emit 0x7d
        __asm _emit 0x3c
        cmp eax, -8
        ; Exact mapped bytes 7E 2A: jle 0x10018446
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp eax, 8
        ; Exact mapped bytes 7D 25: jge 0x10018446
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp eax, -4
        ; Exact mapped bytes 7E 17: jle 0x1001843d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, 4
        ; Exact mapped bytes 7D 12: jge 0x1001843d
        __asm _emit 0x7d
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x10018434
        __asm _emit 0x7d
        __asm _emit 0x05
        or ebx, 0ffffffffh
        ; Exact mapped bytes EB 2A: jmp 0x1001845e
        __asm _emit 0xeb
        __asm _emit 0x2a
        xor ebx, ebx
        test eax, eax
        setg bl
        ; Exact mapped bytes EB 21: jmp 0x1001845e
        __asm _emit 0xeb
        __asm _emit 0x21
        cdq
        sub eax, edx
        mov ebx, eax
        sar ebx, 1
        ; Exact mapped bytes EB 18: jmp 0x1001845e
        __asm _emit 0xeb
        __asm _emit 0x18
        cdq
        and edx, 3
        add eax, edx
        mov ebx, eax
        sar ebx, 2
        ; Exact mapped bytes EB 0B: jmp 0x1001845e
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 7
        add eax, edx
        mov ebx, eax
        sar ebx, 3
        cmp ecx, -10h
        ; Exact mapped bytes 7E 47: jle 0x100184aa
        __asm _emit 0x7e
        __asm _emit 0x47
        cmp ecx, 10h
        ; Exact mapped bytes 7D 42: jge 0x100184aa
        __asm _emit 0x7d
        __asm _emit 0x42
        cmp ecx, -8
        ; Exact mapped bytes 7E 2E: jle 0x1001849b
        __asm _emit 0x7e
        __asm _emit 0x2e
        cmp ecx, 8
        ; Exact mapped bytes 7D 29: jge 0x1001849b
        __asm _emit 0x7d
        __asm _emit 0x29
        cmp ecx, -4
        ; Exact mapped bytes 7E 19: jle 0x10018490
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp ecx, 4
        ; Exact mapped bytes 7D 14: jge 0x10018490
        __asm _emit 0x7d
        __asm _emit 0x14
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x10018485
        __asm _emit 0x7d
        __asm _emit 0x05
        or ecx, 0ffffffffh
        ; Exact mapped bytes EB 32: jmp 0x100184b7
        __asm _emit 0xeb
        __asm _emit 0x32
        xor eax, eax
        test ecx, ecx
        setg al
        mov ecx, eax
        ; Exact mapped bytes EB 27: jmp 0x100184b7
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, ecx
        cdq
        sub eax, edx
        mov ecx, eax
        sar ecx, 1
        ; Exact mapped bytes EB 1C: jmp 0x100184b7
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        mov ecx, eax
        sar ecx, 2
        ; Exact mapped bytes EB 0D: jmp 0x100184b7
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, ecx
        cdq
        and edx, 7
        add eax, edx
        mov ecx, eax
        sar ecx, 3
        cmp edi, -10h
        ; Exact mapped bytes 7E 41: jle 0x100184fd
        __asm _emit 0x7e
        __asm _emit 0x41
        cmp edi, 10h
        ; Exact mapped bytes 7D 3C: jge 0x100184fd
        __asm _emit 0x7d
        __asm _emit 0x3c
        cmp edi, -8
        ; Exact mapped bytes 7E 2A: jle 0x100184f0
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp edi, 8
        ; Exact mapped bytes 7D 25: jge 0x100184f0
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp edi, -4
        ; Exact mapped bytes 7E 17: jle 0x100184e7
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp edi, 4
        ; Exact mapped bytes 7D 12: jge 0x100184e7
        __asm _emit 0x7d
        __asm _emit 0x12
        test edi, edi
        ; Exact mapped bytes 7D 05: jge 0x100184de
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 2A: jmp 0x10018508
        __asm _emit 0xeb
        __asm _emit 0x2a
        xor eax, eax
        test edi, edi
        setg al
        ; Exact mapped bytes EB 21: jmp 0x10018508
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, edi
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 18: jmp 0x10018508
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, edi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        ; Exact mapped bytes EB 0B: jmp 0x10018508
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, edi
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov edi, dword ptr [esi + 88h]
        mov edx, dword ptr [esi + 84h]
        add edi, ecx
        mov ecx, dword ptr [esi + 8ch]
        add ecx, eax
        add edx, ebx
        mov ebx, dword ptr [esi + 7ch]
        mov eax, ecx
        mov dword ptr [esi + 8ch], ecx
        mov dword ptr [esi + 84h], edx
        lea ecx, [eax + eax*2]
        mov eax, 66666667h
        shl ecx, 1
        add ebx, edx
        imul ecx
        sar edx, 2
        mov ecx, edx
        mov eax, 5d9f7391h
        shr ecx, 1fh
        add edx, ecx
        mov ecx, dword ptr [esi + 80h]
        add edx, edi
        mov dword ptr [esi + 88h], edi
        add ecx, edx
        mov dword ptr [esi + 7ch], ebx
        imul ecx
        sar edx, 7
        mov eax, edx
        mov dword ptr [esi + 80h], ecx
        mov ecx, dword ptr [esi + 78h]
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        sub ecx, edx
        imul ebx
        sar edx, 6
        mov eax, edx
        push ecx
        mov ecx, dword ptr [esi + 74h]
        shr eax, 1fh
        add edx, eax
        lea edx, [edx + ecx + 1]
        mov ecx, esi
        push edx
        ; Exact mapped bytes E8 37 67 0E 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x67
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50h]
        mov ecx, dword ptr [esi + 60h]
        pop edi
        cmp eax, ecx
        pop ebx
        ; Exact mapped bytes 7D 06: jge 0x100185ab
        __asm _emit 0x7d
        __asm _emit 0x06
        inc eax
        mov dword ptr [esi + 50h], eax
        pop esi
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 AE 6A 0E 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x6a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 F7 6A 0E 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6a
        __asm _emit 0x0e
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 08: je 0x100185c5
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        pop esi
        ret
    }
}
