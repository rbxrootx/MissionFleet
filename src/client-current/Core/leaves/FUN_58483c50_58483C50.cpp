// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58483C50 .. +0xCCE bytes.
extern "C" __declspec(naked) void FUN_58483c50_58483C50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 19ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 88 2C 01 00 00: mov word ptr [eax + 0x12c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58483c7c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 51: jge 0x58483cd3
        __asm _emit 0x7d
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0ach]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 44 22 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 9ch]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2A 22 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0a4h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 10 22 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A0: jmp 0x58483c73
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F7 21 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E1 20 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 CB 21 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B5 20 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9F 21 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 89 20 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 73 21 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 38h], eax
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 5D 20 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0fch]
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 47 21 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 31 20 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 100h]
        mov dword ptr [ebp - 44h], eax
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 1B 21 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 100h]
        mov dword ptr [ebp - 48h], edx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 05 20 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58483dee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 7D 37: jge 0x58483e2b
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0c0h]
        mov dword ptr [ebp - 4ch], eax
        push 0
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 D2 1F 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0c0h]
        mov dword ptr [ebp - 50h], eax
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 B8 20 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x58483de5
        __asm _emit 0xeb
        __asm _emit 0xba
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 54h], edx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 9F 1F 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 58h], ecx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 89 20 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        movzx edx, word ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 0F 87 AF 0A 00 00: ja 0x58484918
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xaf
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 85 20 49 48 58: jmp dword ptr [eax*4 + 0x58484920]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x49
        __asm _emit 0x48
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 5ch], edx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 57 20 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 60h], ecx
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 41 1F 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 0a0h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 0d2h
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 53 17 33 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x33
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 45 0A 00 00: jmp 0x58484918
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 68h], eax
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 F7 1F 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 6ch], edx
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 E1 1E 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 16dh
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 0f2h
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 F4 16 33 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x16
        __asm _emit 0x33
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 74h], ecx
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 9E 1F 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 78h], eax
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 88 1E 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 7ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 16dh
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 147h
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 9B 16 33 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x16
        __asm _emit 0x33
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 84h], edx
        push 588946ach
        ; Exact mapped bytes E8 52 E0 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov eax, dword ptr [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 ED 20 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0fch]
        mov dword ptr [ebp - 8ch], edx
        push 588946c8h
        ; Exact mapped bytes E8 24 E0 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov eax, dword ptr [ebp - 88h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 B9 20 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 90h], edx
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 DD 1E 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 94h], ecx
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 C1 1D 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 98h], eax
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 A5 1E 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0fch]
        mov dword ptr [ebp - 9ch], edx
        push 0
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 89 1D 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5848406a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 43: jge 0x584840b3
        __asm _emit 0x7d
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 9ch]
        mov dword ptr [ebp - 0a0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 50 1E 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0a4h]
        mov dword ptr [ebp - 0a4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 30 1E 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB AE: jmp 0x58484061
        __asm _emit 0xeb
        __asm _emit 0xae
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584840c5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 7D 43: jge 0x5848410e
        __asm _emit 0x7d
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0c0h]
        mov dword ptr [ebp - 0a8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 F5 1C 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0c0h]
        mov dword ptr [ebp - 0ach], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 D5 1D 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB AE: jmp 0x584840bc
        __asm _emit 0xeb
        __asm _emit 0xae
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 0b0h], eax
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 B6 1C 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 0b4h], edx
        push 1
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 9A 1D 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CC 07 00 00: jmp 0x58484918
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 0b8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 78 1D 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 0bch], eax
        push 1
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 5C 1C 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 0c0h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 16dh
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 0f2h
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 69 14 33 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x14
        __asm _emit 0x33
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 0c4h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 0D 1D 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 0c8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 F1 1B 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 0cch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 16dh
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 147h
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 FD 13 33 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x13
        __asm _emit 0x33
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 0d4h], eax
        push 588946ech
        ; Exact mapped bytes E8 B4 DD 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xdd
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d0h], eax
        mov ecx, dword ptr [ebp - 0d0h]
        push ecx
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 49 1E 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 0dch], eax
        push 58894708h
        ; Exact mapped bytes E8 80 DD 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xdd
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0d8h], eax
        mov ecx, dword ptr [ebp - 0d8h]
        push ecx
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 15 1E 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 100h]
        mov dword ptr [ebp - 0e4h], eax
        push 5889472ch
        ; Exact mapped bytes E8 4C DD 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xdd
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0e0h], eax
        mov ecx, dword ptr [ebp - 0e0h]
        push ecx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 E1 1D 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 0e8h], eax
        push 1
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 05 1C 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 0ech], edx
        push 0
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 E9 1A 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0fch]
        mov dword ptr [ebp - 0f0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 CD 1B 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0fch]
        mov dword ptr [ebp - 0f4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 B1 1A 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 100h]
        mov dword ptr [ebp - 0f8h], edx
        push 1
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 95 1B 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 100h]
        mov dword ptr [ebp - 0fch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 79 1A 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5848437a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 63: jge 0x584843e3
        __asm _emit 0x7d
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 9ch]
        mov dword ptr [ebp - 100h], edx
        push 1
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 40 1B 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0a4h]
        mov dword ptr [ebp - 104h], edx
        push 1
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 20 1B 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0ach]
        mov dword ptr [ebp - 108h], edx
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 00 1B 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 8E: jmp 0x58484371
        __asm _emit 0xeb
        __asm _emit 0x8e
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584843f5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 7D 43: jge 0x5848443e
        __asm _emit 0x7d
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0c0h]
        mov dword ptr [ebp - 10ch], eax
        push 1
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 C5 19 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0c0h]
        mov dword ptr [ebp - 110h], eax
        push 1
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 A5 1A 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB AE: jmp 0x584843ec
        __asm _emit 0xeb
        __asm _emit 0xae
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 114h], edx
        push 1
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 86 19 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 118h], ecx
        push 1
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 6A 1A 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 9C 04 00 00: jmp 0x58484918
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 11ch], eax
        push 1
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 48 1A 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 120h], edx
        push 1
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 2C 19 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 124h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 0a0h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 0d2h
        push edx
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 39 11 33 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x11
        __asm _emit 0x33
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 2B 04 00 00: jmp 0x58484918
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 128h], ecx
        push 1
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 D7 19 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 12ch], eax
        push 1
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 BB 18 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 130h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 16dh
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 0f2h
        push eax
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 C8 10 33 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x10
        __asm _emit 0x33
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 134h], edx
        push 1
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 6C 19 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 138h], ecx
        push 1
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 50 18 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 13ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 16dh
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 147h
        push ecx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 5C 10 33 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x33
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 144h], eax
        push 58894748h
        ; Exact mapped bytes E8 13 DA 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp - 140h]
        push ecx
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 A8 1A 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 148h], eax
        push 1
        mov ecx, dword ptr [ebp - 148h]
        ; Exact mapped bytes E8 CC 18 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 14ch], edx
        push 1
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 B0 17 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58484643
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 23: jge 0x5848466c
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 9ch]
        mov dword ptr [ebp - 150h], eax
        push 1
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 77 18 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CE: jmp 0x5848463a
        __asm _emit 0xeb
        __asm _emit 0xce
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5848467e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 7D 43: jge 0x584846c7
        __asm _emit 0x7d
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0c0h]
        mov dword ptr [ebp - 154h], ecx
        push 1
        mov ecx, dword ptr [ebp - 154h]
        ; Exact mapped bytes E8 3C 17 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0c0h]
        mov dword ptr [ebp - 158h], ecx
        push 1
        mov ecx, dword ptr [ebp - 158h]
        ; Exact mapped bytes E8 1C 18 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB AE: jmp 0x58484675
        __asm _emit 0xeb
        __asm _emit 0xae
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 15ch], eax
        push 1
        mov ecx, dword ptr [ebp - 15ch]
        ; Exact mapped bytes E8 FD 16 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 160h], edx
        push 1
        mov ecx, dword ptr [ebp - 160h]
        ; Exact mapped bytes E8 E1 17 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 13 02 00 00: jmp 0x58484918
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 164h], ecx
        push 1
        mov ecx, dword ptr [ebp - 164h]
        ; Exact mapped bytes E8 BF 17 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 168h], eax
        push 1
        mov ecx, dword ptr [ebp - 168h]
        ; Exact mapped bytes E8 A3 16 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 16ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 16dh
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        add eax, 0f2h
        push eax
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 B0 0E 33 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x0e
        __asm _emit 0x33
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 170h], edx
        push 1
        mov ecx, dword ptr [ebp - 170h]
        ; Exact mapped bytes E8 54 17 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 174h], ecx
        push 1
        mov ecx, dword ptr [ebp - 174h]
        ; Exact mapped bytes E8 38 16 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 178h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 16dh
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 147h
        push ecx
        mov ecx, dword ptr [ebp - 178h]
        ; Exact mapped bytes E8 44 0E 33 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x0e
        __asm _emit 0x33
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 180h], eax
        push 58894768h
        ; Exact mapped bytes E8 FB D7 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd7
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 17ch], eax
        mov ecx, dword ptr [ebp - 17ch]
        push ecx
        mov ecx, dword ptr [ebp - 180h]
        ; Exact mapped bytes E8 90 18 00 00: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 184h], eax
        push 1
        mov ecx, dword ptr [ebp - 184h]
        ; Exact mapped bytes E8 B4 16 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 188h], edx
        push 1
        mov ecx, dword ptr [ebp - 188h]
        ; Exact mapped bytes E8 98 15 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5848485b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 23: jge 0x58484884
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 9ch]
        mov dword ptr [ebp - 18ch], eax
        push 1
        mov ecx, dword ptr [ebp - 18ch]
        ; Exact mapped bytes E8 5F 16 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CE: jmp 0x58484852
        __asm _emit 0xeb
        __asm _emit 0xce
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58484896
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 7D 43: jge 0x584848df
        __asm _emit 0x7d
        __asm _emit 0x43
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0c0h]
        mov dword ptr [ebp - 190h], ecx
        push 1
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes E8 24 15 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0c0h]
        mov dword ptr [ebp - 194h], ecx
        push 1
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes E8 04 16 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB AE: jmp 0x5848488d
        __asm _emit 0xeb
        __asm _emit 0xae
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 198h], eax
        push 1
        mov ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes E8 E5 14 00 00: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov dword ptr [ebp - 19ch], edx
        push 1
        mov ecx, dword ptr [ebp - 19ch]
        ; Exact mapped bytes E8 C9 15 00 00: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
