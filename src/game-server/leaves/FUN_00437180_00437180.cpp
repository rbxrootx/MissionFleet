// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437180 .. +0x3F2 bytes.
extern "C" __declspec(naked) void FUN_00437180_00437180() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a39ch
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
        push 0ffffh
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 4b8ch
        ; Exact mapped bytes E8 C2 9C FD FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 0ah
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 4bb0h
        ; Exact mapped bytes E8 5B 18 0B 00: call 0x4e8a40
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x18
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        push 0ah
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 4bcch
        ; Exact mapped bytes E8 47 18 0B 00: call 0x4e8a40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x18
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        push 0ah
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 4be8h
        ; Exact mapped bytes E8 63 2C 0B 00: call 0x4e9e70
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x2c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax], 5812f0h
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 35f8h], edx
        push 1000h
        push 0
        mov eax, dword ptr [ebp - 2ch]
        add eax, 3618h
        push eax
        ; Exact mapped bytes E8 35 21 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        push 19h
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 35fch
        push ecx
        ; Exact mapped bytes E8 1F 21 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x21
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        push 1bh
        push 5b5aach
        push 6
        ; Exact mapped bytes E8 D1 5D 0B 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 3588h], eax
        push 1ch
        push 5b5aach
        push 64h
        ; Exact mapped bytes E8 B1 5D 0B 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 358ch], edx
        push 1dh
        push 5b5aach
        push 384h
        ; Exact mapped bytes E8 8E 5D 0B 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 3590h], ecx
        push 3584h
        push 0
        mov edx, dword ptr [ebp - 2ch]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 A6 20 07 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4372df
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 19h
        ; Exact mapped bytes 7D 5C: jge 0x437341
        __asm _emit 0x7d
        __asm _emit 0x5c
        push 35h
        push 5b5aach
        push 960h
        ; Exact mapped bytes E8 3D 5D 0B 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [edx + ecx*4 + 3594h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x43731e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 19h
        ; Exact mapped bytes 7D 1B: jge 0x43733f
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 10h]
        imul edx, edx, 32h
        mov eax, dword ptr [ebp - 2ch]
        lea ecx, [eax + edx + 4696h]
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 66 C7 04 51 FF FF: mov word ptr [ecx + edx*2], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D6: jmp 0x437315
        __asm _emit 0xeb
        __asm _emit 0xd6
        ; Exact mapped bytes EB 95: jmp 0x4372d6
        __asm _emit 0xeb
        __asm _emit 0x95
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x437353
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 7D 69: jge 0x4373c2
        __asm _emit 0x7d
        __asm _emit 0x69
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x43736b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0ah
        ; Exact mapped bytes 7D 4F: jge 0x4373c0
        __asm _emit 0x7d
        __asm _emit 0x4f
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x437383
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 10h
        ; Exact mapped bytes 7D 35: jge 0x4373be
        __asm _emit 0x7d
        __asm _emit 0x35
        push 5b5b04h
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 0ab4h
        mov ecx, dword ptr [ebp - 2ch]
        lea edx, [ecx + eax + 4]
        mov eax, dword ptr [ebp - 14h]
        imul eax, eax, 112h
        add edx, eax
        mov ecx, dword ptr [ebp - 18h]
        shl ecx, 4
        lea edx, [edx + ecx + 12h]
        push edx
        ; Exact mapped bytes E8 87 2A 07 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x2a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB BC: jmp 0x43737a
        __asm _emit 0xeb
        __asm _emit 0xbc
        ; Exact mapped bytes EB A2: jmp 0x437362
        __asm _emit 0xeb
        __asm _emit 0xa2
        ; Exact mapped bytes EB 88: jmp 0x43734a
        __asm _emit 0xeb
        __asm _emit 0x88
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x4373d4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 19h
        ; Exact mapped bytes 7D 12: jge 0x4373ec
        __asm _emit 0x7d
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 C7 84 4A 04 4C 00 00 00 00: mov word ptr [edx + ecx*2 + 0x4c04], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0x04
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB DF: jmp 0x4373cb
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov eax, dword ptr [ebp - 2ch]
        mov byte ptr [eax + 467ch], 70h
        mov ecx, dword ptr [ebp - 2ch]
        mov byte ptr [ecx + 467dh], 7ch
        mov edx, dword ptr [ebp - 2ch]
        mov byte ptr [edx + 467eh], 7ch
        mov eax, dword ptr [ebp - 2ch]
        mov byte ptr [eax + 467fh], 7ch
        mov ecx, dword ptr [ebp - 2ch]
        mov byte ptr [ecx + 4680h], 1ch
        mov edx, dword ptr [ebp - 2ch]
        mov byte ptr [edx + 4681h], 0f1h
        mov eax, dword ptr [ebp - 2ch]
        mov byte ptr [eax + 4682h], 0ffh
        mov ecx, dword ptr [ebp - 2ch]
        mov byte ptr [ecx + 4683h], 0ffh
        mov edx, dword ptr [ebp - 2ch]
        mov byte ptr [edx + 4684h], 0ffh
        mov eax, dword ptr [ebp - 2ch]
        mov byte ptr [eax + 4685h], 1fh
        mov ecx, dword ptr [ebp - 2ch]
        mov byte ptr [ecx + 4686h], 0f1h
        mov edx, dword ptr [ebp - 2ch]
        mov byte ptr [edx + 4687h], 0ffh
        mov eax, dword ptr [ebp - 2ch]
        mov byte ptr [eax + 4688h], 0ffh
        mov ecx, dword ptr [ebp - 2ch]
        mov byte ptr [ecx + 4689h], 0ffh
        mov edx, dword ptr [ebp - 2ch]
        mov byte ptr [edx + 468ah], 1fh
        mov eax, dword ptr [ebp - 2ch]
        mov byte ptr [eax + 468bh], 0f1h
        mov ecx, dword ptr [ebp - 2ch]
        mov byte ptr [ecx + 468ch], 0ffh
        mov edx, dword ptr [ebp - 2ch]
        mov byte ptr [edx + 468dh], 0ffh
        mov eax, dword ptr [ebp - 2ch]
        mov byte ptr [eax + 468eh], 0ffh
        mov ecx, dword ptr [ebp - 2ch]
        mov byte ptr [ecx + 468fh], 1fh
        mov edx, dword ptr [ebp - 2ch]
        mov byte ptr [edx + 4690h], 0c1h
        mov eax, dword ptr [ebp - 2ch]
        mov byte ptr [eax + 4691h], 0c7h
        mov ecx, dword ptr [ebp - 2ch]
        mov byte ptr [ecx + 4692h], 0c7h
        mov edx, dword ptr [ebp - 2ch]
        mov byte ptr [edx + 4693h], 0c7h
        mov eax, dword ptr [ebp - 2ch]
        mov byte ptr [eax + 4694h], 7
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 C7 81 78 4B 00 00 FC FF: mov word ptr [ecx + 0x4b78], 0xfffc
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 C7 82 7A 4B 00 00 01 00: mov word ptr [edx + 0x4b7a], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x7a
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 C7 80 7C 4B 00 00 06 00: mov word ptr [eax + 0x4b7c], 6
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 C7 81 7E 4B 00 00 05 00: mov word ptr [ecx + 0x4b7e], 5
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x7e
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 C7 82 80 4B 00 00 04 00: mov word ptr [edx + 0x4b80], 4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 C7 80 82 4B 00 00 FF FF: mov word ptr [eax + 0x4b82], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x80
        __asm _emit 0x82
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 C7 81 84 4B 00 00 FA FF: mov word ptr [ecx + 0x4b84], 0xfffa
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 C7 82 86 4B 00 00 FB FF: mov word ptr [edx + 0x4b86], 0xfffb
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x82
        __asm _emit 0x86
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 CF 04 00 00: call 0x437a1d
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 2ch
        cmp ebp, esp
        ; Exact mapped bytes E8 74 12 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
