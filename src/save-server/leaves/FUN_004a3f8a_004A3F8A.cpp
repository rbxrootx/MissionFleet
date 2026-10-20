// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A3F8A .. +0x21D bytes.
extern "C" __declspec(naked) void FUN_004a3f8a_004A3F8A() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d351h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 90h]
        and ecx, 80000h
        test ecx, ecx
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x4a40d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x4a40d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a3ffb
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b5h
        push 674ab0h
        ; Exact mapped bytes E8 4A 4D 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x4d
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a3ffb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4a3fd6
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 FE 0C 08 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x0c
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 104h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 7B 90 02 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 104h
        push 464h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 69 8A 08 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x8a
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 02 76 08 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x76
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0A: jge 0x4a4045
        __asm _emit 0x7d
        __asm _emit 0x0a
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0F 87 02 00: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 60: jmp 0x4a40a5
        __asm _emit 0xeb
        __asm _emit 0x60
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 84 91 02 00: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        push 2eh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 81 D2 FF FF: call 0x4a12da
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7C 3B: jl 0x4a409d
        __asm _emit 0x7c
        __asm _emit 0x3b
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F6 0C 08 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x0c
        __asm _emit 0x08
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 14h]
        sub eax, 1
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0E D0 FF FF: call 0x4a108b
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        or ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 57 88 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x4a4194
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 AD 86 02 00: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 69 84 02 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        or al, 1
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 24 88 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x4a4194
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 1f4h], 0
        ; Exact mapped bytes 74 65: je 0x4a4141
        __asm _emit 0x74
        __asm _emit 0x65
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 1f4h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 3A: mov cx, word ptr [eax + 0x3a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x3a
        test ecx, ecx
        ; Exact mapped bytes 75 1E: jne 0x4a410d
        __asm _emit 0x75
        __asm _emit 0x1e
        push 68510ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7C 88 02 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        or edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x4a4194
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 1f4h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 1f4h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 3A: mov dx, word ptr [eax + 0x3a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x3a
        mov eax, dword ptr [ecx + 1ch]
        add eax, edx
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 45 88 02 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        or ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 53: jmp 0x4a4194
        __asm _emit 0xeb
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 1ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 96 00 00 00: mov ax, word ptr [edx + 0x96]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x4a416c
        __asm _emit 0x75
        __asm _emit 0x1b
        push 68510ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A 88 02 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        or ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 28: jmp 0x4a4194
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 1ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 96 00 00 00: mov ax, word ptr [edx + 0x96]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 78h]
        add edx, eax
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EF 87 02 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        or al, 1
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
