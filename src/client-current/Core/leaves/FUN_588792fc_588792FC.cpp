// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588792FC .. +0x32B bytes.
extern "C" __declspec(naked) void FUN_588792fc_588792FC() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        push dword ptr [ebp + 1ch]
        lea eax, [ebp - 48h]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 32 FD FF FF: call 0x5887904b
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        lea edi, [ebp - 30h]
        mov esi, eax
        push 6
        pop ecx
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        or esi, 0ffffffffh
        cmp dword ptr [ebp - 24h], esi
        ; Exact mapped bytes 75 19: jne 0x58879347
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes E8 27 91 FE FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        and dword ptr [eax], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 2F 91 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes E9 DB 02 00 00: jmp 0x58879622
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 01 05 00 00: call 0x5887984d
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 0ch]
        mov dword ptr [ebx], eax
        cmp eax, esi
        ; Exact mapped bytes 75 17: jne 0x5887936c
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes E8 00 91 FE FF: call 0x5886245a
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        and dword ptr [eax], 0
        mov dword ptr [ebx], esi
        ; Exact mapped bytes E8 0B 91 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x91
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 18h
        ; Exact mapped bytes EB CF: jmp 0x5887933b
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov eax, dword ptr [ebp + 8]
        lea esi, [ebp - 30h]
        and dword ptr [ebp - 14h], 0
        xor ecx, ecx
        inc ecx
        mov dword ptr [ebp - 18h], 0ch
        sub esp, 18h
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp + 14h]
        shr eax, 7
        not eax
        and eax, ecx
        push 6
        pop ecx
        mov dword ptr [ebp - 10h], eax
        mov edi, esp
        lea eax, [ebp - 18h]
        push eax
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes E8 11 FC FF FF: call 0x58878fb6
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        add esp, 20h
        mov dword ptr [ebp - 8], edi
        mov edx, 0c0000000h
        cmp edi, -1
        ; Exact mapped bytes 75 6B: jne 0x58879422
        __asm _emit 0x75
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 2ch]
        mov eax, ecx
        and eax, edx
        cmp eax, edx
        ; Exact mapped bytes 75 35: jne 0x588793f7
        __asm _emit 0x75
        __asm _emit 0x35
        test byte ptr [ebp + 14h], 1
        ; Exact mapped bytes 74 2F: je 0x588793f7
        __asm _emit 0x74
        __asm _emit 0x2f
        sub esp, 18h
        lea eax, [ebp - 18h]
        and ecx, 7fffffffh
        lea esi, [ebp - 30h]
        mov dword ptr [ebp - 2ch], ecx
        push 6
        pop ecx
        mov edi, esp
        push eax
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes E8 CC FB FF FF: call 0x58878fb6
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        add esp, 20h
        mov dword ptr [ebp - 8], edi
        cmp edi, -1
        ; Exact mapped bytes 75 2B: jne 0x58879422
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebx]
        mov eax, ecx
        and ecx, 3fh
        sar eax, 6
        imul ecx, ecx, 38h
        mov eax, dword ptr [eax*4 + 589699b0h]
        and byte ptr [eax + ecx + 28h], 0feh
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 F7 8F FE FF: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes E9 19 FF FF FF: jmp 0x5887933b
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        ; Exact mapped bytes FF 15 20 43 89 58: call dword ptr [0x58894320]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 47: jne 0x58879474
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        push esi
        ; Exact mapped bytes E8 D8 8F FE FF: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov ecx, dword ptr [ebx]
        mov eax, ecx
        and ecx, 3fh
        sar eax, 6
        imul ecx, ecx, 38h
        push edi
        mov eax, dword ptr [eax*4 + 589699b0h]
        and byte ptr [eax + ecx + 28h], 0feh
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test esi, esi
        ; Exact mapped bytes 0F 85 D7 FE FF FF: jne 0x5887933b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 06 90 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 0dh
        ; Exact mapped bytes E9 C7 FE FF FF: jmp 0x5887933b
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 07: jne 0x58879480
        __asm _emit 0x75
        __asm _emit 0x07
        mov al, byte ptr [ebp - 30h]
        or al, 40h
        ; Exact mapped bytes EB 0A: jmp 0x5887948a
        __asm _emit 0xeb
        __asm _emit 0x0a
        cmp eax, 3
        mov al, byte ptr [ebp - 30h]
        ; Exact mapped bytes 75 02: jne 0x5887948a
        __asm _emit 0x75
        __asm _emit 0x02
        or al, 8
        push edi
        push dword ptr [ebx]
        mov byte ptr [ebp - 1], al
        ; Exact mapped bytes E8 03 03 00 00: call 0x58879798
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [ebp - 1]
        pop ecx
        pop ecx
        mov ecx, dword ptr [ebx]
        or dl, 1
        mov eax, ecx
        mov byte ptr [ebp - 0ch], dl
        and ecx, 3fh
        sar eax, 6
        imul ecx, ecx, 38h
        mov byte ptr [ebp - 30h], dl
        mov eax, dword ptr [eax*4 + 589699b0h]
        mov byte ptr [eax + ecx + 28h], dl
        mov ecx, dword ptr [ebx]
        mov eax, ecx
        and ecx, 3fh
        sar eax, 6
        imul ecx, ecx, 38h
        test byte ptr [ebp + 14h], 2
        mov eax, dword ptr [eax*4 + 589699b0h]
        mov byte ptr [eax + ecx + 29h], 0
        ; Exact mapped bytes 74 1D: je 0x588794f7
        __asm _emit 0x74
        __asm _emit 0x1d
        push dword ptr [ebx]
        ; Exact mapped bytes E8 E3 FC FF FF: call 0x588791c4
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        test esi, esi
        ; Exact mapped bytes 74 0F: je 0x588794f7
        __asm _emit 0x74
        __asm _emit 0x0f
        push dword ptr [ebx]
        ; Exact mapped bytes E8 C2 38 FF FF: call 0x5886cdb1
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, esi
        ; Exact mapped bytes E9 2B 01 00 00: jmp 0x58879622
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 1]
        mov byte ptr [ebp - 1], 0
        push eax
        push dword ptr [ebp + 14h]
        lea esi, [ebp - 30h]
        sub esp, 18h
        push 6
        pop ecx
        mov edi, esp
        push dword ptr [ebx]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes E8 4A F8 FF FF: call 0x58878d60
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebx]
        mov esi, eax
        add esp, 24h
        test esi, esi
        ; Exact mapped bytes 74 03: je 0x58879524
        __asm _emit 0x74
        __asm _emit 0x03
        push edx
        ; Exact mapped bytes EB C6: jmp 0x588794ea
        __asm _emit 0xeb
        __asm _emit 0xc6
        mov al, byte ptr [ebp - 1]
        mov ecx, edx
        sar ecx, 6
        and edx, 3fh
        imul edx, edx, 38h
        mov ecx, dword ptr [ecx*4 + 589699b0h]
        mov byte ptr [ecx + edx + 29h], al
        mov ecx, dword ptr [ebx]
        mov eax, ecx
        and ecx, 3fh
        sar eax, 6
        imul esi, ecx, 38h
        mov ecx, dword ptr [ebp + 14h]
        shr ecx, 10h
        mov edx, dword ptr [eax*4 + 589699b0h]
        xor cl, byte ptr [edx + esi + 2dh]
        and cl, 1
        xor byte ptr [edx + esi + 2dh], cl
        test byte ptr [ebp - 0ch], 48h
        ; Exact mapped bytes 75 1F: jne 0x58879587
        __asm _emit 0x75
        __asm _emit 0x1f
        test byte ptr [ebp + 14h], 8
        ; Exact mapped bytes 74 19: je 0x58879587
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebx]
        mov eax, ecx
        and ecx, 3fh
        sar eax, 6
        imul ecx, ecx, 38h
        mov eax, dword ptr [eax*4 + 589699b0h]
        or byte ptr [eax + ecx + 28h], 20h
        mov esi, dword ptr [ebp - 2ch]
        mov ecx, 0c0000000h
        mov eax, esi
        and eax, ecx
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x58879620
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [ebp + 14h], 1
        ; Exact mapped bytes 74 7F: je 0x58879620
        __asm _emit 0x74
        __asm _emit 0x7f
        push dword ptr [ebp - 8]
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        sub esp, 18h
        lea eax, [ebp - 18h]
        and esi, 7fffffffh
        mov dword ptr [ebp - 2ch], esi
        lea esi, [ebp - 30h]
        push 6
        pop ecx
        mov edi, esp
        push eax
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes E8 EA F9 FF FF: call 0x58878fb6
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, eax
        add esp, 20h
        cmp edx, -1
        ; Exact mapped bytes 75 32: jne 0x58879608
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 31 8E FE FF: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebx]
        mov eax, ecx
        and ecx, 3fh
        sar eax, 6
        imul ecx, ecx, 38h
        mov eax, dword ptr [eax*4 + 589699b0h]
        and byte ptr [eax + ecx + 28h], 0feh
        push dword ptr [ebx]
        ; Exact mapped bytes E8 5E 03 00 00: call 0x58879960
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes E9 14 FE FF FF: jmp 0x5887941c
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx]
        mov eax, ecx
        sar eax, 6
        and ecx, 3fh
        imul ecx, ecx, 38h
        mov eax, dword ptr [eax*4 + 589699b0h]
        mov dword ptr [eax + ecx + 18h], edx
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
