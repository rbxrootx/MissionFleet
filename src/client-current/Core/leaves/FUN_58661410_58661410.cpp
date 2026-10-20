// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58661410 .. +0x364 bytes.
extern "C" __declspec(naked) void FUN_58661410_58661410() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 58h], 0d2h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 100h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 01: or dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 04: or dx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 02: or dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        xor ecx, ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 80 01 00 00: mov word ptr [edx + 0x180], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 6ch]
        mov dword ptr [ebp - 14h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0E 41 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x41
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 74h]
        mov dword ptr [ebp - 18h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 EF 40 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x40
        __asm _emit 0x15
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 74h]
        mov dword ptr [ebp - 1ch], ecx
        push 101h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D0 40 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x40
        __asm _emit 0x15
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c4h]
        mov dword ptr [ebp - 20h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AE 40 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x40
        __asm _emit 0x15
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c4h]
        mov dword ptr [ebp - 24h], edx
        push 101h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 8C 40 15 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x40
        __asm _emit 0x15
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F4 18 00 00: call 0x58662e20
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C 11 00 00: call 0x58662670
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 46 4A E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x4a
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cch]
        mov dword ptr [ebp - 2ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 30 4A E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x4a
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 1A 4A E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x4a
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58661589
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 1D: jge 0x586615ac
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0c4h]
        mov dword ptr [ebp - 34h], eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 37 49 E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x49
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x58661580
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 2C 06 96 58: cmp ecx, dword ptr [0x5896062c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 28: jne 0x586615e2
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 5A E7 FF: call 0x584d7050
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x5a
        __asm _emit 0xe7
        __asm _emit 0xff
        and eax, 0f00000h
        cmp eax, 100000h
        ; Exact mapped bytes 75 11: jne 0x586615e2
        __asm _emit 0x75
        __asm _emit 0x11
        push 220000h
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F F9 07 00: call 0x586e0ef0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf9
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 10 06 96 58: cmp edx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 19: jne 0x58661609
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 DA 48 E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x48
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x58661620
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 3ch], eax
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 C1 48 E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x48
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 34 E2 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 40h], ecx
        push 0
        push 64h
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        nop
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 14 06 96 58: cmp eax, dword ptr [0x58960614]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 19: jne 0x58661670
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE C8 06 00: call 0x586cdf50
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xc8
        __asm _emit 0x06
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 E3 F1 FF: call 0x5857fa20
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe3
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        mov ecx, 0fah
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 82 01 00 00: mov word ptr [edx + 0x182], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 184h], 0
        mov ecx, 1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A 82 01 00 00: mov word ptr [edx + 0x182], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 108h]
        mov dword ptr [ebp - 44h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 DF 48 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x48
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10ch]
        mov dword ptr [ebp - 48h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 C9 48 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x48
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586616da
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 37: jge 0x58661717
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 110h]
        mov dword ptr [ebp - 4ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 96 48 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x48
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 120h]
        mov dword ptr [ebp - 50h], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 7C 48 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x48
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x586616d1
        __asm _emit 0xeb
        __asm _emit 0xba
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        mov dword ptr [ebp - 54h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 63 48 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x48
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 58h], edx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 4D 48 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x48
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 100h]
        mov dword ptr [ebp - 5ch], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 37 48 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x48
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        mov dword ptr [ebp - 60h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 21 48 E2 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
