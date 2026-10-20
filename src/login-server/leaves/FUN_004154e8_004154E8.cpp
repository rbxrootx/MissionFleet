// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004154E8 .. +0x2B6 bytes.
extern "C" __declspec(naked) void FUN_004154e8_004154E8() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        cmp dword ptr [esi + 8], ebx
        ; Exact mapped bytes 75 05: jne 0x4154fc
        __asm _emit 0x75
        __asm _emit 0x05
        mov edi, dword ptr [esi + 20h]
        ; Exact mapped bytes EB 03: jmp 0x4154ff
        __asm _emit 0xeb
        __asm _emit 0x03
        mov edi, dword ptr [esi + 24h]
        mov eax, dword ptr [esi]
        cmp eax, 0dh
        ; Exact mapped bytes 0F 87 8D 02 00 00: ja 0x415797
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 9E 57 41 00: jmp dword ptr [eax*4 + 0x41579e]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x57
        __asm _emit 0x41
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        lea eax, [edi - 1]
        push eax
        ; Exact mapped bytes E8 2F F8 FF FF: call 0x414d4c
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 05: je 0x415529
        __asm _emit 0x74
        __asm _emit 0x05
        or dword ptr [eax], 0ffffffffh
        ; Exact mapped bytes EB 05: jmp 0x41552e
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [eax], ecx
        push eax
        push ebx
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 46 08: mov ax, word ptr [esi + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        push ebx
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 14h]
        push eax
        push edi
        push dword ptr [esi + 2ch]
        ; Exact mapped bytes E8 A9 70 01 00: call 0x42c5f4
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 74 0C: je 0x41555c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [esi + 4]
        push dword ptr [esi + 2ch]
        mov edx, dword ptr [ecx]
        push eax
        ; Exact mapped bytes FF 52 54: call dword ptr [edx + 0x54]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x54
        mov ecx, dword ptr [esi + 4]
        add ecx, 5ch
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x4155f8
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        dec edi
        push edi
        ; Exact mapped bytes E8 DB F7 FF FF: call 0x414d4c
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3E: je 0x4155b3
        __asm _emit 0x74
        __asm _emit 0x3e
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 3C: jmp 0x4155b6
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov ecx, dword ptr [esi + 4]
        dec edi
        push edi
        ; Exact mapped bytes E8 5A F7 FF FF: call 0x414cde
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x415596
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0fffffffah
        ; Exact mapped bytes E9 01 02 00 00: jmp 0x415797
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        push edi
        ; Exact mapped bytes E8 76 F7 FF FF: call 0x414d15
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x4155ab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [esi + 4]
        dec edi
        push edi
        ; Exact mapped bytes E8 33 F7 FF FF: call 0x414cde
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 E4 01 00 00: jne 0x415797
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 D7 01 00 00: jmp 0x415797
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 10h]
        mov eax, dword ptr [esi + 4]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 14h]
        push edi
        push dword ptr [eax + 4]
        ; Exact mapped bytes E8 26 C3 FF FF: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 4]
        mov ebx, eax
        push ebx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x4155f2
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 4]
        push 0
        push ebx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        mov ecx, dword ptr [esi + 4]
        add ecx, 40h
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CE 81 01 00: call 0x42d7ce
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [eax], edi
        ; Exact mapped bytes E9 90 01 00 00: jmp 0x415797
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        dec edi
        push edi
        ; Exact mapped bytes E8 CD F6 FF FF: call 0x414cde
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 7E 01 00 00: je 0x415797
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 10h]
        ; Exact mapped bytes E8 FD 88 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [esi + 1ch]
        mov ecx, dword ptr [esi + 10h]
        ; Exact mapped bytes E8 F2 88 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 63 01 00 00: jmp 0x415797
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        lea eax, [edi - 1]
        push eax
        ; Exact mapped bytes E8 9E F6 FF FF: call 0x414cde
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x415659
        __asm _emit 0x74
        __asm _emit 0x15
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 10h]
        ; Exact mapped bytes E8 D2 88 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10h]
        push 3dh
        ; Exact mapped bytes E8 EF 88 01 00: call 0x42df48
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        lea ebx, [edi - 1]
        push ebx
        ; Exact mapped bytes E8 79 F6 FF FF: call 0x414cde
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x415797
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        push ebx
        ; Exact mapped bytes E8 9F F6 FF FF: call 0x414d15
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x415682
        __asm _emit 0x74
        __asm _emit 0x05
        or dword ptr [ebx], 0ffffffffh
        ; Exact mapped bytes EB 05: jmp 0x415687
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebx], eax
        mov eax, dword ptr [esi + 4]
        test byte ptr [eax + 2dh], 40h
        ; Exact mapped bytes 0F 85 03 01 00 00: jne 0x415797
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 10h]
        push 3fh
        ; Exact mapped bytes E8 AA 88 01 00: call 0x42df48
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [esi + 1ch]
        mov ecx, dword ptr [esi + 10h]
        ; Exact mapped bytes E8 78 88 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        inc dword ptr [esi + 28h]
        shl edi, 4
        mov eax, dword ptr [eax + 38h]
        push ebx
        push 0
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 4C 38 FC: mov cx, word ptr [eax + edi - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x38
        __asm _emit 0xfc
        lea eax, [eax + edi - 10h]
        push ecx
        push dword ptr [eax + 8]
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        push eax
        ; Exact mapped bytes 66 8B 46 28: mov ax, word ptr [esi + 0x28]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x28
        push dword ptr [ebp + 14h]
        push 1
        push eax
        push dword ptr [esi + 2ch]
        ; Exact mapped bytes E8 15 6F 01 00: call 0x42c5f4
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 AF 00 00 00: je 0x415797
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        push dword ptr [esi + 2ch]
        mov edx, dword ptr [ecx]
        push eax
        ; Exact mapped bytes FF 52 54: call dword ptr [edx + 0x54]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x54
        ; Exact mapped bytes E9 9E 00 00 00: jmp 0x415797
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, edi
        shl eax, 4
        mov edx, dword ptr [ecx + 3ch]
        test byte ptr [edx + eax - 4], 2
        lea ebx, [edx + eax - 10h]
        ; Exact mapped bytes 74 09: je 0x415718
        __asm _emit 0x74
        __asm _emit 0x09
        dec edi
        push edi
        ; Exact mapped bytes E8 FF F5 FF FF: call 0x414d15
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 33: jmp 0x41574b
        __asm _emit 0xeb
        __asm _emit 0x33
        dec edi
        push edi
        ; Exact mapped bytes E8 F6 F5 FF FF: call 0x414d15
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 8]
        cmp ecx, 1
        ; Exact mapped bytes 74 16: je 0x41573d
        __asm _emit 0x74
        __asm _emit 0x16
        cmp ecx, 2
        ; Exact mapped bytes 74 11: je 0x41573d
        __asm _emit 0x74
        __asm _emit 0x11
        cmp ecx, 3
        ; Exact mapped bytes 74 0C: je 0x41573d
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp ecx, 4
        ; Exact mapped bytes 74 07: je 0x41573d
        __asm _emit 0x74
        __asm _emit 0x07
        cmp ecx, 6
        ; Exact mapped bytes 74 02: je 0x41573d
        __asm _emit 0x74
        __asm _emit 0x02
        mov ebx, dword ptr [ebx]
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x41574f
        __asm _emit 0x75
        __asm _emit 0x0e
        push ecx
        push ebx
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 EC 0E 00 00: call 0x416637
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x415758
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [esi + 4]
        push edi
        ; Exact mapped bytes E8 99 F5 FF FF: call 0x414cf1
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 18h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x415764
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 33: jne 0x415797
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [esi + 4]
        push edi
        ; Exact mapped bytes E8 71 F5 FF FF: call 0x414cde
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x415797
        __asm _emit 0x74
        __asm _emit 0x26
        mov dword ptr [esi + 14h], 1
        ; Exact mapped bytes EB 1D: jmp 0x415797
        __asm _emit 0xeb
        __asm _emit 0x1d
        push dword ptr [ebp + 0ch]
        push edi
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 CE 0D 00 00: call 0x416554
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x415797
        __asm _emit 0xeb
        __asm _emit 0x0f
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push edi
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 29 0E 00 00: call 0x4165c0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
