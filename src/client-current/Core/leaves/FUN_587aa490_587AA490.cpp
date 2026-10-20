// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AA490 .. +0x1B3 bytes.
extern "C" __declspec(naked) void FUN_587aa490_587AA490() {
    __asm {
        sub esp, 20h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 1ch], eax
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 30h]
        xor ebx, ebx
        push edi
        push ebx
        push 4
        mov dword ptr [esi], 0
        mov dword ptr [esi + 4], 0
        mov dword ptr [esi + 8], 0
        ; Exact mapped bytes E8 C6 DC FE FF: call 0x5879818a
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, eax
        cmp edi, -1
        ; Exact mapped bytes 0F 84 5C 01 00 00: je 0x587aa62b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 10h]
        mov dword ptr [esp + 10h], 1ch
        push eax
        push edi
        ; Exact mapped bytes E8 59 29 0D 00: call 0x5887ce3b
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x29
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x587aa5ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 2D 50 42 89 58: mov ebp, dword ptr [0x58894250]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x50
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ebx, 1
        cmp dword ptr [esp + 10h], 10h
        ; Exact mapped bytes 72 72: jb 0x587aa56e
        __asm _emit 0x72
        __asm _emit 0x72
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        cmp dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 75 6A: jne 0x587aa56e
        __asm _emit 0x75
        __asm _emit 0x6a
        ; Exact mapped bytes FF 15 4C 42 89 58: call dword ptr [0x5889424c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [esp + 18h], eax
        ; Exact mapped bytes 74 5E: je 0x587aa56e
        __asm _emit 0x74
        __asm _emit 0x5e
        mov edx, dword ptr [esi]
        test edx, edx
        ; Exact mapped bytes 75 23: jne 0x587aa539
        __asm _emit 0x75
        __asm _emit 0x23
        push 200h
        push edx
        mov dword ptr [esi + 4], 80h
        ; Exact mapped bytes FF 35 C8 5E 96 58: push dword ptr [0x58965ec8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 5C 41 89 58: call dword ptr [0x5889415c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, eax
        mov dword ptr [esi], edx
        test edx, edx
        ; Exact mapped bytes 74 5D: je 0x587aa594
        __asm _emit 0x74
        __asm _emit 0x5d
        ; Exact mapped bytes EB 28: jmp 0x587aa561
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [esi + 4]
        cmp dword ptr [esi + 8], eax
        ; Exact mapped bytes 72 20: jb 0x587aa561
        __asm _emit 0x72
        __asm _emit 0x20
        add eax, eax
        mov dword ptr [esi + 4], eax
        shl eax, 2
        push eax
        push edx
        push 0
        ; Exact mapped bytes FF 35 C8 5E 96 58: push dword ptr [0x58965ec8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 60 41 89 58: call dword ptr [0x58894160]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, eax
        test edx, edx
        ; Exact mapped bytes 74 35: je 0x587aa594
        __asm _emit 0x74
        __asm _emit 0x35
        mov dword ptr [esi], edx
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [edx + ecx*4], eax
        inc dword ptr [esi + 8]
        lea eax, [esp + 10h]
        mov dword ptr [esp + 10h], 1ch
        push eax
        push edi
        ; Exact mapped bytes E8 C0 28 0D 00: call 0x5887ce41
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 6C FF FF FF: jne 0x587aa4f5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 12h
        ; Exact mapped bytes 74 18: je 0x587aa5ac
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [esi]
        xor ebx, ebx
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x587aa5ac
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        push ebx
        ; Exact mapped bytes FF 35 C8 5E 96 58: push dword ptr [0x58965ec8]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc8
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 64 41 89 58: call dword ptr [0x58894164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [esi], ebx
        push edi
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test ebx, ebx
        ; Exact mapped bytes 74 74: je 0x587aa62b
        __asm _emit 0x74
        __asm _emit 0x74
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 5A: je 0x587aa616
        __asm _emit 0x74
        __asm _emit 0x5a
        xor edi, edi
        cmp dword ptr [esi + 8], edi
        ; Exact mapped bytes 76 53: jbe 0x587aa616
        __asm _emit 0x76
        __asm _emit 0x53
        mov eax, dword ptr [esi]
        push dword ptr [eax + edi*4]
        push 0
        push 5ah
        ; Exact mapped bytes FF 15 58 43 89 58: call dword ptr [0x58894358]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov ebx, eax
        xor ebp, ebp
        test ebx, ebx
        ; Exact mapped bytes 74 2D: je 0x587aa607
        __asm _emit 0x74
        __asm _emit 0x2d
        push ebx
        ; Exact mapped bytes FF 15 50 41 89 58: call dword ptr [0x58894150]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, -1
        ; Exact mapped bytes 74 16: je 0x587aa5fc
        __asm _emit 0x74
        __asm _emit 0x16
        push dword ptr [esp + 3ch]
        mov ebp, 1
        push dword ptr [esp + 3ch]
        push ebx
        ; Exact mapped bytes E8 E7 02 00 00: call 0x587aa8e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push ebx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test ebp, ebp
        ; Exact mapped bytes 75 09: jne 0x587aa610
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + edi*4], 0
        inc edi
        cmp edi, dword ptr [esi + 8]
        ; Exact mapped bytes 72 AD: jb 0x587aa5c3
        __asm _emit 0x72
        __asm _emit 0xad
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov ecx, dword ptr [esp + 1ch]
        xor ecx, esp
        ; Exact mapped bytes E8 29 6A 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x6a
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 20h
        ret
        mov ecx, dword ptr [esp + 2ch]
        mov eax, 9
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 11 6A 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6a
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 20h
        ret
    }
}
