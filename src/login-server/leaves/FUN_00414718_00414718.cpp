// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00414718 .. +0x1D6 bytes.
extern "C" __declspec(naked) void FUN_00414718_00414718() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 94h]
        sub eax, 0
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x4147f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 70: je 0x4147a5
        __asm _emit 0x74
        __asm _emit 0x70
        dec eax
        ; Exact mapped bytes 0F 85 DA 00 00 00: jne 0x414816
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [esi + 0d8h]
        push 43d6c4h
        mov ecx, edi
        ; Exact mapped bytes E8 E6 95 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [esi + 0dch]
        mov ecx, edi
        push eax
        ; Exact mapped bytes E8 01 98 01 00: call 0x42df5d
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        push 43d6c0h
        mov ecx, edi
        ; Exact mapped bytes E8 B9 97 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebx, 43d570h
        mov ecx, esi
        push ebx
        push edi
        ; Exact mapped bytes E8 44 07 00 00: call 0x414eba
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        push 29h
        mov ecx, edi
        mov eax, dword ptr [eax - 8]
        dec eax
        push eax
        ; Exact mapped bytes E8 E5 98 01 00: call 0x42e06b
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        push 43d6b4h
        mov ecx, edi
        ; Exact mapped bytes E8 8F 97 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        push ebx
        push edi
        push dword ptr [esi + 0bch]
        mov ecx, esi
        ; Exact mapped bytes E8 94 07 00 00: call 0x414f35
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 29h
        ; Exact mapped bytes EB 41: jmp 0x4147e6
        __asm _emit 0xeb
        __asm _emit 0x41
        lea edi, [esi + 0d8h]
        push 43d6ach
        mov ecx, edi
        ; Exact mapped bytes E8 7D 95 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [esi + 0dch]
        mov ecx, edi
        push eax
        ; Exact mapped bytes E8 98 97 01 00: call 0x42df5d
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        push 43d6a4h
        mov ecx, edi
        ; Exact mapped bytes E8 50 97 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        push 43d570h
        push edi
        push dword ptr [esi + 0bch]
        mov ecx, esi
        ; Exact mapped bytes E8 16 07 00 00: call 0x414efa
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        mov eax, dword ptr [edi]
        mov ecx, edi
        mov eax, dword ptr [eax - 8]
        dec eax
        push eax
        ; Exact mapped bytes E8 77 98 01 00: call 0x42e06b
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 20: jmp 0x414816
        __asm _emit 0xeb
        __asm _emit 0x20
        lea edi, [esi + 0d8h]
        push 43d694h
        mov ecx, edi
        ; Exact mapped bytes E8 2C 95 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [esi + 0dch]
        mov ecx, edi
        push eax
        ; Exact mapped bytes E8 47 97 01 00: call 0x42df5d
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        cmp eax, 1
        ; Exact mapped bytes 74 04: je 0x414825
        __asm _emit 0x74
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 75 6B: jne 0x414890
        __asm _emit 0x75
        __asm _emit 0x6b
        lea ebx, [esi + 0d8h]
        push 43d680h
        mov ecx, ebx
        ; Exact mapped bytes E8 EA 96 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a4h]
        lea edi, [esi + 0a4h]
        cmp dword ptr [eax - 8], 0
        ; Exact mapped bytes 75 3F: jne 0x414888
        __asm _emit 0x75
        __asm _emit 0x3f
        lea eax, [ebp - 4]
        mov dword ptr [ebp - 4], 12h
        push eax
        lea eax, [ebp - 1ch]
        push 13h
        push eax
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 7A 7D 01 00: call 0x42c5dc
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push eax
        mov ecx, esi
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes FF 52 48: call dword ptr [edx + 0x48]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x41487d
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [esi]
        push 0
        push dword ptr [ebp - 8]
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        lea eax, [ebp - 1ch]
        mov ecx, edi
        push eax
        ; Exact mapped bytes E8 AC 94 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 CD 96 01 00: call 0x42df5d
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        lea edi, [esi + 0d8h]
        push 0
        mov ecx, edi
        ; Exact mapped bytes E8 D6 96 01 00: call 0x42df75
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        push eax
        ; Exact mapped bytes E8 74 D8 FF FF: call 0x41211c
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        push -1
        mov ecx, edi
        ; Exact mapped bytes E8 13 97 01 00: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        test byte ptr [esi + 2dh], 80h
        ; Exact mapped bytes 74 32: je 0x4148e9
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [edi]
        push -3
        push eax
        push dword ptr [esi + 0bch]
        ; Exact mapped bytes E8 FD 7C 01 00: call 0x42c5c4
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ebx, eax
        ; Exact mapped bytes 66 83 FB 02: cmp bx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x02
        ; Exact mapped bytes 74 E8: je 0x4148b7
        __asm _emit 0x74
        __asm _emit 0xe8
        mov eax, dword ptr [esi]
        push ebx
        mov ecx, esi
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4148e9
        __asm _emit 0x75
        __asm _emit 0x0e
        push dword ptr [esi + 0bch]
        mov eax, dword ptr [esi]
        mov ecx, esi
        push ebx
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
