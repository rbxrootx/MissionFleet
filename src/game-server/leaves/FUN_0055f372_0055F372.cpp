// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F372 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_0055f372_0055F372() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 1E 8B FF FF: call 0x557ea4
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x55f391
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x55f441
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2d6h
        push 5cff18h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 BC BD F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xbd
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 A5 0A F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x0a
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55f3c9
        __asm _emit 0x75
        __asm _emit 0x14
        push 2d7h
        push 5cff18h
        ; Exact mapped bytes E8 3C 56 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x56
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55f3c9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x55f3a4
        __asm _emit 0x75
        __asm _emit 0xd5
        push 2d8h
        push 5cff18h
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        ; Exact mapped bytes E8 7B BD F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xbd
        __asm _emit 0xf9
        __asm _emit 0xff
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 64 69 FD FF: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x69
        __asm _emit 0xfd
        __asm _emit 0xff
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 92 90 00 00 00: call dword ptr [edx + 0x90]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4A 69 FD FF: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x69
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 69 6B FD FF: call 0x535f78
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x6b
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 52 6B FD FF: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x6b
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 56 6D FD FF: call 0x536177
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6d
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5D 6B FD FF: call 0x535f86
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x6b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x55f43f
        __asm _emit 0x75
        __asm _emit 0x12
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 2C 04 00 00: call 0x55f869
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x55f441
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
