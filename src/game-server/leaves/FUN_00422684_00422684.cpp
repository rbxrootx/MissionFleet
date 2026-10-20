// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422684 .. +0x28F bytes.
extern "C" __declspec(naked) void FUN_00422684_00422684() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 34h]
        mov ecx, 0dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 61: je 0x422707
        __asm _emit 0x74
        __asm _emit 0x61
        mov dword ptr [ebp - 1ch], 13h
        mov dword ptr [ebp - 20h], 2
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 13 6D 08 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x6d
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 1ch]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 EC 10 FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x422707
        __asm _emit 0x74
        __asm _emit 0x2c
        mov dword ptr [ebp - 28h], 31h
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 30h], ecx
        lea edx, [ebp - 28h]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 C0 10 FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x422728
        __asm _emit 0x75
        __asm _emit 0x21
        push 0
        push 0
        push 0
        push 0
        push 20002h
        push 80021034h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 4B 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 D9 01 00 00: jmp 0x422901
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 5a14b8h
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 99 60 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        mov byte ptr [ebp - 5], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov dword ptr [edx + eax + 2e4h], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov byte ptr [edx + eax + 2f0h], 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov byte ptr [edx + eax + 2f1h], 2
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov byte ptr [edx + eax + 2f2h], 3
        mov esi, esp
        lea ecx, [ebp - 18h]
        push ecx
        push 5a14bch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        lea edx, [eax + ecx + 2d0h]
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 F5 5F 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x5f
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        ; Exact mapped bytes 66 8B 51 50: mov dx, word ptr [ecx + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x50
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        ; Exact mapped bytes 66 89 51 50: mov word ptr [ecx + 0x50], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 278h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, 56h
        ; Exact mapped bytes 75 19: jne 0x422848
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 5E D4 01 00: call 0x43fc98
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [edx + 20h], eax
        ; Exact mapped bytes EB 30: jmp 0x422878
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D 99 02 00: call 0x44c15d
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 3
        ; Exact mapped bytes 7E 1E: jle 0x422878
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 1ch]
        sub edx, 0baeh
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 1ch], edx
        push 0
        push 0
        push 0
        push 1
        push 20002h
        push 80021034h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 49 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 19ch]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 5A 37 00 00: call 0x426000
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 10h
        or ecx, 4
        mov dword ptr [ebp - 4], ecx
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 19ch]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 E9 FD 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 19ch]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 CD FD 05 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xfd
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 19ch]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 24 37 00 00: call 0x426020
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 34h
        cmp ebp, esp
        ; Exact mapped bytes E8 D3 5E 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x5e
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
