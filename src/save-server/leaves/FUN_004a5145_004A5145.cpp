// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A5145 .. +0x18C bytes.
extern "C" __declspec(naked) void FUN_004a5145_004A5145() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d850h
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
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x4a517d
        __asm _emit 0x75
        __asm _emit 0x11
        push 69h
        push 67599ch
        ; Exact mapped bytes E8 C8 3B 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a517d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4a5166
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 40h], 0
        ; Exact mapped bytes 75 11: jne 0x4a519d
        __asm _emit 0x75
        __asm _emit 0x11
        push 6bh
        push 67599ch
        ; Exact mapped bytes E8 A8 3B 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a519d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4a5183
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 40h]
        add eax, 3ch
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4a51d3
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 48h], 0
        ; Exact mapped bytes 74 0B: je 0x4a51d3
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 40h]
        add edx, 44h
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes EB 3A: jmp 0x4a520d
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 34h]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4a51f1
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 74 0B: je 0x4a51f1
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 40h]
        add edx, 4ch
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes EB 1C: jmp 0x4a520d
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 34h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4a520d
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 40h]
        cmp dword ptr [ecx + 58h], 0
        ; Exact mapped bytes 74 09: je 0x4a520d
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 40h]
        add edx, 54h
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        ; Exact mapped bytes E8 BB 0B 04 00: call 0x4e5dd4
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x0b
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 2B 0A 04 00: call 0x4e5c4f
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 3ch]
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 CE EB 08 00: call 0x533e05
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xeb
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        push eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 43 EE 08 00: call 0x534086
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xee
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 11: jne 0x4a525d
        __asm _emit 0x75
        __asm _emit 0x11
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 1C 0D 04 00: call 0x4e5f77
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 61: jmp 0x4a52be
        __asm _emit 0xeb
        __asm _emit 0x61
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 62 CF 08 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xcf
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1ch
        push ecx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 44 D2 08 00: call 0x5324b8
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        push 0cc0020h
        push 0
        push 0
        lea edx, [ebp - 2ch]
        push edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 3D D0 08 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 1E D0 08 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F4 04 09 00: call 0x535797
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 D7 ED 08 00: call 0x534086
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xed
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 B9 0C 04 00: call 0x4e5f77
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x0c
        __asm _emit 0x04
        __asm _emit 0x00
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
