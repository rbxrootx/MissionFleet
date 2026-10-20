// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D8199 .. +0x365 bytes.
extern "C" __declspec(naked) void FUN_004d8199_004D8199() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3B 18 00 00: call 0x4d99e9
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        push 672370h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 89 06 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 32 08 05 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 70h]
        push ecx
        push 672380h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6E 06 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 17 08 05 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 74h]
        push eax
        push 672394h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 53 06 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4C 06 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 78h]
        push edx
        push 6723a4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 06 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7D 08 05 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 7ch]
        push ecx
        push 6723b4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D 06 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 16 06 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 88h]
        push eax
        push 6723c8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF 05 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 44 08 05 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 8ch]
        push edx
        push 6723d8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E1 05 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DA 05 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 90h]
        push ecx
        push 6723ech
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C3 05 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BC 05 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 94h]
        push eax
        push 672404h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A5 05 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9E 05 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 98h]
        push edx
        push 67241ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 87 05 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 30 07 05 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        push 67242ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 69 05 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 12 07 05 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        push 67243ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4B 05 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5C 07 05 00: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x07
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 7D: je 0x4d8390
        __asm _emit 0x74
        __asm _emit 0x7d
        push 672454h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2B 05 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 D2 1A F7 FF: call 0x449e00
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x1a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x4d8343
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 45: jge 0x4d8390
        __asm _emit 0x7d
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0ach]
        ; Exact mapped bytes E8 C3 1A F7 FF: call 0x449e20
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x1a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FC C9 04 00: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xc9
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x4d838e
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 A6 1A F7 FF: call 0x449e20
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x1a
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        push 67246ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C3 04 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 F7 46 FF FF: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB AA: jmp 0x4d833a
        __asm _emit 0xeb
        __asm _emit 0xaa
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 74 1B: je 0x4d83b7
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 84h]
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + 84h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0a4h]
        push edx
        push 672478h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7D 04 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C2 06 05 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0a8h]
        push ecx
        push 672490h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 04 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 08 06 05 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0b8h]
        push eax
        push 6724ach
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 04 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EA 05 05 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        push 6724c4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2D 04 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 34h]
        push edx
        push 6724d4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 19 04 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C2 05 05 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 38h]
        push ecx
        push 6724e0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FE 03 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A7 05 05 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 3ch]
        push eax
        push 6724f0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E3 03 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8C 05 05 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 40h]
        push edx
        push 6724fch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C8 03 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9A 06 05 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 44h]
        push ecx
        push 672508h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AD 03 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BE 05 05 00: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x05
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 4ch]
        push eax
        mov ecx, dword ptr [edx + 48h]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 C5 99 05 00: call 0x531e7d
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        push 672514h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 03 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 B4 D6 00 00: call 0x4e5b92
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        push 67251ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 03 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        push 672520h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 53 03 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
