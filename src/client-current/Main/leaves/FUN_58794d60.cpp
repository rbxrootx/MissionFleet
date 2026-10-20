// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58794D60 .. +0x2C8 bytes.
extern "C" __declspec(naked) void FUN_58794d60() {
    __asm {
        push -1
        push 58980506h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 14h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 83 02 00 00: je 0x58795015
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 54h]
        mov ebx, dword ptr [esi + 60h]
        mov eax, edi
        cdq
        mov ecx, eax
        xor ecx, edx
        sub ecx, edx
        mov eax, ebx
        cdq
        xor eax, edx
        sub eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 7E 0A: jle 0x58794db6
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, edi
        sub eax, ebx
        add dword ptr [esi + 68h], eax
        mov dword ptr [esi + 54h], eax
        mov edi, dword ptr [esi + 58h]
        mov ebx, dword ptr [esi + 64h]
        mov eax, edi
        cdq
        mov ecx, eax
        xor ecx, edx
        sub ecx, edx
        mov eax, ebx
        cdq
        xor eax, edx
        sub eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 7E 0A: jle 0x58794dda
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, edi
        sub eax, ebx
        add dword ptr [esi + 6ch], eax
        mov dword ptr [esi + 58h], eax
        add dword ptr [esi + 5ch], -14h
        mov eax, dword ptr [esi + 5ch]
        add dword ptr [esi + 70h], eax
        mov eax, dword ptr [esi + 70h]
        mov ecx, dword ptr [esi + 6ch]
        sub ecx, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 68h]
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 76 E4 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe4
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 8]
        lea ebx, [esi + 94h]
        lea edi, [esi + 8ch]
        mov dword ptr [edi], eax
        mov dword ptr [esi + 90h], ecx
        cmp eax, dword ptr [ebx]
        ; Exact mapped bytes 75 08: jne 0x58794e40
        __asm _emit 0x75
        __asm _emit 0x08
        cmp ecx, dword ptr [esi + 98h]
        ; Exact mapped bytes 74 09: je 0x58794e49
        __asm _emit 0x74
        __asm _emit 0x09
        push edi
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 87 FC FF FF: call 0x58794ad0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 70h], 0
        mov ecx, dword ptr [edi]
        mov edx, dword ptr [esi + 90h]
        mov dword ptr [ebx], ecx
        mov dword ptr [esi + 98h], edx
        ; Exact mapped bytes 0F 8D B2 01 00 00: jge 0x58795015
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0fff0h
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 0ch]
        test edi, edi
        ; Exact mapped bytes 74 31: je 0x58794eaa
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 59 18 14 00: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x18
        __asm _emit 0x14
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 15: jne 0x58794ea3
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        push 0
        push edx
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 C1 1A 14 00: call 0x588d6960
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x1a
        __asm _emit 0x14
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 70: jne 0x58794f13
        __asm _emit 0x75
        __asm _emit 0x70
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 75 D6: jne 0x58794e80
        __asm _emit 0x75
        __asm _emit 0xd6
        push 58h
        ; Exact mapped bytes E8 9D 7D 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7d
        __asm _emit 0x1e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 10h], edi
        mov dword ptr [esp + 1ch], 1
        test edi, edi
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x58794fc4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 67 7D 1E 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x7d
        __asm _emit 0x1e
        __asm _emit 0x00
        and eax, 80000001h
        ; Exact mapped bytes 79 05: jns 0x58794edb
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffeh
        inc eax
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 18h
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 0F 8E AC 00 00 00: jle 0x58794f9c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C A4 00 00 00: jl 0x58794f9c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x58794f9c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x58794f9e
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 58h
        ; Exact mapped bytes E8 34 7D 1E 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x7d
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 1ch], 0
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x58794f7b
        __asm _emit 0x74
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D F4 46 A2 58: mov ecx, dword ptr [0x58a246f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 14h
        ; Exact mapped bytes 7E 17: jle 0x58794f53
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x58794f53
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 500h
        ; Exact mapped bytes EB 02: jmp 0x58794f55
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 10524h]
        mov ecx, dword ptr [esi + 8]
        push 1388h
        push ecx
        mov ecx, dword ptr [esi + 4]
        push ecx
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 09 2D 17 00: call 0x58907c80
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x2d
        __asm _emit 0x17
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58794f7d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 102h
        mov ecx, edi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 8F DD 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xdd
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, 1388h
        ; Exact mapped bytes 66 89 57 26: mov word ptr [edi + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x26
        ; Exact mapped bytes EB 47: jmp 0x58794fe3
        __asm _emit 0xeb
        __asm _emit 0x47
        xor eax, eax
        mov edx, dword ptr [esi + 8]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 10524h]
        push 1388h
        push edx
        mov edx, dword ptr [esi + 4]
        push edx
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 C0 2C 17 00: call 0x58907c80
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x2c
        __asm _emit 0x17
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x58794fc6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 102h
        mov ecx, edi
        mov dword ptr [esp + 20h], 0ffffffffh
        ; Exact mapped bytes E8 46 DD 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xdd
        __asm _emit 0x16
        __asm _emit 0x00
        mov eax, 1388h
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        mov ecx, dword ptr [edi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58794ff0
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 60 DF 16 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xdf
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x58794ffd
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 E3 DE 16 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xde
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 1C DC 16 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xdc
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 65 DC 16 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xdc
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 14h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        add esp, 10h
        ret
    }
}
