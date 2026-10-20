// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D441B .. +0xFD bytes.
extern "C" __declspec(naked) void FUN_004d441b_004D441B() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c463h
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
        push ecx
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
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
        ; Exact mapped bytes 75 14: jne 0x4d4465
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c17h
        push 671a64h
        ; Exact mapped bytes E8 E0 48 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4465
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d4440
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 5F 01 00 00: call 0x4d45da
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 F5 BC 06 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 75 14: jne 0x4d44ae
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c1eh
        push 671a64h
        ; Exact mapped bytes E8 97 48 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d44ae
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x4d448f
        __asm _emit 0x75
        __asm _emit 0xdb
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [ecx + 0b8h], eax
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 8C 00 00 00: call dword ptr [eax + 0x8c]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 1
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x4d45b1
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 636b28h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 94 5C 00 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d4514
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c27h
        push 671a64h
        ; Exact mapped bytes E8 31 48 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x48
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4514
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
    }
}
