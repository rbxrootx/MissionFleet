// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58551020 .. +0x1B7 bytes.
extern "C" __declspec(naked) void FUN_58551020_58551020() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 1
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58551049
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C 59 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x59
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 0F 8D 6A 01 00 00: jge 0x585511cd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + eax*4 + 8], 0
        ; Exact mapped bytes 0F 84 54 01 00 00: je 0x585511c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x54
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
        ; Exact mapped bytes E8 41 59 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x59
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BA B3 F3 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xb3
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A3 EB F4 FF: call 0x5849fc30
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xeb
        __asm _emit 0xf4
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        shl edx, cl
        and edx, 80000000h
        ; Exact mapped bytes 0F 84 28 01 00 00: je 0x585511c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x28
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
        ; Exact mapped bytes E8 15 59 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x59
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        movzx esi, byte ptr [eax + ecx + 1fch]
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 58 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x58
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp esi, dword ptr [eax + 340h]
        ; Exact mapped bytes 0F 85 FB 00 00 00: jne 0x585511c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp + 8]
        and edx, 10h
        ; Exact mapped bytes 74 74: je 0x5855114a
        __asm _emit 0x74
        __asm _emit 0x74
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 58 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x58
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [eax + ecx + 21ch]
        test edx, edx
        ; Exact mapped bytes 75 5A: jne 0x5855114a
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 25: je 0x5855114a
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dl, byte ptr [ecx]
        add dl, 1
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax], dl
        ; Exact mapped bytes 8B 0D 60 06 96 58: mov ecx, dword ptr [0x58960660]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        add ecx, 1
        ; Exact mapped bytes 89 0D 60 06 96 58: mov dword ptr [0x58960660], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        movzx edx, word ptr [ebp + 8]
        and edx, 20h
        ; Exact mapped bytes 74 75: je 0x585511c8
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 58 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x58
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [eax + ecx + 21ch]
        cmp edx, 1
        ; Exact mapped bytes 75 5A: jne 0x585511c8
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax*4 + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 25: je 0x585511c8
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dl, byte ptr [ecx]
        add dl, 1
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax], dl
        ; Exact mapped bytes 8B 0D 60 06 96 58: mov ecx, dword ptr [0x58960660]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        add ecx, 1
        ; Exact mapped bytes 89 0D 60 06 96 58: mov dword ptr [0x58960660], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E9 73 FE FF FF: jmp 0x58551040
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
