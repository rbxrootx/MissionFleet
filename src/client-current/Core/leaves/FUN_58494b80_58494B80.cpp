// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58494B80 .. +0x19E bytes.
extern "C" __declspec(naked) void FUN_58494b80_58494B80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4c8h], 0
        ; Exact mapped bytes 0F 84 75 01 00 00: je 0x58494d16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4d4h], 0
        ; Exact mapped bytes 0F 84 65 01 00 00: je 0x58494d16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4d8h], -1
        ; Exact mapped bytes 0F 84 55 01 00 00: je 0x58494d16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4d8h]
        and ecx, 0f0000h
        sar ecx, 10h
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4d8h]
        and eax, 0ffh
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4d4h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 01 71 FF FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DA 72 FF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x58494d16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 5f5e100h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4d4h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D3 70 FF FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8C 1D FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x58494c44
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6F 74 FF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x58494d16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8A 72 FF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4F 85 FF FF: call 0x5848d1b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x58494d11
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BF 74 FF FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x58494d11
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3E 1D FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        sub edx, eax
        push edx
        ; Exact mapped bytes E8 7D C3 3B 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc3
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 4ach]
        cdq
        mov ecx, 0bb8h
        idiv ecx
        mov esi, eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3F 09 00 00: call 0x584955f0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, eax
        imul eax, esi, 0c8h
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        ; Exact mapped bytes E8 46 C3 3B 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xc3
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 18h]
        imul edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 1ch]
        imul eax, dword ptr [ebp - 1ch]
        add edx, eax
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes F2 0F 2A 45 F0: cvtsi2sd xmm0, dword ptr [ebp - 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 2E C3 3B 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc3
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 96 C5 39 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc5
        __asm _emit 0x39
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 7D 0C: jge 0x58494d11
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes E9 23 FF FF FF: jmp 0x58494c39
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
