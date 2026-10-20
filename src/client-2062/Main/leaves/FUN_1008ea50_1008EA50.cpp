// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008EA50 .. +0x1E6 bytes.
extern "C" __declspec(naked) void FUN_1008ea50_1008EA50() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        cmp byte ptr [esi + 2d5h], 5
        ; Exact mapped bytes 0F 85 D0 01 00 00: jne 0x1008ec31
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push ebp
        xor ebp, ebp
        test ebx, ebx
        push edi
        mov byte ptr [esi + 2d5h], 4
        ; Exact mapped bytes 76 71: jbe 0x1008eae6
        __asm _emit 0x76
        __asm _emit 0x71
        mov ecx, dword ptr [esp + 1ch]
        lea eax, [esi + 1a4h]
        mov dword ptr [esp + 18h], eax
        lea edi, [esi + 17ch]
        lea edx, [ecx + 0ch]
        mov dword ptr [esp + 1ch], edx
        mov ecx, 2
        mov eax, dword ptr [edi]
        add edi, 4
        or byte ptr [eax + 24h], 1
        dec ecx
        ; Exact mapped bytes 75 F4: jne 0x1008ea95
        __asm _emit 0x75
        __asm _emit 0xf4
        mov eax, dword ptr [esp + 18h]
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x1008eabe
        __asm _emit 0x74
        __asm _emit 0x10
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x1008eabe
        __asm _emit 0x74
        __asm _emit 0x0c
        push edx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 8B 0D 40 D1 1A 10: mov ecx, dword ptr [0x101ad140]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov eax, dword ptr [edx - 8]
        cmp ecx, eax
        ; Exact mapped bytes 75 04: jne 0x1008eacf
        __asm _emit 0x75
        __asm _emit 0x04
        mov dword ptr [esp + 10h], ebp
        mov eax, dword ptr [esp + 18h]
        inc ebp
        add eax, 4
        add edx, 54h
        cmp ebp, ebx
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 1ch], edx
        ; Exact mapped bytes 72 AA: jb 0x1008ea90
        __asm _emit 0x72
        __asm _emit 0xaa
        cmp ebx, 5
        ; Exact mapped bytes 7D 55: jge 0x1008eb40
        __asm _emit 0x7d
        __asm _emit 0x55
        mov eax, 5
        lea ebp, [esi + ebx*4 + 1a4h]
        sub eax, ebx
        lea edi, [esi + ebx*8 + 17ch]
        mov dword ptr [esp + 18h], eax
        mov ecx, 2
        mov eax, dword ptr [edi]
        add edi, 4
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        dec ecx
        ; Exact mapped bytes 75 F2: jne 0x1008eb09
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, dword ptr [ebp]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x1008eb32
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, 101ace48h
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x1008eb32
        __asm _emit 0x74
        __asm _emit 0x08
        push edx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 18h]
        add ebp, 4
        dec eax
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 75 C4: jne 0x1008eb04
        __asm _emit 0x75
        __asm _emit 0xc4
        ; Exact mapped bytes A0 B8 91 1C 10: mov al, byte ptr [0x101c91b8]
        __asm _emit 0xa0
        __asm _emit 0xb8
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x10
        pop edi
        pop ebp
        pop ebx
        test al, 1
        ; Exact mapped bytes 75 20: jne 0x1008eb6c
        __asm _emit 0x75
        __asm _emit 0x20
        or al, 1
        ; Exact mapped bytes A2 B8 91 1C 10: mov byte ptr [0x101c91b8], al
        __asm _emit 0xa2
        __asm _emit 0xb8
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [esi + 154h]
        lea edx, [eax + eax*4]
        mov eax, dword ptr [ecx + 8]
        lea ecx, [eax + edx*4]
        ; Exact mapped bytes 89 0D B4 91 1C 10: mov dword ptr [0x101c91b4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 83 3D 44 D1 1A 10 03: cmp word ptr [0x101ad144], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x03
        ; Exact mapped bytes 75 7D: jne 0x1008ebf3
        __asm _emit 0x75
        __asm _emit 0x7d
        mov eax, dword ptr [esi + 2d8h]
        mov ecx, 1
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x1008ec31
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 150h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 154h]
        mov dword ptr [edx + 50h], ecx
        mov eax, dword ptr [esi + 154h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 154h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        and ecx, 0e1ffh
        or ch, 1
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 154h]
        or byte ptr [eax + 24h], 2
        ; Exact mapped bytes 8B 15 B4 91 1C 10: mov edx, dword ptr [0x101c91b4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 150h]
        push edx
        ; Exact mapped bytes E8 E7 01 07 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x01
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 154h]
        ; Exact mapped bytes A1 B4 91 1C 10: mov eax, dword ptr [0x101c91b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x91
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 C2 8C F8 FF: call 0x100178b0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0xff
        pop esi
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 150h]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 154h]
        mov dword ptr [eax + 50h], 0
        mov eax, dword ptr [esi + 154h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 154h]
        ; Exact mapped bytes 66 81 60 24 FF E0: and word ptr [eax + 0x24], 0xe0ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xe0
        mov esi, dword ptr [esi + 154h]
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        pop esi
        pop ecx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
