// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FC8B0 .. +0x2E4 bytes.
extern "C" __declspec(naked) void FUN_584fc8b0_584FC8B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 25ch], 2
        ; Exact mapped bytes 0F 84 C5 02 00 00: je 0x584fcb8f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 1C 5F 96 58: mov ecx, dword ptr [0x58965f1c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        ; Exact mapped bytes FF 15 80 44 89 58: call dword ptr [0x58894480]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 254h], 1
        push 80h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F 8C 2B 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x8c
        __asm _emit 0x2b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 190h
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        neg eax
        add eax, 12ch
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1d0h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes A1 94 20 96 58: mov eax, dword ptr [0x58962094]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8E 12 07 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x12
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 F7 F8 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1e0h]
        ; Exact mapped bytes E8 E3 8D F9 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6C FC FF FF: call 0x584fc5c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cdq
        sub eax, edx
        sar eax, 1
        sub esi, eax
        sub esi, 0ah
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 A0 F8 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xa0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1e0h]
        ; Exact mapped bytes E8 B4 8D F9 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5D FC FF FF: call 0x584fc5e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cdq
        sub eax, edx
        sar eax, 1
        sub esi, eax
        mov dword ptr [ebp - 14h], esi
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes 8B 0D D0 70 94 58: mov ecx, dword ptr [0x589470d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 8C 2B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x8c
        __asm _emit 0x2b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        lea eax, [ecx + edx + 5890bfd0h]
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [eax + ecx + 0cch]
        push edx
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 80 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x80
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 5E: mov cx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        lea edx, [eax + ecx + 5890bfd0h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx + 0cch]
        push edx
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 80 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes 8B 0D D0 70 94 58: mov ecx, dword ptr [0x589470d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2B 2D 00 00: call 0x584ff780
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 70 94 58: mov eax, dword ptr [0x589470d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A 23 FB FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x23
        __asm _emit 0xfb
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D 21 00 00: call 0x584feb90
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 A6 FD FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BB FC FF FF: call 0x584fc740
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1e4h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 5E: mov cx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        lea edx, [eax + ecx + 5890bfd0h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx + 0cch]
        add edx, 1
        push edx
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 7F F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x7f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 60 A1 F8 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1e0h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 5E: mov cx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        lea edx, [eax + ecx + 5890bfd0h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx + 0cch]
        push edx
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 7F F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x7f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F8 A0 F8 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1e4h]
        ; Exact mapped bytes E8 0A 90 FB FF: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1e0h]
        ; Exact mapped bytes E8 FC 8F FB FF: call 0x584b5b80
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D2 91 F8 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
