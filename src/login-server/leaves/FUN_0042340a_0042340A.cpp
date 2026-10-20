// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042340A .. +0x329 bytes.
extern "C" __declspec(naked) void FUN_0042340a_0042340A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov ecx, dword ptr [ebp + 8]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx + 10h]
        push edi
        mov edi, esi
        add esi, -4
        sub edi, dword ptr [ecx + 0ch]
        shr edi, 0fh
        mov ecx, edi
        imul ecx, ecx, 204h
        lea ecx, [ecx + eax + 144h]
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [esi]
        dec ecx
        test cl, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F 85 E6 02 00 00: jne 0x42372e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + esi]
        lea ebx, [ecx + esi]
        mov dword ptr [ebp - 0ch], edx
        mov edx, dword ptr [esi - 4]
        mov dword ptr [ebp - 8], edx
        mov edx, dword ptr [ebp - 0ch]
        test dl, 1
        mov dword ptr [ebp + 0ch], ebx
        ; Exact mapped bytes 75 7E: jne 0x4234e0
        __asm _emit 0x75
        __asm _emit 0x7e
        sar edx, 4
        dec edx
        cmp edx, 3fh
        ; Exact mapped bytes 76 03: jbe 0x42346e
        __asm _emit 0x76
        __asm _emit 0x03
        push 3fh
        pop edx
        mov ecx, dword ptr [ebx + 4]
        cmp ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes 75 4C: jne 0x4234c2
        __asm _emit 0x75
        __asm _emit 0x4c
        cmp edx, 20h
        ; Exact mapped bytes 73 1E: jae 0x423499
        __asm _emit 0x73
        __asm _emit 0x1e
        mov ebx, 80000000h
        mov ecx, edx
        shr ebx, cl
        lea ecx, [edx + eax + 4]
        not ebx
        and dword ptr [eax + edi*4 + 44h], ebx
        dec byte ptr [ecx]
        ; Exact mapped bytes 75 28: jne 0x4234ba
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp + 8]
        and dword ptr [ecx], ebx
        ; Exact mapped bytes EB 21: jmp 0x4234ba
        __asm _emit 0xeb
        __asm _emit 0x21
        lea ecx, [edx - 20h]
        mov ebx, 80000000h
        shr ebx, cl
        lea ecx, [edx + eax + 4]
        not ebx
        and dword ptr [eax + edi*4 + 0c4h], ebx
        dec byte ptr [ecx]
        ; Exact mapped bytes 75 06: jne 0x4234ba
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        and dword ptr [ecx + 4], ebx
        mov ecx, dword ptr [ebp - 4]
        mov ebx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 03: jmp 0x4234c5
        __asm _emit 0xeb
        __asm _emit 0x03
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebx + 8]
        mov ebx, dword ptr [ebx + 4]
        add ecx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], ebx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov ebx, dword ptr [edx + 4]
        mov edx, dword ptr [edx + 8]
        mov dword ptr [ebx + 8], edx
        mov edx, ecx
        sar edx, 4
        dec edx
        cmp edx, 3fh
        ; Exact mapped bytes 76 03: jbe 0x4234ee
        __asm _emit 0x76
        __asm _emit 0x03
        push 3fh
        pop edx
        mov ebx, dword ptr [ebp - 8]
        and ebx, 1
        mov dword ptr [ebp - 0ch], ebx
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x423591
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, dword ptr [ebp - 8]
        mov ebx, dword ptr [ebp - 8]
        sar ebx, 4
        push 3fh
        mov dword ptr [ebp + 0ch], esi
        dec ebx
        pop esi
        cmp ebx, esi
        ; Exact mapped bytes 76 02: jbe 0x423513
        __asm _emit 0x76
        __asm _emit 0x02
        mov ebx, esi
        add ecx, dword ptr [ebp - 8]
        mov edx, ecx
        mov dword ptr [ebp - 4], ecx
        sar edx, 4
        dec edx
        cmp edx, esi
        ; Exact mapped bytes 76 02: jbe 0x423525
        __asm _emit 0x76
        __asm _emit 0x02
        mov edx, esi
        cmp ebx, edx
        ; Exact mapped bytes 74 63: je 0x42358c
        __asm _emit 0x74
        __asm _emit 0x63
        mov ecx, dword ptr [ebp + 0ch]
        mov esi, dword ptr [ecx + 4]
        cmp esi, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 40: jne 0x423574
        __asm _emit 0x75
        __asm _emit 0x40
        cmp ebx, 20h
        ; Exact mapped bytes 73 1C: jae 0x423555
        __asm _emit 0x73
        __asm _emit 0x1c
        mov esi, 80000000h
        mov ecx, ebx
        shr esi, cl
        not esi
        and dword ptr [eax + edi*4 + 44h], esi
        dec byte ptr [ebx + eax + 4]
        ; Exact mapped bytes 75 26: jne 0x423574
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 8]
        and dword ptr [ecx], esi
        ; Exact mapped bytes EB 1F: jmp 0x423574
        __asm _emit 0xeb
        __asm _emit 0x1f
        lea ecx, [ebx - 20h]
        mov esi, 80000000h
        shr esi, cl
        not esi
        and dword ptr [eax + edi*4 + 0c4h], esi
        dec byte ptr [ebx + eax + 4]
        ; Exact mapped bytes 75 06: jne 0x423574
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        and dword ptr [ecx + 4], esi
        mov ecx, dword ptr [ebp + 0ch]
        mov esi, dword ptr [ecx + 8]
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [esi + 4], ecx
        mov ecx, dword ptr [ebp + 0ch]
        mov esi, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 8]
        mov dword ptr [esi + 8], ecx
        mov esi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 03: jmp 0x423594
        __asm _emit 0xeb
        __asm _emit 0x03
        mov ebx, dword ptr [ebp + 8]
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x4235a2
        __asm _emit 0x75
        __asm _emit 0x08
        cmp ebx, edx
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x423623
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov ebx, dword ptr [ecx + edx*8 + 4]
        lea ecx, [ecx + edx*8]
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], ecx
        mov dword ptr [ecx + 4], esi
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [ecx + 8], esi
        mov ecx, dword ptr [esi + 4]
        cmp ecx, dword ptr [esi + 8]
        ; Exact mapped bytes 75 60: jne 0x423623
        __asm _emit 0x75
        __asm _emit 0x60
        mov cl, byte ptr [edx + eax + 4]
        cmp edx, 20h
        mov byte ptr [ebp + 0fh], cl
        inc cl
        mov byte ptr [edx + eax + 4], cl
        ; Exact mapped bytes 73 25: jae 0x4235fa
        __asm _emit 0x73
        __asm _emit 0x25
        cmp byte ptr [ebp + 0fh], 0
        ; Exact mapped bytes 75 0E: jne 0x4235e9
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ebx, 80000000h
        mov ecx, edx
        shr ebx, cl
        mov ecx, dword ptr [ebp + 8]
        or dword ptr [ecx], ebx
        mov ebx, 80000000h
        mov ecx, edx
        shr ebx, cl
        lea eax, [eax + edi*4 + 44h]
        or dword ptr [eax], ebx
        ; Exact mapped bytes EB 29: jmp 0x423623
        __asm _emit 0xeb
        __asm _emit 0x29
        cmp byte ptr [ebp + 0fh], 0
        ; Exact mapped bytes 75 10: jne 0x423610
        __asm _emit 0x75
        __asm _emit 0x10
        lea ecx, [edx - 20h]
        mov ebx, 80000000h
        shr ebx, cl
        mov ecx, dword ptr [ebp + 8]
        or dword ptr [ecx + 4], ebx
        lea ecx, [edx - 20h]
        mov edx, 80000000h
        shr edx, cl
        lea eax, [eax + edi*4 + 0c4h]
        or dword ptr [eax], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [esi], eax
        mov dword ptr [eax + esi - 4], eax
        mov eax, dword ptr [ebp - 10h]
        dec dword ptr [eax]
        ; Exact mapped bytes 0F 85 F7 00 00 00: jne 0x42372e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 58 10 45 00: mov eax, dword ptr [0x451058]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 DC 00 00 00: je 0x423720
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 50 10 45 00: mov ecx, dword ptr [0x451050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 8B 35 A4 C2 43 00: mov esi, dword ptr [0x43c2a4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa4
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        shl ecx, 0fh
        add ecx, dword ptr [eax + 0ch]
        mov ebx, 8000h
        push 4000h
        push ebx
        push ecx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 8B 0D 50 10 45 00: mov ecx, dword ptr [0x451050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes A1 58 10 45 00: mov eax, dword ptr [0x451058]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        mov edx, 80000000h
        shr edx, cl
        or dword ptr [eax + 8], edx
        ; Exact mapped bytes A1 58 10 45 00: mov eax, dword ptr [0x451058]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 50 10 45 00: mov ecx, dword ptr [0x451050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [eax + 10h]
        and dword ptr [eax + ecx*4 + 0c4h], 0
        ; Exact mapped bytes A1 58 10 45 00: mov eax, dword ptr [0x451058]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [eax + 10h]
        dec byte ptr [eax + 43h]
        ; Exact mapped bytes A1 58 10 45 00: mov eax, dword ptr [0x451058]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 10h]
        cmp byte ptr [ecx + 43h], 0
        ; Exact mapped bytes 75 09: jne 0x4236b1
        __asm _emit 0x75
        __asm _emit 0x09
        and dword ptr [eax + 4], 0fffffffeh
        ; Exact mapped bytes A1 58 10 45 00: mov eax, dword ptr [0x451058]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        cmp dword ptr [eax + 8], -1
        ; Exact mapped bytes 75 69: jne 0x423720
        __asm _emit 0x75
        __asm _emit 0x69
        push ebx
        push 0
        push dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes A1 58 10 45 00: mov eax, dword ptr [0x451058]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        push dword ptr [eax + 10h]
        push 0
        ; Exact mapped bytes FF 35 68 10 45 00: push dword ptr [0x451068]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 2C C1 43 00: call dword ptr [0x43c12c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes A1 5C 10 45 00: mov eax, dword ptr [0x45105c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 60 10 45 00: mov edx, dword ptr [0x451060]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        lea eax, [eax + eax*4]
        shl eax, 2
        mov ecx, eax
        ; Exact mapped bytes A1 58 10 45 00: mov eax, dword ptr [0x451058]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        sub ecx, eax
        lea ecx, [ecx + edx - 14h]
        push ecx
        lea ecx, [eax + 14h]
        push ecx
        push eax
        ; Exact mapped bytes E8 82 B9 FF FF: call 0x41f080
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        add esp, 0ch
        ; Exact mapped bytes FF 0D 5C 10 45 00: dec dword ptr [0x45105c]
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 58 10 45 00: cmp eax, dword ptr [0x451058]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 76 04: jbe 0x423716
        __asm _emit 0x76
        __asm _emit 0x04
        sub dword ptr [ebp + 8], 14h
        ; Exact mapped bytes A1 60 10 45 00: mov eax, dword ptr [0x451060]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes A3 54 10 45 00: mov dword ptr [0x451054], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 3D 50 10 45 00: mov dword ptr [0x451050], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes A3 58 10 45 00: mov dword ptr [0x451058], eax
        __asm _emit 0xa3
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
