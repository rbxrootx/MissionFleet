// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10063480 .. +0x2CC bytes.
extern "C" __declspec(naked) void FUN_10063480_10063480() {
    __asm {
        push -1
        push 1016f53bh
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
        push ebp
        push esi
        xor ebx, ebx
        push edi
        mov esi, ecx
        push ebx
        ; Exact mapped bytes 89 35 DC 56 1C 10: mov dword ptr [0x101c56dc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 76 BC 09 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xbc
        __asm _emit 0x09
        __asm _emit 0x00
        push 0ffffff00h
        mov ecx, esi
        ; Exact mapped bytes E8 AA BC 09 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xbc
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20b94h]
        mov dword ptr [esi + 58h], 100h
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [esi + 20ba4h], ebx
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 114h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        lea ecx, [esi + 20b8ch]
        mov edx, 2
        mov edi, 0fffeh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100634ef
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        push 54h
        and ecx, 0e1ffh
        or ecx, 105h
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes E8 8A 92 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x92
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        cmp eax, ebx
        mov dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes 74 30: je 0x10063555
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 38 57 1C 10: mov ecx, dword ptr [0x101c5738]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], ebx
        ; Exact mapped bytes 7E 0A: jle 0x1006353d
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov edx, dword ptr [ecx + 190h]
        cmp edx, ebx
        ; Exact mapped bytes 75 02: jne 0x1006353f
        __asm _emit 0x75
        __asm _emit 0x02
        xor edx, edx
        push 7d0h
        push edx
        mov edx, dword ptr [esi + 104e0h]
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 BD A4 09 00: call 0x100fda10
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa4
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10063557
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 104e0h]
        mov dword ptr [esi + 10500h], eax
        mov eax, 51eb851fh
        mov dword ptr [esp + 1ch], 0ffffffffh
        mov edx, dword ptr [ecx + 0b0h]
        imul edx, dword ptr [ecx + 0a8h]
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 2fa0be83h
        mov dword ptr [esi + 10508h], edx
        mov edx, dword ptr [ecx + 0b4h]
        imul edx, dword ptr [ecx + 0ach]
        imul edx
        sar edx, 4
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [esi + 1050ch], edx
        imul edx, dword ptr [esi + 10508h]
        push edx
        ; Exact mapped bytes E8 E0 91 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1050ch]
        mov edi, eax
        imul ecx, dword ptr [esi + 10508h]
        mov edx, ecx
        xor eax, eax
        shr ecx, 2
        mov dword ptr [esi + 10504h], edi
        add esp, 4
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        and ecx, 3
        ; Exact mapped bytes F3 AA: rep stosb byte ptr es:[edi], al
        __asm _emit 0xf3
        __asm _emit 0xaa
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edi, 300h
        mov dword ptr [eax + 50h], ebx
        mov dword ptr [eax + 54h], edi
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 6D 75 05 00: call 0x100bab70
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10a30h]
        mov ebp, 0fff0h
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [eax + 50h], ebx
        mov dword ptr [eax + 54h], edi
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 48 75 05 00: call 0x100bab70
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x75
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [esi + 20b98h]
        mov edi, 1
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 20b94h]
        ; Exact mapped bytes E8 7E 87 FB FF: call 0x1001bdc0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 109fch]
        push ebx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 10a00h]
        push ebx
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 10a04h]
        push ebx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 21a34h]
        mov ecx, dword ptr [esi + 109fch]
        cmp eax, ebx
        mov dword ptr [esi + 109f8h], ecx
        mov dword ptr [esi + 10a08h], ebx
        mov dword ptr [esi + 10a0ch], 0bh
        mov dword ptr [esi + 10a10h], 14h
        mov dword ptr [esi + 10a14h], edi
        mov dword ptr [esi + 10a18h], edi
        mov dword ptr [esi + 10a1ch], edi
        ; Exact mapped bytes 74 6B: je 0x10063713
        __asm _emit 0x74
        __asm _emit 0x6b
        mov eax, dword ptr [esi + 104bch]
        xor edi, edi
        cmp eax, ebx
        ; Exact mapped bytes 7E 43: jle 0x100636f7
        __asm _emit 0x7e
        __asm _emit 0x43
        mov ebp, 32h
        lea ebx, [esi + 21744h]
        cmp ebp, 4e2h
        ; Exact mapped bytes 7D 63: jge 0x1006372a
        __asm _emit 0x7d
        __asm _emit 0x63
        mov ecx, dword ptr [ebx]
        push edi
        ; Exact mapped bytes E8 F1 31 07 00: call 0x100d68c0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x31
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        push 0
        push ebp
        ; Exact mapped bytes E8 F7 B5 09 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 104bch]
        inc edi
        add ebx, 4
        add ebp, 96h
        cmp edi, eax
        ; Exact mapped bytes 7C D2: jl 0x100636bf
        __asm _emit 0x7c
        __asm _emit 0xd2
        cmp edi, 8
        ; Exact mapped bytes 7D 38: jge 0x1006372a
        __asm _emit 0x7d
        __asm _emit 0x38
        mov ebp, 0fff0h
        mov edx, 8
        lea ecx, [esi + edi*4 + 21744h]
        sub edx, edi
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x10063705
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes EB 17: jmp 0x1006372a
        __asm _emit 0xeb
        __asm _emit 0x17
        lea ecx, [esi + 21744h]
        mov edx, 8
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1006371e
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, 20h
        xor eax, eax
        lea edi, [esi + 20b04h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
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
        ret
    }
}
