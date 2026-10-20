// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00509B96 .. +0x22D bytes.
extern "C" __declspec(naked) void FUN_00509b96_00509B96() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 58h], ecx
        mov eax, dword ptr [ebp - 58h]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 75 14: jne 0x509bbf
        __asm _emit 0x75
        __asm _emit 0x14
        push 18ah
        push 5cb450h
        ; Exact mapped bytes E8 46 AE 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x509bbf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x509ba2
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 84 C1 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 95 C3 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 D1 24 03 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 6A C3 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 58h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 4ch]
        sub eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, eax
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 48h]
        sub edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 48h]
        add eax, edx
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 44h]
        sub edx, ecx
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 40h]
        sub ecx, eax
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 48h]
        neg edx
        push edx
        mov eax, dword ptr [ebp - 4ch]
        neg eax
        push eax
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 C2 C4 02 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 75 06: jne 0x509c64
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 14: je 0x509c78
        __asm _emit 0x74
        __asm _emit 0x14
        push 196h
        push 5cb450h
        ; Exact mapped bytes E8 8D AD 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x509c78
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x509c58
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx + 50h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 4ch]
        push edx
        push 0
        push 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 C7 C0 02 00: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x509cc0
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 44h]
        cmp ecx, dword ptr [eax + 4ch]
        ; Exact mapped bytes 7F 06: jg 0x509caf
        __asm _emit 0x7f
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 40h]
        cmp ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes 7F 06: jg 0x509cc0
        __asm _emit 0x7f
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 30h], edx
        push 1
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 A0 C2 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 58h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 38h]
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        neg ecx
        push ecx
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 30 C4 02 00: call 0x53611a
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 75 06: jne 0x509cf6
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 14: je 0x509d0a
        __asm _emit 0x74
        __asm _emit 0x14
        push 1a3h
        push 5cb450h
        ; Exact mapped bytes E8 FB AC 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x509d0a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x509cea
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 22: je 0x509d38
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 44h]
        cmp ecx, dword ptr [eax + 4ch]
        ; Exact mapped bytes 7F 06: jg 0x509d27
        __asm _emit 0x7f
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 40h]
        cmp ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes 7F 06: jg 0x509d38
        __asm _emit 0x7f
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 30h], edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 11 C0 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 FA AD FE FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 1afh
        push 5cb450h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 02 14 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 04 C2 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 40 23 03 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 54h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 EC C0 02 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 34h]
        sub ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 8]
        add edx, ecx
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 30h]
        sub eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 4]
        add ecx, eax
        mov dword ptr [ebp - 4], ecx
        push 16h
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D6 54 FE FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
