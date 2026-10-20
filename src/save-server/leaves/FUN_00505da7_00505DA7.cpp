// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00505DA7 .. +0x339 bytes.
extern "C" __declspec(naked) void FUN_00505da7_00505DA7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0c4h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0c4h], ecx
        push 0f8h
        push 677edch
        mov eax, dword ptr [ebp - 0c4h]
        mov ecx, dword ptr [eax + 68h]
        push ecx
        ; Exact mapped bytes E8 8E 44 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x44
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0c4h]
        mov eax, dword ptr [edx + 68h]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x505df9
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f9h
        push 677edch
        ; Exact mapped bytes E8 4C 2F 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x505df9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x505dd2
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp - 0c4h]
        mov dword ptr [eax + 88h], 0
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 56 07 00 00: call 0x506570
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c4h]
        mov ecx, dword ptr [ecx + 84h]
        ; Exact mapped bytes E8 CE 19 FE FF: call 0x4e77f9
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x19
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x505e45
        __asm _emit 0x74
        __asm _emit 0x13
        push 0
        mov edx, dword ptr [ebp - 0c4h]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 58 1A FE FF: call 0x4e789d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1a
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 7A C3 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 6D C5 02 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 0c4h]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes E8 AB 5C 02 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c4h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 8], eax
        mov ecx, dword ptr [ebp - 0c4h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8ch], edx
        push 6
        push 0
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        mov ecx, dword ptr [ecx + 68h]
        mov edx, dword ptr [ebp - 0c4h]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 4B C4 02 00: call 0x53230e
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 38h], ecx
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 66 C3 02 00: call 0x532244
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0c4h]
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
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 F5 C3 02 00: call 0x53230e
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 58h], edx
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 10 C3 02 00: call 0x532244
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c4h]
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
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 9F C3 02 00: call 0x53230e
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 78h], edx
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 BA C2 02 00: call 0x532244
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c4h]
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
        mov ecx, dword ptr [ebp - 0c4h]
        add ecx, 48h
        push ecx
        ; Exact mapped bytes E8 8F 8B 01 00: call 0x51eb4e
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 6D 68 00: mov edx, dword ptr [0x686dc4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg edx
        push edx
        ; Exact mapped bytes A1 C0 6D 68 00: mov eax, dword ptr [0x686dc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        add ecx, 48h
        ; Exact mapped bytes E8 10 C5 02 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 0a8h]
        push ecx
        mov ecx, dword ptr [ebp - 0c4h]
        add ecx, 38h
        ; Exact mapped bytes E8 EA C2 02 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 0a0h], edx
        mov dword ptr [ebp - 9ch], eax
        mov ecx, dword ptr [ebp - 9ch]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        lea eax, [ebp - 0b0h]
        push eax
        lea ecx, [ebp - 98h]
        push ecx
        mov ecx, dword ptr [ebp - 0c4h]
        add ecx, 48h
        ; Exact mapped bytes E8 AF C2 02 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F1 BC 02 00: call 0x531d26
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xbc
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 90h], edx
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 8ch]
        push ecx
        mov edx, dword ptr [ebp - 90h]
        push edx
        push 0
        push 0
        lea ecx, [ebp - 0c0h]
        ; Exact mapped bytes E8 F9 BD 02 00: call 0x531e5c
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0b8h], ecx
        mov dword ptr [ebp - 0b4h], edx
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 0b8h]
        push ecx
        lea ecx, [ebp - 88h]
        ; Exact mapped bytes E8 B7 C1 02 00: call 0x532244
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0c4h]
        add edx, 58h
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [ecx + 74h], 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 14 00 00 00: call 0x5060e0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 DA 0C 00 00: call 0x506db1
        __asm _emit 0xe8
        __asm _emit 0xda
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
