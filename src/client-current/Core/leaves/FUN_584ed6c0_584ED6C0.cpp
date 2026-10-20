// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584ED6C0 .. +0x3F2 bytes.
extern "C" __declspec(naked) void FUN_584ed6c0_584ED6C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0b4h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov al, byte ptr [ebp + 8]
        mov byte ptr [ebp - 0ch], al
        cmp byte ptr [ebp - 0ch], 1
        ; Exact mapped bytes 74 19: je 0x584ed6f8
        __asm _emit 0x74
        __asm _emit 0x19
        cmp byte ptr [ebp - 0ch], 2
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x584ed7c0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [ebp - 0ch], 3
        ; Exact mapped bytes 0F 84 C1 01 00 00: je 0x584ed8b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E3 02 00 00: jmp 0x584ed9db
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 14h], edx
        push 588a225ch
        ; Exact mapped bytes E8 E5 48 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 63 F0 FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 1ch], edx
        push 588a2284h
        ; Exact mapped bytes E8 C0 48 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3E F0 FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 24h], edx
        push 588a22a4h
        ; Exact mapped bytes E8 9B 48 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 19 F0 FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [ebp - 2ch], edx
        push 588a22c4h
        ; Exact mapped bytes E8 76 48 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F4 EF FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 34h], edx
        push 588a22e4h
        ; Exact mapped bytes E8 4E 48 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 CC EF FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes E9 E9 02 00 00: jmp 0x584edaa9
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 3ch], edx
        push 588a2310h
        ; Exact mapped bytes E8 1D 48 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 9B EF FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 44h], edx
        push 588a2338h
        ; Exact mapped bytes E8 F8 47 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 76 EF FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 4ch], edx
        push 588a2358h
        ; Exact mapped bytes E8 D3 47 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 51 EF FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 54h], edx
        push 588a2374h
        ; Exact mapped bytes E8 AE 47 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 2C EF FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 58h], edx
        push 588a2394h
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 16 EF FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 60h], ecx
        push 588a2398h
        ; Exact mapped bytes E8 73 47 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 5ch], eax
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 F1 EE FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 64h], ecx
        push 588a23b8h
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 D8 EE FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes E9 F5 01 00 00: jmp 0x584edaa9
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 6ch], eax
        push 588a23bch
        ; Exact mapped bytes E8 29 47 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 68h], eax
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 A7 EE FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 74h], eax
        push 588a23e4h
        ; Exact mapped bytes E8 04 47 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x47
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 82 EE FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 7ch], eax
        push 588a2404h
        ; Exact mapped bytes E8 DF 46 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 5D EE FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 84h], eax
        push 588a2420h
        ; Exact mapped bytes E8 B7 46 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 80h], eax
        mov ecx, dword ptr [ebp - 80h]
        push ecx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 32 EE FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 8ch], eax
        push 588a2440h
        ; Exact mapped bytes E8 8C 46 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 88h], eax
        mov ecx, dword ptr [ebp - 88h]
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 01 EE FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 94h], eax
        push 588a245ch
        ; Exact mapped bytes E8 5B 46 03 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x46
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 D0 ED FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 98h], eax
        push 588a247ch
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 B1 ED FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x584edaa9
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 9ch], edx
        push 588a2480h
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 89 ED FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 0a0h], ecx
        push 588a2484h
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 6D ED FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0a4h], eax
        push 588a2488h
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 51 ED FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 0a8h], edx
        push 588a248ch
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 35 ED FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 0ach], ecx
        push 588a2490h
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 19 ED FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 0b0h], eax
        push 588a2494h
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 FD EC FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 0b4h], edx
        push 588a2498h
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 DE EC FF FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
