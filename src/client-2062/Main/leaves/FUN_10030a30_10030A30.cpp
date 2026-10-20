// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10030A30 .. +0x244 bytes.
extern "C" __declspec(naked) void FUN_10030a30_10030A30() {
    __asm {
        sub esp, 8ch
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov ecx, dword ptr [ebp + 0a07ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x10030a55
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 0a07ch], 0
        push ebx
        mov ecx, ebp
        ; Exact mapped bytes E8 63 FE FF FF: call 0x100308c0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        or byte ptr [ebp + 24h], 2
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 10h], 1
        mov esi, dword ptr [ecx + 14h]
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 33 3E 02 00: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        xor ebx, ebx
        mov bl, ah
        test bl, bl
        ; Exact mapped bytes 74 6B: je 0x10030af0
        __asm _emit 0x74
        __asm _emit 0x6b
        test esi, esi
        ; Exact mapped bytes 74 67: je 0x10030af0
        __asm _emit 0x74
        __asm _emit 0x67
        mov edi, dword ptr [esi + 0ch]
        mov eax, dword ptr [edi + 0a4h]
        mov edx, eax
        and edx, 0fffffffeh
        cmp edx, 2
        ; Exact mapped bytes 75 0A: jne 0x10030aa6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [edi + 60h]
        and ecx, 0fh
        cmp cl, bl
        ; Exact mapped bytes 74 3B: je 0x10030ae1
        __asm _emit 0x74
        __asm _emit 0x3b
        mov edx, dword ptr [edi + 60h]
        shr eax, 1
        push eax
        mov eax, dword ptr [edi + 438h]
        and edx, 0fh
        mov ecx, dword ptr [eax + 6ch]
        push edx
        push ecx
        lea edx, [esp + 28h]
        push 1019818ch
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 14h
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes FF 15 AC 50 17 10: call dword ptr [0x101750ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov esi, dword ptr [esi + 8]
        test esi, esi
        ; Exact mapped bytes 75 AA: jne 0x10030a89
        __asm _emit 0x75
        __asm _emit 0xaa
        ; Exact mapped bytes EB 0F: jmp 0x10030af0
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 C4 3D 02 00: call 0x100548b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        mov ecx, dword ptr [esp + 10h]
        mov esi, 1
        push esi
        push ecx
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 BA 3D 02 00: call 0x100548c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8ch]
        mov eax, 40000000h
        cmp ecx, eax
        mov dword ptr [ebp + 88h], eax
        pop ebx
        ; Exact mapped bytes 75 58: jne 0x10030b74
        __asm _emit 0x75
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 55 24: mov dx, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 2f4h]
        and edx, 0e2ffh
        mov dword ptr [ebp + 0a010h], 16h
        or dh, 2
        push 4
        ; Exact mapped bytes 66 89 55 24: mov word ptr [ebp + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x24
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 2f8h]
        ; Exact mapped bytes 66 09 70 24: or word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x70
        __asm _emit 0x24
        mov dword ptr [ebp + 0a8h], 3ch
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 AE 3E 02 00: call 0x10054a10
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x3e
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0a8h]
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 BC 47 02 00: call 0x10055330
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 101ad0e8h
        ; Exact mapped bytes E8 2C C0 08 00: call 0x100bcbb0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D DC 56 1C 10: mov ecx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 20000h
        ; Exact mapped bytes 89 0D D8 56 1C 10: mov dword ptr [0x101c56d8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 60 6C 08 00: call 0x100b7800
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x6c
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E4 56 1C 10: mov ecx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 D5 D9 01 00: call 0x1004e580
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes A1 98 7C 1A 10: mov eax, dword ptr [0x101a7c98]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x7c
        __asm _emit 0x1a
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x10030c6a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esp + 0ch]
        mov dword ptr [esp + 10h], 0
        push edx
        push 0f003fh
        push 0
        push 10197c20h
        push 80000002h
        ; Exact mapped bytes FF 15 14 50 17 10: call dword ptr [0x10175014]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D 10 50 17 10: mov edi, dword ptr [0x10175010]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x10030c0c
        __asm _emit 0x74
        __asm _emit 0x26
        lea eax, [esp + 14h]
        lea ecx, [esp + 0ch]
        push eax
        push ecx
        push 0
        push 0f003fh
        push 0
        push 101ace48h
        push 0
        push 10197c20h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esp + 0ch]
        ; Exact mapped bytes 8B 35 04 50 17 10: mov esi, dword ptr [0x10175004]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esp + 10h]
        push 4
        push edx
        push 4
        push 0
        push 10197c0ch
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x10030c6a
        __asm _emit 0x74
        __asm _emit 0x3d
        lea ecx, [esp + 14h]
        lea edx, [esp + 0ch]
        push ecx
        push edx
        push 0
        push 0f003fh
        push 0
        push 10197c0ch
        push 0
        push 10197c20h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 0ch]
        lea eax, [esp + 10h]
        push 4
        push eax
        push 4
        push 0
        push 10197c0ch
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        pop edi
        pop esi
        pop ebp
        add esp, 8ch
        ret
    }
}
