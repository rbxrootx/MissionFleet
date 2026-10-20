// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F30D0 .. +0x1EA bytes.
extern "C" __declspec(naked) void FUN_584f30d0_584F30D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 64h
        ; Exact mapped bytes E8 BB 1D 00 00: call 0x584f4ea0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        mov ecx, 32h
        div ecx
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0ah
        ; Exact mapped bytes 73 07: jae 0x584f3101
        __asm _emit 0x73
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0ah
        mov edx, dword ptr [ebp - 0ch]
        add edx, 64h
        mov dword ptr [ebp - 1ch], edx
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6A 4F F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x4f
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 64h
        ; Exact mapped bytes E8 7E 1D 00 00: call 0x584f4ea0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx], eax
        ; Exact mapped bytes 73 11: jae 0x584f313a
        __asm _emit 0x73
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 D9 EC FF FF: call 0x584f1e10
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x584f3143
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        ; Exact mapped bytes EB 0F: jmp 0x584f3154
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 2ch]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 DD 5E F9 FF: call 0x58489030
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5e
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        add eax, 64h
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 27 50 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x50
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 5E 48 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 34 01 00 00: je 0x584f32b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 86 2A 01 00 00: jbe 0x584f32b1
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A4 48 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 0D A0 F9 FF: call 0x5848d1b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 F8 00 00 00: jne 0x584f32a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 8D 48 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F 8D F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2C F6 FF FF: call 0x584f2800
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x584f32a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 8C F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D4 37 F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x37
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 4A 48 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 E3 9E F9 FF: call 0x5848d0e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x9e
        __asm _emit 0xf9
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 14h], esi
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D6 8C F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9F 8E F9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x8e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 25 48 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 DE 9E F9 FF: call 0x5848d100
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x9e
        __asm _emit 0xf9
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 18h], esi
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584f3239
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 64: jge 0x584f32a3
        __asm _emit 0x7d
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C5 FC FF FF: call 0x584f2f10
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        cmp edx, 2
        ; Exact mapped bytes 75 4E: jne 0x584f32a1
        __asm _emit 0x75
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 FC FF FF: call 0x584f2eb0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 76 3D: jbe 0x584f32a1
        __asm _emit 0x76
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 40 FC FF FF: call 0x584f2eb0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 76 2C: jbe 0x584f32a1
        __asm _emit 0x76
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4F FC FF FF: call 0x584f2ed0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        imul ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 18h]
        imul edx, dword ptr [ebp - 18h]
        add ecx, edx
        cmp eax, ecx
        ; Exact mapped bytes 76 0C: jbe 0x584f32a1
        __asm _emit 0x76
        __asm _emit 0x0c
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A3 47 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x47
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 12: jmp 0x584f32b3
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes EB 8D: jmp 0x584f3230
        __asm _emit 0xeb
        __asm _emit 0x8d
        mov eax, dword ptr [ebp - 10h]
        sub eax, 1
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 94 FE FF FF: jmp 0x584f3145
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
