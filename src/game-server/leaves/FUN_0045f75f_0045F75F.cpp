// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F75F .. +0x19C bytes.
extern "C" __declspec(naked) void FUN_0045f75f_0045F75F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 24h], ecx
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add ecx, 40cf0h
        ; Exact mapped bytes E8 83 CC FE FF: call 0x44c420
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 84 2F 01 00 00: je 0x45f8d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 80h], 0
        push 10h
        push 0
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 B0 9B 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], 10h
        lea eax, [ebp - 20h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 FB FE FF: call 0x44f380
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 26: je 0x45f809
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 24h]
        mov al, byte ptr [ebp - 0ch]
        mov byte ptr [edx + 48h], al
        mov ecx, dword ptr [ebp - 24h]
        mov dl, byte ptr [ebp - 0bh]
        mov byte ptr [ecx + 49h], dl
        mov eax, dword ptr [ebp - 24h]
        mov cl, byte ptr [ebp - 0ah]
        mov byte ptr [eax + 4ah], cl
        mov edx, dword ptr [ebp - 24h]
        mov al, byte ptr [ebp - 9]
        mov byte ptr [edx + 4bh], al
        ; Exact mapped bytes EB 0D: jmp 0x45f816
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5ba6bch
        ; Exact mapped bytes E8 02 04 07 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ecx + 44h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ecx + 4ch], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ecx + 50h], eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 8A 15 79 CB 5D 00: mov dl, byte ptr [0x5dcb79]
        __asm _emit 0x8a
        __asm _emit 0x15
        __asm _emit 0x79
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [ecx + 54h], dl
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [eax + 58h], edx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x45f86b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 62: jne 0x45f8d3
        __asm _emit 0x75
        __asm _emit 0x62
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40cd8h]
        ; Exact mapped bytes E8 FE 71 FC FF: call 0x426a80
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x71
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1E: je 0x45f8a9
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        push 18h
        mov edx, dword ptr [ebp - 24h]
        add edx, 44h
        push edx
        push 0
        push 0
        push 80017004h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8B 79 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 28: jmp 0x45f8d1
        __asm _emit 0xeb
        __asm _emit 0x28
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40cd8h]
        ; Exact mapped bytes E8 2E F8 FE FF: call 0x44f0e7
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        push 5ba6ech
        ; Exact mapped bytes E8 47 03 07 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 8F: jmp 0x45f862
        __asm _emit 0xeb
        __asm _emit 0x8f
        ; Exact mapped bytes EB 14: jmp 0x45f8e9
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 5ba724h
        ; Exact mapped bytes E8 2F 03 07 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        xor eax, eax
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 EB 8E 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
