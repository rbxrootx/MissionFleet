// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004701CA .. +0x3EC bytes.
extern "C" __declspec(naked) void FUN_004701ca_004701CA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bcbbh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 20h
        push esi
        push edi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 2ch], ecx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x470220
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 32h
        ; Exact mapped bytes 7D 26: jge 0x47024c
        __asm _emit 0x7d
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 18h]
        imul eax, eax, 370h
        cmp dword ptr [edx + eax + 16bdch], 1
        ; Exact mapped bytes 75 08: jne 0x47024a
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 02: jmp 0x47024c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CB: jmp 0x470217
        __asm _emit 0xeb
        __asm _emit 0xcb
        push 370h
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        push edx
        ; Exact mapped bytes E8 FE 90 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        push -1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16e4ch]
        push eax
        ; Exact mapped bytes E8 D5 90 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        push -1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16ecch]
        push ecx
        ; Exact mapped bytes E8 AC 90 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 370h
        mov dword ptr [eax + ecx + 16bdch], 1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 370h
        mov dword ptr [eax + ecx + 16bdch], 0
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cc8h]
        mov edx, dword ptr [ecx + 0ca0h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 16910h
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cc8h]
        mov edx, dword ptr [ecx + 0ca0h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [eax + 28h]
        add ecx, 1bf30h
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 370h
        ; Exact mapped bytes 66 89 84 0A 04 6C 01 00: mov word ptr [edx + ecx + 0x16c04], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 370h
        mov edx, dword ptr [ebp - 24h]
        mov edx, dword ptr [edx + 54h]
        mov dword ptr [eax + ecx + 16be4h], edx
        mov esi, dword ptr [ebp - 20h]
        add esi, 368h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 370h
        lea edi, [ecx + edx + 16c3ch]
        mov ecx, 33h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 A5: movsw word ptr es:[edi], word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0xa5
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 370h
        mov eax, dword ptr [ebp - 10h]
        and eax, 3fffffh
        shl eax, 0ah
        mov ecx, dword ptr [ecx + edx + 16be0h]
        and ecx, 3ffh
        or ecx, eax
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 370h
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov dword ptr [eax + edx + 16be0h], ecx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 370h
        mov ecx, dword ptr [edx + eax + 16be0h]
        and ecx, 0ffffffc1h
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 370h
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 168h]
        mov dword ptr [eax + edx + 16be0h], ecx
        mov ecx, dword ptr [ebp + 8]
        add ecx, 150h
        mov esi, esp
        push ecx
        push 5bb208h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bech]
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
        ; Exact mapped bytes E8 78 83 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        push 80h
        push -1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 370h
        lea eax, [ecx + edx + 16e4ch]
        push eax
        ; Exact mapped bytes E8 E2 8E 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        push -1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16ecch]
        push ecx
        ; Exact mapped bytes E8 B9 8E 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        ; Exact mapped bytes 66 8B 48 4E: mov cx, word ptr [eax + 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x4e
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        ; Exact mapped bytes 66 89 48 4E: mov word ptr [eax + 0x4e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 C7 42 52 03 00: mov word ptr [edx + 0x52], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 B7 21 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        shl eax, 10h
        or al, 2
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 99 21 01 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E3 09 0C 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x09
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9C 7A 01 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 24h]
        add eax, 328h
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bech]
        push ecx
        push 0
        push 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 3E 0A 0C 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x0a
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        push eax
        mov ecx, 5d3b48h
        ; Exact mapped bytes E8 26 2B FE FF: call 0x4530a7
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x2b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 B5 D2 07 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd2
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 2ch
        cmp ebp, esp
        ; Exact mapped bytes E8 30 82 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
