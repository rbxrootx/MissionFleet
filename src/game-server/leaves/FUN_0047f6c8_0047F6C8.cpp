// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047F6C8 .. +0x32F bytes.
extern "C" __declspec(naked) void FUN_0047f6c8_0047F6C8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 388h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 388h]
        mov ecx, 0e2h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 388h], ecx
        mov eax, dword ptr [ebp - 388h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 0F: jne 0x47f708
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7D 7F FC FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x7f
        __asm _emit 0xfc
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 DA 02 00 00: jmp 0x47f9e2
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, 0dch
        lea edi, [ebp - 370h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebp - 374h], 0
        ; Exact mapped bytes EB 0F: jmp 0x47f733
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 374h]
        add ecx, 1
        mov dword ptr [ebp - 374h], ecx
        cmp dword ptr [ebp - 374h], 32h
        ; Exact mapped bytes 0F 8D A0 02 00 00: jge 0x47f9e0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 374h]
        imul edx, edx, 370h
        cmp dword ptr [ecx + edx + 16bdch], 1
        ; Exact mapped bytes 0F 85 72 02 00 00: jne 0x47f9db
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 370h], 0
        mov eax, dword ptr [ebp - 374h]
        and eax, 3fffffh
        shl eax, 0ah
        mov ecx, dword ptr [ebp - 36ch]
        and ecx, 3ffh
        or ecx, eax
        mov dword ptr [ebp - 36ch], ecx
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 374h]
        imul edx, edx, 370h
        lea edi, [ecx + edx + 16bdch]
        mov ecx, 0dch
        lea esi, [ebp - 370h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 374h]
        mov dword ptr [edx + eax*4 + 16b14h], 0ffffffffh
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 1
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 168h]
        ; Exact mapped bytes 66 8B 51 4E: mov dx, word ptr [ecx + 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x4e
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 89 50 4E: mov word ptr [eax + 0x4e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 8B 42 4E: mov ax, word ptr [edx + 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x4e
        ; Exact mapped bytes 66 2D 01 00: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 89 42 4E: mov word ptr [edx + 0x4e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 374h]
        shl eax, 10h
        or al, 2
        push eax
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 388h]
        mov ecx, dword ptr [eax + 4]
        mov ecx, dword ptr [ecx + 40ca8h]
        ; Exact mapped bytes E8 56 2E 00 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        shr eax, 0ah
        and eax, 3fffffh
        shl eax, 10h
        or al, 2
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 2A 2E 00 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        push 5ch
        lea ecx, [ebp - 36ch]
        push ecx
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 8e8h]
        add ecx, 3ch
        ; Exact mapped bytes E8 1B 17 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x17
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 37ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x47f8c6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 37ch]
        add ecx, 1
        mov dword ptr [ebp - 37ch], ecx
        cmp dword ptr [ebp - 37ch], 20h
        ; Exact mapped bytes 0F 8D 8E 00 00 00: jge 0x47f961
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 37ch]
        imul edx, edx, 0ah
        ; Exact mapped bytes 66 8B 84 15 BE FD FF FF: mov ax, word ptr [ebp + edx - 0x242]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 5
        ; Exact mapped bytes 74 40: je 0x47f932
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 37ch]
        imul ecx, ecx, 0ah
        ; Exact mapped bytes 66 8B 94 0D BE FD FF FF: mov dx, word ptr [ebp + ecx - 0x242]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x0d
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp edx, 6
        ; Exact mapped bytes 74 20: je 0x47f932
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 37ch]
        imul eax, eax, 0ah
        ; Exact mapped bytes 66 8B 8C 05 BE FD FF FF: mov cx, word ptr [ebp + eax - 0x242]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 0dh
        ; Exact mapped bytes 75 2A: jne 0x47f95c
        __asm _emit 0x75
        __asm _emit 0x2a
        push 0ah
        mov edx, dword ptr [ebp - 37ch]
        imul edx, edx, 0ah
        lea eax, [ebp + edx - 242h]
        push eax
        mov ecx, dword ptr [ebp - 388h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 8e8h]
        add ecx, 3ch
        ; Exact mapped bytes E8 6A 16 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x16
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes E9 56 FF FF FF: jmp 0x47f8b7
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 36ch]
        mov dword ptr [ebp - 384h], eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 40cc8h]
        mov eax, dword ptr [edx + 0ca0h]
        mov dword ptr [ebp - 380h], eax
        mov ecx, dword ptr [ebp - 384h]
        add ecx, 24h
        push ecx
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 52 A1 FA FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xa1
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 378h], eax
        mov edx, dword ptr [ebp - 378h]
        push edx
        mov eax, dword ptr [ebp - 380h]
        push eax
        mov ecx, dword ptr [ebp - 384h]
        push ecx
        mov edx, dword ptr [ebp - 388h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40c98h]
        ; Exact mapped bytes E8 3C D5 FB FF: call 0x43cf10
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd5
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 07: jmp 0x47f9e2
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 44 FD FF FF: jmp 0x47f724
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        add esp, 388h
        cmp ebp, esp
        ; Exact mapped bytes E8 EF 8D 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
