// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10005630 .. +0x454 bytes.
extern "C" __declspec(naked) void FUN_10005630_10005630() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff8h
        sub esp, 230h
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor edx, edx
        mov dword ptr [esp + 14h], edx
        mov al, byte ptr [edi + 0f4h]
        test al, al
        ; Exact mapped bytes 0F 86 26 04 00 00: jbe 0x10005a7c
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x26
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 28h], edx
        lea esi, [edi + 109h]
        mov al, byte ptr [esi - 0ch]
        test al, al
        ; Exact mapped bytes 0F 86 EA 03 00 00: jbe 0x10005a55
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi - 9]
        test eax, eax
        ; Exact mapped bytes 0F 85 DF 03 00 00: jne 0x10005a55
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi - 0dh], 4
        ; Exact mapped bytes 0F 85 D5 03 00 00: jne 0x10005a55
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi - 1]
        cmp al, 1
        ; Exact mapped bytes 75 58: jne 0x100056df
        __asm _emit 0x75
        __asm _emit 0x58
        mov eax, dword ptr [esi - 5]
        test eax, eax
        ; Exact mapped bytes 0F 84 C3 03 00 00: je 0x10005a55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        mov eax, dword ptr [eax + edx + 0f7ch]
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x100056cb
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [eax + 0ch]
        cmp dword ptr [ecx + 4b8h], -1
        ; Exact mapped bytes 0F 84 A5 03 00 00: je 0x10005a55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 334h]
        mov ebx, dword ptr [ecx + 318h]
        cmp edx, ebx
        ; Exact mapped bytes 0F 8C 91 03 00 00: jl 0x10005a55
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x100056a0
        __asm _emit 0x75
        __asm _emit 0xd5
        mov byte ptr [esi - 1], 2
        mov byte ptr [esi], 0
        mov byte ptr [esi + 1], 0
        mov byte ptr [esi + 2], 0
        ; Exact mapped bytes E9 76 03 00 00: jmp 0x10005a55
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 2
        ; Exact mapped bytes 0F 85 FF 01 00 00: jne 0x100058e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi - 5]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 63 03 00 00: je 0x10005a55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D9 8E 0E 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x8e
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 53 03 00 00: jne 0x10005a55
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 0ch]
        mov ecx, dword ptr [esp + 28h]
        lea ebp, [eax + ecx + 0f78h]
        mov dword ptr [esp + 3ch], ebp
        mov eax, dword ptr [ebp + 4]
        test eax, eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 74 7B: je 0x1000579a
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes EB 04: jmp 0x10005725
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 2ch]
        mov edx, dword ptr [eax + 0ch]
        mov ebp, dword ptr [esi - 5]
        mov ebx, dword ptr [edx + 4e8h]
        mov ecx, dword ptr [ebp + 4]
        mov eax, dword ptr [ebx + 4]
        sub eax, ecx
        cdq
        mov ecx, eax
        mov eax, dword ptr [ebx + 8]
        xor ecx, edx
        sub ecx, edx
        mov edx, dword ptr [ebp + 8]
        sub eax, edx
        cdq
        xor eax, edx
        sub eax, edx
        mov edx, eax
        imul edx, eax
        mov eax, ecx
        imul eax, ecx
        add edx, eax
        mov dword ptr [esp + 30h], edx
        ; Exact mapped bytes DB 44 24 30: fild dword ptr [esp + 0x30]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes DD 5C 24 30: fstp qword ptr [esp + 0x30]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x30
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 30h]
        push ecx
        push edx
        ; Exact mapped bytes E8 38 70 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x70
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 2A 70 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x70
        __asm _emit 0x16
        __asm _emit 0x00
        cmp eax, 258h
        ; Exact mapped bytes 0F 8C FD 00 00 00: jl 0x10005884
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov eax, dword ptr [eax + 8]
        test eax, eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes 75 8B: jne 0x10005721
        __asm _emit 0x75
        __asm _emit 0x8b
        mov ebp, dword ptr [esp + 3ch]
        mov al, byte ptr [esi + 2]
        test al, al
        ; Exact mapped bytes 0F 85 E8 00 00 00: jne 0x1000588d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 DF 02 00 00: call 0x10005a90
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 240h]
        mov edx, dword ptr [edi + 0ch]
        lea ecx, [eax + eax*2]
        lea ecx, [eax + ecx*4]
        mov eax, dword ptr [edx + 4]
        add eax, ecx
        xor edx, edx
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, 32h
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ecx
        sub dl, 51h
        mov byte ptr [esi + 2], dl
        mov edx, dword ptr [edi + 0ch]
        mov ecx, dword ptr [edi + 240h]
        mov eax, dword ptr [edx + 8]
        xor edx, edx
        add eax, ecx
        mov ecx, 3
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ecx
        mov ecx, 32h
        test dl, dl
        mov byte ptr [esi + 1], dl
        seta dl
        add edx, 2
        mov byte ptr [esi + 1], dl
        mov eax, dword ptr [edi + 240h]
        xor edx, edx
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ecx
        add dl, 19h
        mov byte ptr [esi], dl
        mov al, byte ptr [esi + 1]
        cmp al, 3
        ; Exact mapped bytes 0F 85 0D 02 00 00: jne 0x10005a55
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 4]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 02 02 00 00: je 0x10005a55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 0ch]
        mov eax, 10624dd3h
        mov edx, dword ptr [edx + 334h]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 0fah
        ; Exact mapped bytes 7D 03: jge 0x10005878
        __asm _emit 0x7d
        __asm _emit 0x03
        mov byte ptr [esi], 0
        mov ecx, dword ptr [ecx + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x10005853
        __asm _emit 0x75
        __asm _emit 0xd4
        ; Exact mapped bytes E9 D1 01 00 00: jmp 0x10005a55
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [esi - 1], 3
        ; Exact mapped bytes E9 C8 01 00 00: jmp 0x10005a55
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 76 4C: jbe 0x100058de
        __asm _emit 0x76
        __asm _emit 0x4c
        mov cl, byte ptr [esi + 1]
        mov dl, byte ptr [esp + 14h]
        mov byte ptr [esp + 22h], cl
        lea ecx, [esp + 140h]
        mov byte ptr [esp + 20h], 1
        mov byte ptr [esp + 21h], 5
        mov byte ptr [esp + 23h], 5
        mov eax, dword ptr [esp + 20h]
        push 5
        push ecx
        mov ecx, dword ptr [edi + 0ch]
        push 0ch
        mov byte ptr [esp + 150h], dl
        mov dword ptr [esp + 14ch], eax
        ; Exact mapped bytes E8 4E 60 0E 00: call 0x100eb920
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x60
        __asm _emit 0x0e
        __asm _emit 0x00
        mov al, byte ptr [esi]
        dec al
        mov byte ptr [esi], al
        ; Exact mapped bytes 75 04: jne 0x100058de
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [esi + 1], 0
        dec byte ptr [esi + 2]
        ; Exact mapped bytes E9 6F 01 00 00: jmp 0x10005a55
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 3
        ; Exact mapped bytes 0F 85 D4 00 00 00: jne 0x100059c2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        xor ebx, ebx
        mov ebp, dword ptr [ecx + edx + 0f7ch]
        test ebp, ebp
        ; Exact mapped bytes 74 7A: je 0x10005978
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax + 334h]
        cmp edx, dword ptr [eax + 318h]
        ; Exact mapped bytes 7C 19: jl 0x10005928
        __asm _emit 0x7c
        __asm _emit 0x19
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 118h
        ; Exact mapped bytes 7D 05: jge 0x1000592d
        __asm _emit 0x7d
        __asm _emit 0x05
        mov ebx, 1
        mov ebp, dword ptr [ebp + 8]
        test ebp, ebp
        ; Exact mapped bytes 75 CA: jne 0x100058fe
        __asm _emit 0x75
        __asm _emit 0xca
        test ebx, ebx
        ; Exact mapped bytes 74 40: je 0x10005978
        __asm _emit 0x74
        __asm _emit 0x40
        mov dl, byte ptr [esp + 14h]
        mov byte ptr [esp + 18h], 1
        mov byte ptr [esp + 1c4h], dl
        lea edx, [esp + 1c0h]
        mov byte ptr [esp + 19h], 5
        mov byte ptr [esp + 1ah], 2
        mov byte ptr [esp + 1bh], 5
        mov eax, dword ptr [esp + 18h]
        push 5
        push edx
        push 0ch
        mov dword ptr [esp + 1cch], eax
        ; Exact mapped bytes E8 AD 5F 0E 00: call 0x100eb920
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x5f
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x10005a55
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 14h]
        mov byte ptr [esp + 1ch], 1
        mov byte ptr [esp + 1dh], 2
        mov byte ptr [esp + 1eh], 1
        mov byte ptr [esp + 46h], al
        mov eax, dword ptr [esi - 5]
        mov byte ptr [esp + 1fh], 7
        mov edx, dword ptr [esp + 1ch]
        mov dword ptr [esp + 40h], edx
        ; Exact mapped bytes 66 8B 90 2C 03 00 00: mov dx, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 40h]
        push 7
        push eax
        push 0ch
        ; Exact mapped bytes 66 89 54 24 50: mov word ptr [esp + 0x50], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x50
        ; Exact mapped bytes E8 67 5F 0E 00: call 0x100eb920
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x5f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [esi - 1], 4
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x10005a55
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 4
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x10005a55
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        mov ebp, dword ptr [ecx + edx + 0f7ch]
        test ebp, ebp
        ; Exact mapped bytes 74 7D: je 0x10005a55
        __asm _emit 0x74
        __asm _emit 0x7d
        mov edx, dword ptr [ebp + 0ch]
        mov eax, 10624dd3h
        mov ecx, dword ptr [edx + 334h]
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        cmp edx, 118h
        ; Exact mapped bytes 7D 54: jge 0x10005a4e
        __asm _emit 0x7d
        __asm _emit 0x54
        mov cl, byte ptr [esp + 14h]
        mov eax, dword ptr [esi - 5]
        mov byte ptr [esp + 24h], 1
        mov byte ptr [esp + 25h], 2
        mov byte ptr [esp + 26h], 0
        mov byte ptr [esp + 27h], 7
        mov edx, dword ptr [esp + 24h]
        mov byte ptr [esp + 0c6h], cl
        ; Exact mapped bytes 66 8B 88 2C 03 00 00: mov cx, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 0c0h], edx
        lea edx, [esp + 0c0h]
        push 7
        ; Exact mapped bytes 66 89 8C 24 C8 00 00 00: mov word ptr [esp + 0xc8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ch]
        push edx
        push 0ch
        ; Exact mapped bytes E8 D6 5E 0E 00: call 0x100eb920
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x5e
        __asm _emit 0x0e
        __asm _emit 0x00
        mov byte ptr [esi - 1], 5
        mov ebp, dword ptr [ebp + 8]
        test ebp, ebp
        ; Exact mapped bytes 75 83: jne 0x100059d8
        __asm _emit 0x75
        __asm _emit 0x83
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [esp + 28h]
        xor ecx, ecx
        inc eax
        mov cl, byte ptr [edi + 0f4h]
        add edx, 10h
        add esi, 14h
        cmp eax, ecx
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 28h], edx
        ; Exact mapped bytes 0F 8C E4 FB FF FF: jl 0x10005660
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
