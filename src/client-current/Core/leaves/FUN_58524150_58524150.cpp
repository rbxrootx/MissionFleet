// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58524150 .. +0x1CC bytes.
extern "C" __declspec(naked) void FUN_58524150_58524150() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 D1 E9: shr cx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe9
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 A2 01 00 00: je 0x58524314
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x5852420a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 11: ja 0x5852419e
        __asm _emit 0x77
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        xor eax, eax
        ; Exact mapped bytes E9 7C 01 00 00: jmp 0x5852431a
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 97 07 F6 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x07
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 09: jne 0x585241bd
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes E9 5F 01 00 00: jmp 0x5852431a
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x585241e9
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 60 07 F6 FF: call 0x58484940
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x07
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 75 02: jne 0x585241e9
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 21: jmp 0x5852420a
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x58524208
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0E: ja 0x58524208
        __asm _emit 0x77
        __asm _emit 0x0e
        mov dword ptr [ebp - 8], 0
        xor eax, eax
        ; Exact mapped bytes E9 12 01 00 00: jmp 0x5852431a
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A4: jmp 0x585241ae
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 201h
        ; Exact mapped bytes 77 28: ja 0x58524244
        __asm _emit 0x77
        __asm _emit 0x28
        cmp dword ptr [ebp - 0ch], 201h
        ; Exact mapped bytes 74 58: je 0x5852427d
        __asm _emit 0x74
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], 100h
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x585242dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 102h
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x585242f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C6 00 00 00: jmp 0x5852430a
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 202h
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 0F 87 B1 00 00 00: ja 0x5852430a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 8D 20 43 52 58: jmp dword ptr [ecx*4 + 0x58524320]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0x43
        __asm _emit 0x52
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x5852431a
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x5852431a
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 28h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes EB 6C: jmp 0x5852431a
        __asm _emit 0xeb
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 2ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        ; Exact mapped bytes EB 55: jmp 0x5852431a
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 40h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        ; Exact mapped bytes EB 3E: jmp 0x5852431a
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        ; Exact mapped bytes EB 27: jmp 0x5852431a
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        ; Exact mapped bytes EB 10: jmp 0x5852431a
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 34h]
        ; Exact mapped bytes EB 08: jmp 0x5852431a
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB 06: jmp 0x5852431a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
        mov esp, ebp
    }
}
