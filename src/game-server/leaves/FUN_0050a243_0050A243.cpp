// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050A243 .. +0x23C bytes.
extern "C" __declspec(naked) void FUN_0050a243_0050A243() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 78h], ecx
        mov eax, dword ptr [ebp - 78h]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 05: je 0x50a25d
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 1B 02 00 00: jmp 0x50a478
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ecx + 68h], 1
        mov edx, dword ptr [ebp - 78h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 7C 09: jl 0x50a279
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 78h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 7D 14: jge 0x50a28d
        __asm _emit 0x7d
        __asm _emit 0x14
        push 264h
        push 5cb450h
        ; Exact mapped bytes E8 78 A7 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50a28d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x50a267
        __asm _emit 0x75
        __asm _emit 0xd4
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 B6 BA 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 8F 2D 03 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 1E: je 0x50a2d1
        __asm _emit 0x74
        __asm _emit 0x1e
        lea edx, [ebp - 5ch]
        push edx
        push 0
        push 368h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 13 19 03 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x19
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x50a2d1
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 59 B3 02 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 51 B3 02 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb3
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 51: je 0x50a338
        __asm _emit 0x74
        __asm _emit 0x51
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 E6 FC FF FF: call 0x509fdd
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 3B: jne 0x50a336
        __asm _emit 0x75
        __asm _emit 0x3b
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 4E BA 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xba
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 6ch]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 EC 1D 03 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x1d
        __asm _emit 0x03
        __asm _emit 0x00
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 7E 12: jle 0x50a327
        __asm _emit 0x7e
        __asm _emit 0x12
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 7E 0C: jle 0x50a327
        __asm _emit 0x7e
        __asm _emit 0x0c
        push 0
        push 3
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 71 AE FE FF: call 0x4f5198
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [eax + 68h], 0
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x50a478
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x50a356
        __asm _emit 0xeb
        __asm _emit 0x1e
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 FE FB FF FF: call 0x509f42
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 54h]
        sub edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 50h]
        sub eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 D4 B2 02 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F5 B5 02 00: call 0x53595b
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 C4 B2 02 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        lea eax, [ebp - 4ch]
        push eax
        lea ecx, [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 3F FD FF FF: call 0x50a0cd
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 09: je 0x50a39d
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 09: je 0x50a3ac
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        sub edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 47 F6 FF FF: call 0x509a0f
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], 3
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 B4 AD FE FF: call 0x4f5198
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 38: je 0x50a422
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 4ch]
        sub ecx, 1
        mov dword ptr [ebp - 28h], ecx
        push 1
        lea edx, [ebp - 34h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 F5 AD FE FF: call 0x4f5201
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x50a422
        __asm _emit 0x75
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 4ch]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 CA AC FE FF: call 0x4f50ec
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 68 AD FE FF: call 0x4f5198
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 38: je 0x50a46e
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax + 50h]
        sub ecx, 1
        mov dword ptr [ebp - 28h], ecx
        push 1
        lea edx, [ebp - 34h]
        push edx
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 A9 AD FE FF: call 0x4f5201
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x50a46e
        __asm _emit 0x75
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 48h]
        push eax
        push 0
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 7E AC FE FF: call 0x4f50ec
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [ecx + 68h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
