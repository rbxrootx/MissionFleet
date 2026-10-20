// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58551420 .. +0xA46 bytes.
extern "C" __declspec(naked) void FUN_58551420_58551420() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        push esi
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 55 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x5855143e
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 40 0A 00 00: jmp 0x58551e7e
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], 0
        movzx eax, byte ptr [ebp + 8]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        sub ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 2eh
        ; Exact mapped bytes 0F 87 1F 0A 00 00: ja 0x58551e7e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x1f
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        movzx eax, byte ptr [edx + 58551ec8h]
        ; Exact mapped bytes FF 24 85 88 1E 55 58: jmp dword ptr [eax*4 + 0x58551e88]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x1e
        __asm _emit 0x55
        __asm _emit 0x58
        movzx ecx, byte ptr [ebp + 8]
        cmp ecx, 20h
        ; Exact mapped bytes 0F 8D 2F 09 00 00: jge 0x58551dac
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 55 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x55
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dl, byte ptr [eax + 340h]
        movzx eax, dl
        push eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 61 21 00 00: call 0x58553600
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 42 04: mov word ptr [edx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes E9 D3 09 00 00: jmp 0x58551e7e
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5B FA FF FF: call 0x58550f10
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 55 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x55
        __asm _emit 0xf3
        __asm _emit 0xff
        mov al, byte ptr [eax + 340h]
        movzx ecx, al
        push ecx
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 29 21 00 00: call 0x58553600
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 41 04: mov word ptr [ecx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes E9 9B 09 00 00: jmp 0x58551e7e
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 23 FA FF FF: call 0x58550f10
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 8ch], 40000000h
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 54 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x54
        __asm _emit 0xf3
        __asm _emit 0xff
        mov al, byte ptr [eax + 340h]
        movzx ecx, al
        push ecx
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E4 20 00 00: call 0x58553600
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 41 04: mov word ptr [ecx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes E9 56 09 00 00: jmp 0x58551e7e
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 40000000h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7B 2A 00 00: call 0x58553fb0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 43 09 00 00: jmp 0x58551e7e
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 40000000h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D8 2A 00 00: call 0x58554020
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 30 09 00 00: jmp 0x58551e7e
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ebp + 8]
        cmp edx, 17h
        ; Exact mapped bytes 75 09: jne 0x58551560
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 07: jmp 0x58551567
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 1
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 54 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x54
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax + 340h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 8A 09 00: call 0x585ea060
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x8a
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        movzx eax, word ptr [edx + 4]
        xor eax, 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 41 04: mov word ptr [ecx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 18h]
        movzx eax, word ptr [edx + 4]
        xor eax, 2
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 41 04: mov word ptr [ecx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585515c0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 53 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x53
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 7D 2E: jge 0x58551604
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + edx*4 + 8], 0
        ; Exact mapped bytes 74 1F: je 0x58551602
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        ; Exact mapped bytes E8 FE FC F3 FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xfc
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 CF FC F3 FF: call 0x584912d0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B3: jmp 0x585515b7
        __asm _emit 0xeb
        __asm _emit 0xb3
        mov byte ptr [ebp - 1], 0
        push 1
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B E2 F4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xe2
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        xor edx, edx
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes EB 0C: jmp 0x5855162a
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 45 F8: mov ax, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        movzx esi, word ptr [ebp - 8]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 53 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x53
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp esi, dword ptr [eax + 1284h]
        ; Exact mapped bytes 0F 8D E9 02 00 00: jge 0x5855192e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 8]
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + ecx*4 + 8], 0
        ; Exact mapped bytes 0F 84 D2 02 00 00: je 0x58551929
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC E1 F4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe1
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 53 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x53
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 8]
        movzx edx, byte ptr [eax + ecx + 1fch]
        cmp edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 74 7D: je 0x585516fe
        __asm _emit 0x74
        __asm _emit 0x7d
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 53 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x53
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AD AD F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xad
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        movzx eax, word ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 BD B9 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xb9
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 75 13: jne 0x585516be
        __asm _emit 0x75
        __asm _emit 0x13
        movzx edx, word ptr [ebp - 8]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + edx*4 + 8]
        ; Exact mapped bytes E8 F5 09 00 00: call 0x585520b0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3B: jmp 0x585516f9
        __asm _emit 0xeb
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 52 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x52
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 70 AD F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xad
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        movzx ecx, word ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 80 B9 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xb9
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 6
        ; Exact mapped bytes 75 11: jne 0x585516f9
        __asm _emit 0x75
        __asm _emit 0x11
        movzx eax, word ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 08 0A 00 00: call 0x58552100
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 2B 02 00 00: jmp 0x58551929
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 F5 FF FF: call 0x58550c30
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x585517b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebp - 1]
        test eax, eax
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x585517b0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 52 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x52
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 8]
        movzx esi, byte ptr [eax + ecx + 1fch]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 52 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x52
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 8]
        movzx eax, byte ptr [eax + edx + 21ch]
        lea ecx, [eax + esi*2]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA F4 FF FF: call 0x58550c50
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A3 F4 FF FF: call 0x58550c10
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x58551793
        __asm _emit 0x75
        __asm _emit 0x1f
        push 0
        movzx ecx, word ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 E0 68 08 00: call 0x585d8060
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 8
        cmp eax, 1
        ; Exact mapped bytes 75 09: jne 0x58551791
        __asm _emit 0x75
        __asm _emit 0x09
        mov dl, byte ptr [ebp - 1]
        add dl, 1
        mov byte ptr [ebp - 1], dl
        ; Exact mapped bytes EB 1D: jmp 0x585517b0
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 1
        movzx eax, word ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 C1 68 08 00: call 0x585d8060
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 8
        cmp eax, 1
        ; Exact mapped bytes 75 09: jne 0x585517b0
        __asm _emit 0x75
        __asm _emit 0x09
        mov cl, byte ptr [ebp - 1]
        add cl, 1
        mov byte ptr [ebp - 1], cl
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 52 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x52
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7E AC F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xac
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        movzx edx, word ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 8E B8 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xb8
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 5
        ; Exact mapped bytes 0F 85 91 00 00 00: jne 0x5855186f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        movzx edx, word ptr [ecx + 90h]
        and edx, 10h
        ; Exact mapped bytes 74 2E: je 0x5855181b
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 51 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x51
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 8]
        movzx edx, byte ptr [eax + ecx + 21ch]
        test edx, edx
        ; Exact mapped bytes 75 13: jne 0x5855181b
        __asm _emit 0x75
        __asm _emit 0x13
        movzx eax, word ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 D8 07 00 00: call 0x58551ff0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4F: jmp 0x5855186a
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 18h]
        movzx eax, word ptr [edx + 90h]
        and eax, 20h
        ; Exact mapped bytes 74 2F: je 0x58551859
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 51 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 8]
        movzx edx, byte ptr [eax + ecx + 21ch]
        cmp edx, 1
        ; Exact mapped bytes 75 13: jne 0x58551859
        __asm _emit 0x75
        __asm _emit 0x13
        movzx eax, word ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 9A 07 00 00: call 0x58551ff0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 11: jmp 0x5855186a
        __asm _emit 0xeb
        __asm _emit 0x11
        movzx edx, word ptr [ebp - 8]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + edx*4 + 8]
        ; Exact mapped bytes E8 47 08 00 00: call 0x585520b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x58551929
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 51 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x51
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BF AB F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xab
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        movzx ecx, word ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 CF B7 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xb7
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 6
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x58551929
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, word ptr [eax + 90h]
        and ecx, 10h
        ; Exact mapped bytes 74 2E: je 0x585518da
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 09 51 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 8]
        movzx eax, byte ptr [eax + edx + 21ch]
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x585518da
        __asm _emit 0x75
        __asm _emit 0x13
        movzx ecx, word ptr [ebp - 8]
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        ; Exact mapped bytes E8 89 07 00 00: call 0x58552060
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4F: jmp 0x58551929
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, word ptr [eax + 90h]
        and ecx, 20h
        ; Exact mapped bytes 74 2F: je 0x58551918
        __asm _emit 0x74
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CC 50 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x50
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 8]
        movzx eax, byte ptr [eax + edx + 21ch]
        cmp eax, 1
        ; Exact mapped bytes 75 13: jne 0x58551918
        __asm _emit 0x75
        __asm _emit 0x13
        movzx ecx, word ptr [ebp - 8]
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        ; Exact mapped bytes E8 4B 07 00 00: call 0x58552060
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 11: jmp 0x58551929
        __asm _emit 0xeb
        __asm _emit 0x11
        movzx eax, word ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 D8 07 00 00: call 0x58552100
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F0 FC FF FF: jmp 0x5855161e
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 4B 05 00 00: jmp 0x58551e7e
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        movzx eax, byte ptr [edx + 93h]
        and eax, 10h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 81 90 00 00 00: mov word ptr [ecx + 0x90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        ; Exact mapped bytes EB 0C: jmp 0x5855195e
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 45 F4: mov ax, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        movzx esi, word ptr [ebp - 0ch]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 50 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x50
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp esi, dword ptr [eax + 1284h]
        ; Exact mapped bytes 0F 8D 4A 01 00 00: jge 0x58551ac3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + ecx*4 + 8], 0
        ; Exact mapped bytes 0F 84 33 01 00 00: je 0x58551abe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 50 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x50
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 0ch]
        movzx edx, byte ptr [eax + ecx + 21ch]
        test edx, edx
        ; Exact mapped bytes 75 2A: jne 0x585519d0
        __asm _emit 0x75
        __asm _emit 0x2a
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 50 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x50
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 0ch]
        movzx esi, byte ptr [eax + ecx + 1fch]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 4F F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x4f
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp esi, dword ptr [eax + 340h]
        ; Exact mapped bytes 74 78: je 0x58551a48
        __asm _emit 0x74
        __asm _emit 0x78
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 4F F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x4f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5E AA F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xaa
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        movzx edx, word ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 6E B6 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb6
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 5
        ; Exact mapped bytes 75 11: jne 0x58551a0b
        __asm _emit 0x75
        __asm _emit 0x11
        movzx ecx, word ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        ; Exact mapped bytes E8 A6 06 00 00: call 0x585520b0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA 4F F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x4f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 23 AA F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xaa
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        movzx eax, word ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 33 B6 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xb6
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 75 11: jne 0x58551a46
        __asm _emit 0x75
        __asm _emit 0x11
        movzx edx, word ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + edx*4 + 8]
        ; Exact mapped bytes E8 BB 06 00 00: call 0x58552100
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 76: jmp 0x58551abe
        __asm _emit 0xeb
        __asm _emit 0x76
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D 4F F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x4f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E6 A9 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xa9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        movzx ecx, word ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 F6 B5 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb5
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 5
        ; Exact mapped bytes 75 11: jne 0x58551a83
        __asm _emit 0x75
        __asm _emit 0x11
        movzx eax, word ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 6E 05 00 00: call 0x58551ff0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 4F F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x4f
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AB A9 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xa9
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        movzx edx, word ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 BB B5 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb5
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 75 11: jne 0x58551abe
        __asm _emit 0x75
        __asm _emit 0x11
        movzx ecx, word ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        ; Exact mapped bytes E8 A3 05 00 00: call 0x58552060
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8F FE FF FF: jmp 0x58551952
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B6 03 00 00: jmp 0x58551e7e
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, byte ptr [eax + 93h]
        and ecx, 20h
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 8A 90 00 00 00: mov word ptr [edx + 0x90], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 89 45 F0: mov word ptr [ebp - 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes EB 0C: jmp 0x58551af3
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 4D F0: mov cx, word ptr [ebp - 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D F0: mov word ptr [ebp - 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf0
        movzx esi, word ptr [ebp - 10h]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE 4E F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x4e
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp esi, dword ptr [eax + 1284h]
        ; Exact mapped bytes 0F 8D 4E 01 00 00: jge 0x58551c5c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + edx*4 + 8], 0
        ; Exact mapped bytes 0F 84 37 01 00 00: je 0x58551c57
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 4E F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x4e
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 10h]
        movzx edx, byte ptr [eax + ecx + 21ch]
        test edx, edx
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x58551be1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 4E F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x4e
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 10h]
        movzx esi, byte ptr [eax + ecx + 1fch]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 4E F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x4e
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp esi, dword ptr [eax + 340h]
        ; Exact mapped bytes 75 78: jne 0x58551be1
        __asm _emit 0x75
        __asm _emit 0x78
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C 4E F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x4e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 A8 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xa8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        movzx edx, word ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 D5 B4 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xb4
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 5
        ; Exact mapped bytes 75 11: jne 0x58551ba4
        __asm _emit 0x75
        __asm _emit 0x11
        movzx ecx, word ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        ; Exact mapped bytes E8 4D 04 00 00: call 0x58551ff0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 4E F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x4e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8A A8 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xa8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 54h], eax
        movzx eax, word ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 9A B4 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb4
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 75 11: jne 0x58551bdf
        __asm _emit 0x75
        __asm _emit 0x11
        movzx edx, word ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + edx*4 + 8]
        ; Exact mapped bytes E8 82 04 00 00: call 0x58552060
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 76: jmp 0x58551c57
        __asm _emit 0xeb
        __asm _emit 0x76
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 4D F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x4d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4D A8 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xa8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        movzx ecx, word ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 5D B4 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xb4
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 5
        ; Exact mapped bytes 75 11: jne 0x58551c1c
        __asm _emit 0x75
        __asm _emit 0x11
        movzx eax, word ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + eax*4 + 8]
        ; Exact mapped bytes E8 95 04 00 00: call 0x585520b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 4D F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x4d
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 12 A8 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa8
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        movzx edx, word ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 22 B4 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb4
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 75 11: jne 0x58551c57
        __asm _emit 0x75
        __asm _emit 0x11
        movzx ecx, word ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        ; Exact mapped bytes E8 AA 04 00 00: call 0x58552100
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8B FE FF FF: jmp 0x58551ae7
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1D 02 00 00: jmp 0x58551e7e
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, byte ptr [eax + 93h]
        and ecx, 30h
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 8A 90 00 00 00: mov word ptr [edx + 0x90], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes EB 0C: jmp 0x58551c8c
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 4D EC: mov cx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D EC: mov word ptr [ebp - 0x14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xec
        movzx esi, word ptr [ebp - 14h]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 4D F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x4d
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp esi, dword ptr [eax + 1284h]
        ; Exact mapped bytes 0F 8D B7 00 00 00: jge 0x58551d5e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + edx*4 + 8], 0
        ; Exact mapped bytes 0F 84 A0 00 00 00: je 0x58551d59
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 4C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x4c
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, word ptr [ebp - 14h]
        movzx esi, byte ptr [eax + ecx + 1fch]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 4C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x4c
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp esi, dword ptr [eax + 340h]
        ; Exact mapped bytes 75 76: jne 0x58551d59
        __asm _emit 0x75
        __asm _emit 0x76
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 4C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x4c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4B A7 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xa7
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        movzx edx, word ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 5B B3 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xb3
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 5
        ; Exact mapped bytes 75 11: jne 0x58551d1e
        __asm _emit 0x75
        __asm _emit 0x11
        movzx ecx, word ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + ecx*4 + 8]
        ; Exact mapped bytes E8 D3 02 00 00: call 0x58551ff0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 4C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x4c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 10 A7 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xa7
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        movzx eax, word ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 20 B3 F3 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xb3
        __asm _emit 0xf3
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 75 11: jne 0x58551d59
        __asm _emit 0x75
        __asm _emit 0x11
        movzx edx, word ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + edx*4 + 8]
        ; Exact mapped bytes E8 08 03 00 00: call 0x58552060
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 22 FF FF FF: jmp 0x58551c80
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 1B 01 00 00: jmp 0x58551e7e
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 52 4C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x4c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov cl, byte ptr [eax + 340h]
        movzx edx, cl
        push edx
        push 15h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7E 18 00 00: call 0x58553600
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 4C F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x4c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov al, byte ptr [eax + 340h]
        movzx ecx, al
        push ecx
        push 14h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5F 18 00 00: call 0x58553600
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x58551e7e
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x58551e7e
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, byte ptr [ebp + 8]
        cmp edx, 1fh
        ; Exact mapped bytes 0F 8E C5 00 00 00: jle 0x58551e7e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 4B F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x4b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov al, byte ptr [eax + 340h]
        movzx ecx, al
        push ecx
        push 15h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 28 18 00 00: call 0x58553600
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        movzx eax, word ptr [edx + 4]
        xor eax, 2
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 41 04: mov word ptr [ecx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x58551e7e
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 18 F1 FF FF: call 0x58550f10
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD 4B F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x4b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dl, byte ptr [eax + 340h]
        movzx eax, dl
        push eax
        push 14h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E9 17 00 00: call 0x58553600
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        movzx edx, word ptr [ecx + 4]
        xor edx, 1
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 50 04: mov word ptr [eax + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 54: jmp 0x58551e7e
        __asm _emit 0xeb
        __asm _emit 0x54
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DC F0 FF FF: call 0x58550f10
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 4B F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x4b
        __asm _emit 0xf3
        __asm _emit 0xff
        mov cl, byte ptr [eax + 340h]
        movzx edx, cl
        push edx
        push 14h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AD 17 00 00: call 0x58553600
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, word ptr [eax + 4]
        xor ecx, 1
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 4A 04: mov word ptr [edx + 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x04
        ; Exact mapped bytes EB 18: jmp 0x58551e7e
        __asm _emit 0xeb
        __asm _emit 0x18
    }
}
