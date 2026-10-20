// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F6130 .. +0x4FB bytes.
extern "C" __declspec(naked) void FUN_586f6130_586F6130() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 E0 04 00 00: jne 0x586f6623
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 250h]
        ; Exact mapped bytes 75 13: jne 0x586f6164
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 BF 04 00 00: jmp 0x586f6623
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 24ch]
        ; Exact mapped bytes 75 58: jne 0x586f61ca
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 56 22 00 00: call 0x586f83d0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 2A: jne 0x586f61a9
        __asm _emit 0x75
        __asm _emit 0x2a
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 37 27 00 00: call 0x586f88c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5F 41 00 00: call 0x586fa2f0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 77 3B 00 00: call 0x586f9d10
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586f61c5
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 42 10 DE FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x10
        __asm _emit 0xde
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push 28ah
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AC 2B DE FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x2b
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 59 04 00 00: jmp 0x586f6623
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 248h]
        ; Exact mapped bytes 75 16: jne 0x586f61ee
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 22 00 00: call 0x586f8480
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 14 00 00: call 0x586f7660
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 35 04 00 00: jmp 0x586f6623
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 360h]
        ; Exact mapped bytes 75 26: jne 0x586f6222
        __asm _emit 0x75
        __asm _emit 0x26
        push 4
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 2B DE FF: call 0x584d8d50
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x2b
        __asm _emit 0xde
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 4C 06 96 58: mov ecx, dword ptr [0x5896064c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 01 04 00 00: jmp 0x586f6623
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 8ch]
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x586f6301
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 36ch], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 94h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 80 FC D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfc
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 94h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 61 FC D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfc
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 9ch]
        mov dword ptr [ebp - 18h], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 42 FC D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfc
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 9ch]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 23 FC D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xfc
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 20h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B4 FC D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 95 FC D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 22 03 00 00: jmp 0x586f6623
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 90h]
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x586f63e0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 36ch], 1
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 94h]
        mov dword ptr [ebp - 28h], ecx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A1 FB D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfb
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 94h]
        mov dword ptr [ebp - 2ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 82 FB D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfb
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 9ch]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 63 FB D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfb
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 9ch]
        mov dword ptr [ebp - 34h], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 44 FB D8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xfb
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 38h], eax
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D5 FB D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfb
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 84h]
        mov dword ptr [ebp - 3ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 B6 FB D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfb
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 43 02 00 00: jmp 0x586f6623
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586f63f2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 1fh
        ; Exact mapped bytes 0F 8D CA 00 00 00: jge 0x586f64c6
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx*4 + 264h]
        ; Exact mapped bytes 75 45: jne 0x586f6453
        __asm _emit 0x75
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 264h]
        mov dword ptr [ebp - 40h], ecx
        push 5
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 18 94 DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x94
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 2e0h]
        mov dword ptr [ebp - 44h], ecx
        push 588b3225h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 5B FC D8 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xfc
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 35ch], eax
        ; Exact mapped bytes EB 6E: jmp 0x586f64c1
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 264h]
        mov dword ptr [ebp - 48h], eax
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 D3 93 DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x93
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 2e0h]
        ; Exact mapped bytes E8 60 3D DB FF: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x3d
        __asm _emit 0xdb
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 36: jne 0x586f64c1
        __asm _emit 0x75
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 2e0h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1cch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6F 0F 00 00: call 0x586f7420
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 E0 FB D8 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfb
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 23 FF FF FF: jmp 0x586f63e9
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes 75 23: jne 0x586f64f7
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 DE E4 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe4
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 0B: jne 0x586f64f2
        __asm _emit 0x75
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BF F5 FF FF: call 0x586f5ab0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2C 01 00 00: jmp 0x586f6623
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0cch]
        ; Exact mapped bytes 75 23: jne 0x586f6528
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        ; Exact mapped bytes E8 AD E4 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe4
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 0B: jne 0x586f6523
        __asm _emit 0x75
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4E F9 FF FF: call 0x586f5e70
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 FB 00 00 00: jmp 0x586f6623
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0d0h]
        ; Exact mapped bytes 75 23: jne 0x586f6559
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        ; Exact mapped bytes E8 7C E4 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xe4
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 0B: jne 0x586f6554
        __asm _emit 0x75
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D F7 FF FF: call 0x586f5c90
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x586f6623
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 110h]
        ; Exact mapped bytes 75 58: jne 0x586f65bf
        __asm _emit 0x75
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 4B E4 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe4
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 19: jne 0x586f6593
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 114h]
        mov dword ptr [ebp - 54h], edx
        push 2
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 B0 92 DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x92
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2A: jmp 0x586f65bd
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 1F E4 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe4
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 17: jne 0x586f65bd
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 110h]
        mov dword ptr [ebp - 58h], edx
        push 3
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 84 92 DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 64: jmp 0x586f6623
        __asm _emit 0xeb
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes 75 56: jne 0x586f6623
        __asm _emit 0x75
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 E5 E3 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe3
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 3
        ; Exact mapped bytes 75 19: jne 0x586f65f9
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110h]
        mov dword ptr [ebp - 5ch], ecx
        push 2
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 4A 92 DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x92
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2A: jmp 0x586f6623
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 114h]
        ; Exact mapped bytes E8 B9 E3 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xe3
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 75 17: jne 0x586f6623
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114h]
        mov dword ptr [ebp - 60h], ecx
        push 3
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 1E 92 DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x92
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
