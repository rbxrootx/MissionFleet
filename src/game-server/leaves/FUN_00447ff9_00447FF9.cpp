// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00447FF9 .. +0x54E bytes.
extern "C" __declspec(naked) void FUN_00447ff9_00447FF9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 44h]
        mov ecx, 11h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 40h], ecx
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 16ch], -1
        ; Exact mapped bytes 0F 84 F1 04 00 00: je 0x448516
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 16ch]
        imul ecx, ecx, 370h
        mov edx, dword ptr [edx + ecx + 16be0h]
        and edx, 1
        cmp edx, 1
        ; Exact mapped bytes 0F 85 C6 04 00 00: jne 0x448516
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 19h
        mov dword ptr [ebp - 20h], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 1ch]
        push edx
        lea eax, [ebp - 20h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 48 B7 FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb7
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 56 04 00 00: je 0x4484d9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        and eax, 0fh
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 0f0h
        shr edx, 4
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        mov dword ptr [ebp - 28h], 4
        mov dword ptr [ebp - 2ch], 0
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        mov dword ptr [ebp - 30h], eax
        lea ecx, [ebp - 28h]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 EC B6 FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 B5 03 00 00: je 0x448494
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 4
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 0ffffh
        mov dword ptr [ebp - 3ch], ecx
        lea edx, [ebp - 34h]
        push edx
        lea eax, [ebp - 38h]
        push eax
        lea ecx, [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 B6 B6 FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 7F 03 00 00: je 0x448494
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        sub eax, 1
        shl eax, 8
        mov ecx, dword ptr [ebp + 8]
        or eax, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes 66 8B 45 EC: mov ax, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xec
        push eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40cach]
        add ecx, 4bb0h
        ; Exact mapped bytes E8 47 0D 0A 00: call 0x4e8e92
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x0d
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 21: je 0x448172
        __asm _emit 0x74
        __asm _emit 0x21
        push 0
        push 0
        push 0
        push 20000h
        push 0
        push 80020112h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 C7 F0 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf0
        __asm _emit 0x03
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 C3 03 00 00: jmp 0x448535
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 09: jmp 0x448184
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 19h
        ; Exact mapped bytes 0F 8F E5 02 00 00: jg 0x448473
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        sub edx, 1
        shl edx, 8
        or edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 55 E8: mov word ptr [ebp - 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe8
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes 66 8B 4D E8: mov cx, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        push ecx
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cach]
        add ecx, 4bcch
        ; Exact mapped bytes E8 D1 0C 0A 00: call 0x4e8e92
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x0c
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 85 9C 02 00 00: jne 0x448467
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40cb8h]
        ; Exact mapped bytes E8 06 01 FF FF: call 0x4382e4
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes 66 8B 4D EC: mov cx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        push ecx
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40cach]
        add ecx, 4bb0h
        ; Exact mapped bytes E8 23 B5 0E 00: call 0x533724
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb5
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        sub eax, 1
        shl eax, 8
        or eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40cach]
        add ecx, 4bcch
        ; Exact mapped bytes E8 F8 B4 0E 00: call 0x533724
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb4
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 63 28 04 00: call 0x48aa9e
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 64 93 FB FF: call 0x4015a9
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x93
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 40cb8h]
        mov dword ptr [ecx + 0d98h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0d78h]
        mov dword ptr [eax + 104h], ecx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [edx + 110h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0d78h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 10ch], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9B 04 FF FF: call 0x438740
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        push 5b6908h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d78h]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 8
        cmp esi, esp
        ; Exact mapped bytes E8 17 05 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x05
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0d78h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 66 81 E2 FF 00: and dx, 0xff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 40 66: mov ax, word ptr [eax + 0x66]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x66
        ; Exact mapped bytes 66 25 00 FF: and ax, 0xff00
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0xff
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d78h]
        ; Exact mapped bytes 66 89 42 66: mov word ptr [edx + 0x66], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d78h]
        ; Exact mapped bytes 66 8B 51 68: mov dx, word ptr [ecx + 0x68]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x68
        ; Exact mapped bytes 66 81 E2 FC FF: and dx, 0xfffc
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xfc
        __asm _emit 0xff
        or dl, 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d78h]
        ; Exact mapped bytes 66 89 51 68: mov word ptr [ecx + 0x68], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0d78h]
        mov byte ptr [eax + 64h], 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [ebp - 10h]
        and al, 7fh
        mov cl, byte ptr [edx + 50h]
        and cl, 80h
        or cl, al
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0d78h]
        mov byte ptr [eax + 50h], cl
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 51h]
        and al, 80h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov byte ptr [edx + 51h], al
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov dl, byte ptr [ecx + 52h]
        and dl, 0f0h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov byte ptr [ecx + 52h], dl
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 52h]
        and cl, 0efh
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0d78h]
        mov byte ptr [eax + 52h], cl
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 52h]
        and al, 0dfh
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov byte ptr [edx + 52h], al
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov dl, byte ptr [ecx + 53h]
        and dl, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov byte ptr [ecx + 53h], dl
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0d78h]
        mov cl, byte ptr [eax + 54h]
        and cl, 0f0h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0d78h]
        mov byte ptr [eax + 54h], cl
        mov ecx, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 85 71 FF FF: call 0x43f577
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 83 E8 FF FF: call 0x446c7d
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 CE 03 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 47: jne 0x44845d
        __asm _emit 0x75
        __asm _emit 0x47
        mov esi, esp
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 F9 8E FB FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 A4 03 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x06
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 40000h
        push 0
        push 80020112h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 DC ED 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 D8 00 00 00: jmp 0x448535
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x448535
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes E9 08 FD FF FF: jmp 0x44817b
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 30000h
        push 0
        push 80020112h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A5 ED 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x448535
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp - 40h]
        add eax, 150h
        push eax
        push 5b6914h
        push 5b695ch
        push 5d3fb0h
        ; Exact mapped bytes E8 6C B3 00 00: call 0x453824
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        push 0
        push 0
        push 0
        push 20000h
        push 0
        push 80020112h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 5D ED 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 5C: jmp 0x448535
        __asm _emit 0xeb
        __asm _emit 0x5c
        push 0
        push 0
        push 0
        push 20000h
        push 0
        push 80020112h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 3F ED 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 150h
        push ecx
        push 5b6970h
        push 5b69bch
        push 5d3fb0h
        ; Exact mapped bytes E8 13 B3 00 00: call 0x453824
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 1A: jmp 0x448530
        __asm _emit 0xeb
        __asm _emit 0x1a
        push 0
        push 0
        push 0
        push 10000h
        push 0
        push 80020112h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 02 ED 03 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xed
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 44h
        cmp ebp, esp
        ; Exact mapped bytes E8 9F 02 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
