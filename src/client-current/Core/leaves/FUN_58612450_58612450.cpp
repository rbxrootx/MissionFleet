// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58612450 .. +0x25D bytes.
extern "C" __declspec(naked) void FUN_58612450_58612450() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 25 E7 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x25
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        mov dword ptr [ebp - 0ch], ecx
        push 0d74h
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 0B A4 23 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa4
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 194h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 CD 75 F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x75
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 17ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 9D 25 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x25
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 40 40: mov ax, word ptr [eax + 0x40]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x40
        ; Exact mapped bytes 66 89 84 11 8C 01 00 00: mov word ptr [ecx + edx + 0x18c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 A8 0F F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x0f
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 17ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 58 25 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x25
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 40 42: mov ax, word ptr [eax + 0x42]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x42
        ; Exact mapped bytes 66 89 84 0A 8C 01 00 00: mov word ptr [edx + ecx + 0x18c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 83 01 FC FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 17ch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 14 25 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x25
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 2
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 40 46: mov ax, word ptr [eax + 0x46]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x46
        ; Exact mapped bytes 66 89 84 0A 8C 01 00 00: mov word ptr [edx + ecx + 0x18c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 60 01 FC FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, 4
        imul ecx, edx, 3
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 17ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 D0 24 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x24
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 40 44: mov ax, word ptr [eax + 0x44]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x44
        ; Exact mapped bytes 66 89 84 11 8C 01 00 00: mov word ptr [ecx + edx + 0x18c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e8h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 16 24 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x24
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 120h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B0 8B 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x8b
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e8h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 DD 23 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x23
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 11eh]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 77 8B 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x8b
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e8h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 A5 23 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x23
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 124h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 3F 8B 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x8b
        __asm _emit 0x1a
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0e8h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 6C 23 E7 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x23
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 122h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 06 8B 1A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x8b
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE C3 FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 16ch]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 38 37 E7 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x37
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
