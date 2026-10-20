// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051CBF1 .. +0x344 bytes.
extern "C" __declspec(naked) void FUN_0051cbf1_0051CBF1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0cch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0cch], ecx
        push 0f8h
        push 5cb704h
        mov eax, dword ptr [ebp - 0cch]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        ; Exact mapped bytes E8 44 E5 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0cch]
        mov eax, dword ptr [edx + 68h]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x51cc43
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f9h
        push 5cb704h
        ; Exact mapped bytes E8 C2 7D 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51cc43
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x51cc1c
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 0cch]
        mov dword ptr [eax + 88h], 0
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 6F 07 00 00: call 0x51d3d3
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0cch]
        mov ecx, dword ptr [ecx + 84h]
        ; Exact mapped bytes E8 A4 5B FE FF: call 0x502819
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x5b
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x51cc8f
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov edx, dword ptr [ebp - 0cch]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 2E 5C FE FF: call 0x5028bd
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 BA 90 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CB 92 01 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 0cch]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes E8 01 F4 01 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0cch]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [ebp - 0cch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8ch], edx
        push 6
        push 0
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        mov ecx, dword ptr [ecx + 68h]
        mov edx, dword ptr [ebp - 0cch]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 8F 91 01 00: call 0x535ea7
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 9B 90 01 00: call 0x535dce
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0cch]
        add edx, 28h
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 39 91 01 00: call 0x535ea7
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 60h], edx
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 45 90 01 00: call 0x535dce
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0cch]
        add ecx, 38h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 E3 90 01 00: call 0x535ea7
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 80h], edx
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        mov edx, dword ptr [ebp - 80h]
        push edx
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 EF 8F 01 00: call 0x535dce
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0cch]
        add ecx, 48h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        push 0
        push 0c40000h
        mov ecx, dword ptr [ebp - 0cch]
        add ecx, 48h
        push ecx
        ; Exact mapped bytes E8 39 2B 01 00: call 0x52f94d
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 AC E8 5D 00: mov edx, dword ptr [0x5de8ac]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg edx
        push edx
        ; Exact mapped bytes A1 A8 E8 5D 00: mov eax, dword ptr [0x5de8a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        add ecx, 48h
        ; Exact mapped bytes E8 63 92 01 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 0b0h]
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        add ecx, 38h
        ; Exact mapped bytes E8 1F 90 01 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 0a8h], edx
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        lea eax, [ebp - 0b8h]
        push eax
        lea ecx, [ebp - 0a0h]
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        add ecx, 48h
        ; Exact mapped bytes E8 E4 8F 01 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3B 89 01 00: call 0x5357c5
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 98h], edx
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 94h]
        push ecx
        mov edx, dword ptr [ebp - 98h]
        push edx
        push 0
        push 0
        lea ecx, [ebp - 0c8h]
        ; Exact mapped bytes E8 B1 8A 01 00: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0c0h], ecx
        mov dword ptr [ebp - 0bch], edx
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 EC 8E 01 00: call 0x535dce
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0cch]
        add edx, 58h
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 0cch]
        mov dword ptr [ecx + 74h], 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 14 00 00 00: call 0x51cf35
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 E8 0C 00 00: call 0x51dc14
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
