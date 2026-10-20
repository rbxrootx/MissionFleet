// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FE3A3 .. +0x158 bytes.
extern "C" __declspec(naked) void FUN_004fe3a3_004FE3A3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4fe3cc
        __asm _emit 0x75
        __asm _emit 0x14
        push 128h
        push 5ca304h
        ; Exact mapped bytes E8 39 66 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe3cc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4fe3af
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0ch
        ; Exact mapped bytes E8 AF 2B 03 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4fe3f5
        __asm _emit 0x74
        __asm _emit 0x14
        push 129h
        push 5ca304h
        ; Exact mapped bytes E8 10 66 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe3f5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x4fe3d2
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 10h
        ; Exact mapped bytes E8 86 2B 03 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4fe41e
        __asm _emit 0x74
        __asm _emit 0x14
        push 12ah
        push 5ca304h
        ; Exact mapped bytes E8 E7 65 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fe41e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x4fe3fb
        __asm _emit 0x75
        __asm _emit 0xd7
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 10h
        ; Exact mapped bytes E8 31 2B 03 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        add eax, 5
        push eax
        ; Exact mapped bytes E8 88 EF FE FF: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E8 B7 70 03 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0ch
        ; Exact mapped bytes E8 4F 2B 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 31 11 01 00: call 0x50f595
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4fe476
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 7D 61: jge 0x4fe4e2
        __asm _emit 0x7d
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 10h
        ; Exact mapped bytes E8 17 2B 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x2b
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [edx + eax*4]
        ; Exact mapped bytes E8 DA 2A 03 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x4fe4e0
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [edx + eax*4]
        ; Exact mapped bytes E8 E3 2A 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0ch
        ; Exact mapped bytes E8 D3 2A 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x2a
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B5 10 01 00: call 0x50f595
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 8B: jmp 0x4fe46d
        __asm _emit 0xeb
        __asm _emit 0x8b
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 18 EF FE FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xef
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
