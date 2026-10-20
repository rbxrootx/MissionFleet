// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F7070 .. +0xD09 bytes.
extern "C" __declspec(naked) void FUN_584f7070_584F7070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        push 154h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 84 5D 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, 14h
        imul edx, ecx, 0
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 44 11 04: mov word ptr [ecx + edx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x04
        push 0ceh
        mov edx, 14h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 8]
        push edx
        mov eax, 14h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 14h]
        push eax
        mov ecx, 0c0h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 168h]
        push ecx
        push 0
        push 588a27d0h
        push 588a27fch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 0C 00 00: call 0x584f7d80
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul ecx, edx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0e28h], eax
        mov eax, 14h
        shl eax, 0
        mov ecx, 1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4C 02 04: mov word ptr [edx + eax + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x04
        push 390h
        mov eax, 14h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 8]
        push edx
        mov eax, 14h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 14h]
        push edx
        mov eax, 0c0h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 1
        push 588a280ch
        push 588a2838h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 0C 00 00: call 0x584f7d80
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0e28h], eax
        mov eax, 14h
        shl eax, 1
        mov ecx, 2
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4C 02 04: mov word ptr [edx + eax + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x04
        push 0ach
        mov eax, 14h
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 8]
        push edx
        mov eax, 14h
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 14h]
        push edx
        mov eax, 0c0h
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 0
        push 588a2844h
        push 588a2870h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 0B 00 00: call 0x584f7d80
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0e28h], eax
        mov eax, 14h
        imul ecx, eax, 3
        mov edx, 3
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 54 08 04: mov word ptr [eax + ecx + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x08
        __asm _emit 0x04
        push 0a4h
        mov ecx, 14h
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 8]
        push ecx
        mov edx, 14h
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 14h]
        push edx
        mov eax, 0c0h
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 168h]
        push eax
        push 0
        push 588a287ch
        push 588a28a8h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3F 0B 00 00: call 0x584f7d80
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e28h], eax
        mov edx, 14h
        imul eax, edx, 5
        mov ecx, 5
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4C 02 04: mov word ptr [edx + eax + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x04
        push 0b4h
        mov eax, 14h
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        push eax
        mov ecx, 14h
        imul edx, ecx, 5
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 168h]
        push ecx
        push 0
        push 588a28b4h
        push 588a28e0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CC 0A 00 00: call 0x584f7d80
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 2
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e28h], eax
        mov edx, 14h
        imul eax, edx, 6
        mov ecx, 6
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4C 02 04: mov word ptr [edx + eax + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x04
        push 0a8h
        mov eax, 14h
        imul ecx, eax, 6
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        push eax
        mov ecx, 14h
        imul edx, ecx, 6
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 0
        push 588a28ech
        push 588a2918h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 0A 00 00: call 0x584f7d80
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 5
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e28h], eax
        mov edx, 14h
        imul eax, edx, 0bh
        mov ecx, 0bh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4C 02 04: mov word ptr [edx + eax + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x04
        push 0ach
        mov eax, 14h
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        push eax
        mov ecx, 14h
        imul edx, ecx, 0bh
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 0
        push 588a2928h
        push 588a2954h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E6 09 00 00: call 0x584f7d80
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 6
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e28h], eax
        mov edx, 14h
        imul eax, edx, 0ch
        mov ecx, 0ch
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4C 02 04: mov word ptr [edx + eax + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x04
        push 0b4h
        mov eax, 14h
        imul ecx, eax, 0ch
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        push eax
        mov ecx, 14h
        imul edx, ecx, 0ch
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 0
        push 588a2964h
        push 588a2990h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 09 00 00: call 0x584f7d80
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 7
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e28h], eax
        mov edx, 14h
        imul eax, edx, 0dh
        mov ecx, 0dh
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4C 02 04: mov word ptr [edx + eax + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x04
        push 0d4h
        mov eax, 14h
        imul ecx, eax, 0dh
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        push eax
        mov ecx, 14h
        imul edx, ecx, 0dh
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        shl edx, 3
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 168h]
        push ecx
        push 0
        push 588a29a0h
        push 588a29cch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 09 00 00: call 0x584f7d80
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e28h], eax
        mov edx, 14h
        shl edx, 2
        mov eax, 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 44 11 04: mov word ptr [ecx + edx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x04
        push 9ch
        mov edx, 14h
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 8]
        push ecx
        mov edx, 14h
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        imul eax, edx, 9
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 0
        push 588a29dch
        push 588a2a08h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D 08 00 00: call 0x584f7d80
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 9
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e28h], eax
        mov edx, 14h
        shl edx, 3
        mov eax, 8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 44 11 04: mov word ptr [ecx + edx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x11
        __asm _emit 0x04
        push 574h
        mov edx, 14h
        shl edx, 3
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 8]
        push ecx
        mov edx, 14h
        shl edx, 3
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        imul eax, edx, 0ah
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 0ah
        push 588a2a14h
        push 588a2a38h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 08 00 00: call 0x584f7d80
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0ah
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e28h], eax
        mov edx, 14h
        imul eax, edx, 9
        mov ecx, 9
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4C 02 04: mov word ptr [edx + eax + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x04
        push 318h
        mov eax, 14h
        imul ecx, eax, 9
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        push eax
        mov ecx, 14h
        imul edx, ecx, 9
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        imul eax, edx, 0bh
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 0bh
        push 588a2a4ch
        push 588a2a78h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 07 00 00: call 0x584f7d80
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0bh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e28h], eax
        mov edx, 14h
        imul eax, edx, 0ah
        mov ecx, 0ah
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4C 02 04: mov word ptr [edx + eax + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x04
        push 0e0h
        mov eax, 14h
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        push eax
        mov ecx, 14h
        imul edx, ecx, 0ah
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        imul eax, edx, 0ch
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 0ch
        push 0
        push 588a2a84h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 07 00 00: call 0x584f7d80
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e28h], eax
        mov edx, 4
        imul eax, edx, 0dh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0e28h], 0
        mov edx, 14h
        imul eax, edx, 7
        mov ecx, 7
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4C 02 04: mov word ptr [edx + eax + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x04
        push 13ch
        mov eax, 14h
        imul ecx, eax, 7
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 8]
        push eax
        mov ecx, 14h
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 14h]
        push ecx
        mov edx, 0c0h
        imul eax, edx, 0dh
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        push 0dh
        push 588a2a94h
        push 588a2ac0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE 06 00 00: call 0x584f7d80
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0dh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e28h], eax
        push 0
        push 0c0h
        mov edx, 0c0h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 F5 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0eb0h], eax
        push 0
        push 14h
        mov edx, 14h
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 4]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 F5 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e6ch], eax
        push 0
        push 0c0h
        mov edx, 0c0h
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 168h]
        push ecx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F F5 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0eb0h], eax
        push 0
        push 14h
        mov edx, 14h
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 4]
        push ecx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E F5 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e6ch], eax
        push 0
        push 0c0h
        mov edx, 0c0h
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 168h]
        push ecx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 F5 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xf5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0eb0h], eax
        push 0
        push 14h
        mov edx, 14h
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 4]
        push ecx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 F4 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e6ch], eax
        push 0
        push 0c0h
        mov edx, 0c0h
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 F4 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0eb0h], eax
        push 0
        push 14h
        mov edx, 14h
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 4]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 F4 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e6ch], eax
        push 0
        push 0c0h
        mov edx, 0c0h
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 168h]
        push ecx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B F4 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 2
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0eb0h], eax
        push 0
        push 14h
        mov edx, 14h
        imul eax, edx, 5
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 4]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A F4 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0e6ch], eax
        push 0
        push 0c0h
        mov eax, 0c0h
        imul ecx, eax, 5
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 168h]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 F3 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xf3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 5
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0eb0h], eax
        push 0
        push 14h
        mov edx, 14h
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 4]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 F3 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 5
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e6ch], eax
        push 0
        push 0c0h
        mov edx, 0c0h
        imul eax, edx, 6
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B F3 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 6
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0eb0h], eax
        push 0
        push 14h
        mov edx, 14h
        imul eax, edx, 0bh
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 4]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A F3 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xf3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 6
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e6ch], eax
        push 0
        push 0c0h
        mov edx, 0c0h
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 F3 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf3
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 7
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0eb0h], eax
        push 0
        push 14h
        mov edx, 14h
        imul eax, edx, 0ch
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 4]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 F2 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 7
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e6ch], eax
        push 0
        push 0c0h
        mov edx, 0c0h
        shl edx, 3
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 168h]
        push ecx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B F2 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0eb0h], eax
        push 0
        push 14h
        mov edx, 14h
        imul eax, edx, 0dh
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 4]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A F2 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 3
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0e6ch], eax
        push 0
        push 0c0h
        mov eax, 0c0h
        imul ecx, eax, 9
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 168h]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 F2 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 9
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0eb0h], eax
        push 0
        push 14h
        mov edx, 14h
        shl edx, 2
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 4]
        push ecx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 02 F2 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, 4
        imul ecx, edx, 9
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0e6ch], eax
        push 0
        push 0c0h
        mov eax, 0c0h
        imul ecx, eax, 0ah
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 168h]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CB F1 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0ah
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0eb0h], eax
        push 0
        push 14h
        mov edx, 14h
        shl edx, 3
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 4]
        push ecx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A F1 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, 4
        imul ecx, edx, 0ah
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0e6ch], eax
        push 0
        push 0c0h
        mov eax, 0c0h
        imul ecx, eax, 0bh
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 168h]
        push eax
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 F1 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0bh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0eb0h], eax
        push 0
        push 14h
        mov edx, 14h
        imul eax, edx, 9
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 4]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 F1 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0bh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e6ch], eax
        push 0
        push 0c0h
        mov edx, 0c0h
        imul eax, edx, 0ch
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB F0 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0eb0h], eax
        push 0
        push 14h
        mov edx, 14h
        imul eax, edx, 0ah
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 4]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA F0 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e6ch], eax
        mov edx, 4
        imul eax, edx, 0dh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0eb0h], 0
        mov edx, 4
        imul eax, edx, 0dh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0e6ch], 0
        push 0
        push 0c0h
        mov edx, 0c0h
        imul eax, edx, 0dh
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 168h]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 F0 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0dh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0eb0h], eax
        push 0
        push 14h
        mov edx, 14h
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 4]
        push edx
        ; Exact mapped bytes 8B 0D C4 79 94 58: mov ecx, dword ptr [0x589479c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 F0 FC FF: call 0x584c6ce0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0dh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0e6ch], eax
        mov dword ptr [ebp - 0ch], 0
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 80000000h
        push 588a2ad8h
        ; Exact mapped bytes E8 21 B6 2B 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xb6
        __asm _emit 0x2b
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 75 41: jne 0x584f7d29
        __asm _emit 0x75
        __asm _emit 0x41
        push 1
        push 588a2ae4h
        ; Exact mapped bytes 8B 0D A4 20 96 58: mov ecx, dword ptr [0x589620a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 9A FF FF: call 0x584f1750
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 588a2af0h
        push 588a2afch
        ; Exact mapped bytes 8B 15 1C 5F 96 58: mov edx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 47 33 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x47
        __asm _emit 0x33
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 68 44 89 58: call dword ptr [0x58894468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 35: jmp 0x584f7d5e
        __asm _emit 0xeb
        __asm _emit 0x35
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        push 173f0h
        push 589490f0h
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ef4h], 1
        ; Exact mapped bytes C7 05 34 7A 94 58 01 00 00 00: mov dword ptr [0x58947a34], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x7a
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
