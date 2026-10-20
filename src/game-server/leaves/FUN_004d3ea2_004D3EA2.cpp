// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D3EA2 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_004d3ea2_004D3EA2() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ce2fh
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
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d3eef
        __asm _emit 0x75
        __asm _emit 0x14
        push 114h
        push 5c64b4h
        ; Exact mapped bytes E8 16 0B 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x0b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d3eef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d3eca
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], 100h
        ; Exact mapped bytes 7C 14: jl 0x4d3f12
        __asm _emit 0x7c
        __asm _emit 0x14
        push 115h
        push 5c64b4h
        ; Exact mapped bytes E8 F3 0A 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x0a
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d3f12
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4d3ef5
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 403h
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 C7 CF 05 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xcf
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        push ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 51 A2 01 00: call 0x4ee1a7
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 402h
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push -1
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 B9 A1 01 00: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 17: je 0x4d3f97
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 18h]
        shr edx, 10h
        and edx, 0ffffh
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], edx
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 94 01 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        or edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 94 98 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
