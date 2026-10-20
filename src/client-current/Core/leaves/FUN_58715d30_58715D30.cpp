// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58715D30 .. +0x159 bytes.
extern "C" __declspec(naked) void FUN_58715d30_58715D30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        push 2fh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A ED D6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xed
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 63 60 0A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x00
        push 2fh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 ED D6 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xed
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0dch], 0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d4h]
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 E0 00 00 00: movsx ecx, word ptr [eax + 0xe0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 75 11: jne 0x58715dda
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        add eax, 6eh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes EB 0F: jmp 0x58715de9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        sub eax, 6eh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d8h]
        mov dword ptr [edx + 54h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 1ch], eax
        push 0ffffff00h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A2 F7 09 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf7
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 20h], edx
        push 0b4h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1C F7 09 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf7
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 24h], ecx
        push 10h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 09 F7 09 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf7
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58715e4a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 7
        ; Exact mapped bytes 7D 35: jge 0x58715e85
        __asm _emit 0x7d
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 0e8h], 0
        ; Exact mapped bytes 74 23: je 0x58715e83
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 5E 00 D7 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BC: jmp 0x58715e41
        __asm _emit 0xeb
        __asm _emit 0xbc
        mov esp, ebp
        pop ebp
        ret
    }
}
