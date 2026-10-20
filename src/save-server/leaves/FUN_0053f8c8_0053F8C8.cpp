// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053F8C8 .. +0x29B bytes.
extern "C" __declspec(naked) void FUN_0053f8c8_0053F8C8() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cc49h
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
        mov eax, 1020h
        ; Exact mapped bytes E8 B6 66 F2 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x66
        __asm _emit 0xf2
        __asm _emit 0xff
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 102ch], ecx
        mov dword ptr [ebp - 1028h], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x53f917
        __asm _emit 0x75
        __asm _emit 0x14
        push 8ch
        push 6739a4h
        ; Exact mapped bytes E8 2E 94 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53f917
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x53f8fd
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x53f937
        __asm _emit 0x75
        __asm _emit 0x14
        push 8dh
        push 6739a4h
        ; Exact mapped bytes E8 0E 94 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53f937
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x53f91d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 102ch]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 0F 84 52 01 00 00: je 0x53faa2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 102ch]
        ; Exact mapped bytes E8 B3 FD FF FF: call 0x53f712
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 23: jne 0x53f98b
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 D0 F8 FF: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1028h]
        or edx, 1
        mov dword ptr [ebp - 1028h], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 C5 01 00 00: jmp 0x53fb50
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 74 53 FE FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 18h]
        push eax
        push 0
        lea ecx, [ebp - 14h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 9C B2 68 00: call dword ptr [0x68b29c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 52: jne 0x53fa0f
        __asm _emit 0x75
        __asm _emit 0x52
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 74 14: je 0x53f9d7
        __asm _emit 0x74
        __asm _emit 0x14
        push 99h
        push 6739a4h
        ; Exact mapped bytes E8 6E 93 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53f9d7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x53f9bd
        __asm _emit 0x75
        __asm _emit 0xe0
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 AB D6 F8 FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xd6
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 9C B2 68 00: call dword ptr [0x68b29c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        push -1
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C4 D7 F8 FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xd7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 52: jne 0x53fa71
        __asm _emit 0x75
        __asm _emit 0x52
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 74 14: je 0x53fa39
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a1h
        push 6739a4h
        ; Exact mapped bytes E8 0C 93 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53fa39
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x53fa1f
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CF CA F8 FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xca
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1028h]
        or ecx, 1
        mov dword ptr [ebp - 1028h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 83 CE F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xce
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 DF 00 00 00: jmp 0x53fb50
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB CE F8 FF: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xce
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1028h]
        or al, 1
        mov dword ptr [ebp - 1028h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 52 CE F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xce
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x53fb50
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 102ch]
        cmp dword ptr [ecx + 94h], 0
        ; Exact mapped bytes 75 14: jne 0x53fac5
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a8h
        push 6739a4h
        ; Exact mapped bytes E8 80 92 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53fac5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x53faa2
        __asm _emit 0x75
        __asm _emit 0xd7
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 07: jne 0x53fad8
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 14h], 68510ch
        mov eax, dword ptr [ebp - 102ch]
        mov ecx, dword ptr [eax + 94h]
        push ecx
        push 1000h
        lea edx, [ebp - 1020h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 AC B9 68 00: call dword ptr [0x68b9ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1024h], eax
        cmp dword ptr [ebp - 1024h], 0fffh
        ; Exact mapped bytes 72 14: jb 0x53fb29
        __asm _emit 0x72
        __asm _emit 0x14
        push 0afh
        push 6739a4h
        ; Exact mapped bytes E8 1C 92 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53fb29
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x53fb09
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 1020h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3A CE F8 FF: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xce
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1028h]
        or edx, 1
        mov dword ptr [ebp - 1028h], edx
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
