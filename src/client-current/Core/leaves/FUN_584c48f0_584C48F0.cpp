// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C48F0 .. +0x1F8 bytes.
extern "C" __declspec(naked) void FUN_584c48f0_584C48F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 D3 01 00 00: je 0x584c4ae6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x584c49cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 64h]
        ; Exact mapped bytes E8 62 0F FD FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 14: jne 0x584c494a
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 97 15 FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 3B 0F FD FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x584c4970
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 10h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 71 15 FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 49 FF FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FE 44 1A 00: call 0x58668e80
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x44
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 0a4h]
        ; Exact mapped bytes 75 16: jne 0x584c49a3
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B0 AB FD FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 27: jmp 0x584c49ca
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9A AB FD FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 1ch], ecx
        push 4
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 77 AE FD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x584c4a5c
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes E8 B6 0E FD FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 14: jne 0x584c49f6
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 EB 14 FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        ; Exact mapped bytes E8 8F 0E FD FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x584c4a1c
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 24h], eax
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C5 14 FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 9E 00 00 00: movsx edx, word ptr [ecx + 0x9e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 75 1E: jne 0x584c4a48
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9E FC FF FF: call 0x584c46d0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 FB AD FD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xad
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 14: jmp 0x584c4a5c
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 2ch], eax
        push 2
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E5 AD FD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xad
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x584c4a7d
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x584c4a7d
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x584c4ae6
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x584c4aa0
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x584c4a86
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 68 0B FD FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x0b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x584c4ac4
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x584c4ae6
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x584c4ae4
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 44 0B FD FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x0b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x584c4a86
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
