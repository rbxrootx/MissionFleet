// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008F040 .. +0x1AD bytes.
extern "C" __declspec(naked) void FUN_1008f040_1008F040() {
    __asm {
        sub esp, 1ch
        ; Exact mapped bytes A1 3C D1 1A 10: mov eax, dword ptr [0x101ad13c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        push edi
        mov ecx, dword ptr [ebx + 208h]
        mov dword ptr [esp + 20h], ebx
        test eax, eax
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x1008f0f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 DB 4D 07 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x4d
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        xor edi, edi
        lea esi, [ebx + 1e8h]
        mov ebp, 4
        mov eax, dword ptr [esp + 10h]
        lea ecx, [edi + eax]
        push ecx
        mov ecx, dword ptr [ebx + 208h]
        ; Exact mapped bytes E8 87 4D 07 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x4d
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 54 01 00 00: je 0x1008f1e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 7ch]
        ; Exact mapped bytes 8B 0D 40 D1 1A 10: mov ecx, dword ptr [0x101ad140]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp edx, ecx
        ; Exact mapped bytes 75 2D: jne 0x1008f0cb
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 66 83 B8 9C 00 00 00 03: cmp word ptr [eax + 0x9c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb8
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        mov eax, esi
        mov ecx, 2
        ; Exact mapped bytes 75 0C: jne 0x1008f0bb
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [eax]
        add eax, ebp
        dec ecx
        mov dword ptr [edx + 50h], ebp
        ; Exact mapped bytes 75 F6: jne 0x1008f0af
        __asm _emit 0x75
        __asm _emit 0xf6
        ; Exact mapped bytes EB 25: jmp 0x1008f0e0
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [eax]
        add eax, ebp
        dec ecx
        mov dword ptr [edx + 50h], 5
        ; Exact mapped bytes 75 F2: jne 0x1008f0bb
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes EB 15: jmp 0x1008f0e0
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, esi
        mov ecx, 2
        mov edx, dword ptr [eax]
        add eax, ebp
        dec ecx
        mov dword ptr [edx + 50h], 0
        ; Exact mapped bytes 75 F2: jne 0x1008f0d2
        __asm _emit 0x75
        __asm _emit 0xf2
        inc edi
        add esi, 8
        cmp edi, ebp
        ; Exact mapped bytes 7C 8E: jl 0x1008f076
        __asm _emit 0x7c
        __asm _emit 0x8e
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 1ch
        ret
        ; Exact mapped bytes E8 4B 4D 07 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x4d
        __asm _emit 0x07
        __asm _emit 0x00
        xor esi, esi
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 10h], esi
        lea edi, [ebx + 1e8h]
        mov eax, dword ptr [esp + 14h]
        lea ecx, [esi + eax]
        push ecx
        mov ecx, dword ptr [ebx + 208h]
        ; Exact mapped bytes E8 F8 4C 07 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x00
        mov ebp, eax
        xor edx, edx
        mov dword ptr [esp + 1ch], ebp
        mov eax, dword ptr [ebp + 7ch]
        cmp eax, edx
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 75 32: jne 0x1008f15d
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes 66 83 BD 9C 00 00 00 06: cmp word ptr [ebp + 0x9c], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        mov eax, edi
        mov ecx, 2
        ; Exact mapped bytes 75 14: jne 0x1008f150
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [edx + 50h], 1
        ; Exact mapped bytes 75 F1: jne 0x1008f13c
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x1008f1d4
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [ebp + 50h], edx
        ; Exact mapped bytes 75 F5: jne 0x1008f150
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes EB 77: jmp 0x1008f1d4
        __asm _emit 0xeb
        __asm _emit 0x77
        mov esi, 5
        add ebx, 1a4h
        mov ecx, dword ptr [ebx]
        lea eax, [esp + 24h]
        push eax
        mov edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 8B 0D 04 57 1C 10: mov ecx, dword ptr [0x101c5704]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        ; Exact mapped bytes E8 D2 37 F8 FF: call 0x10012950
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x37
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 28h]
        cmp ecx, eax
        ; Exact mapped bytes 75 37: jne 0x1008f1c1
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 66 83 BD 9C 00 00 00 03: cmp word ptr [ebp + 0x9c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 75 1B: jne 0x1008f1af
        __asm _emit 0x75
        __asm _emit 0x1b
        lea edx, [esi - 1]
        mov eax, edi
        mov ecx, 2
        mov ebp, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [ebp + 50h], edx
        ; Exact mapped bytes 75 F5: jne 0x1008f19e
        __asm _emit 0x75
        __asm _emit 0xf5
        mov ebp, dword ptr [esp + 1ch]
        ; Exact mapped bytes EB 12: jmp 0x1008f1c1
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, edi
        mov ecx, 2
        mov edx, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [edx + 50h], esi
        ; Exact mapped bytes 75 F5: jne 0x1008f1b6
        __asm _emit 0x75
        __asm _emit 0xf5
        add esi, 2
        add ebx, 4
        cmp esi, 0fh
        ; Exact mapped bytes 7C 9C: jl 0x1008f168
        __asm _emit 0x7c
        __asm _emit 0x9c
        mov esi, dword ptr [esp + 10h]
        mov ebx, dword ptr [esp + 20h]
        inc esi
        add edi, 8
        cmp esi, 4
        mov dword ptr [esp + 10h], esi
        ; Exact mapped bytes 0F 8C 20 FF FF FF: jl 0x1008f105
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 1ch
        ret
    }
}
