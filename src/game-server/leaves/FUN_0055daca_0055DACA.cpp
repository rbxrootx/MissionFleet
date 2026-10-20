// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055DACA .. +0xB8 bytes.
extern "C" __declspec(naked) void FUN_0055daca_0055DACA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fa50h
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
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 24h], ecx
        push 3fh
        push 5cfea0h
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 61 D6 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xd6
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 10: je 0x55db15
        __asm _emit 0x74
        __asm _emit 0x10
        push 41h
        push 5cfea0h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 4B D6 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd6
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 28: je 0x55db43
        __asm _emit 0x74
        __asm _emit 0x28
        push 0
        push 1ch
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 2E 23 F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x23
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x55db3d
        __asm _emit 0x75
        __asm _emit 0x11
        push 43h
        push 5cfea0h
        ; Exact mapped bytes E8 C8 6E FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x6e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55db3d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x55db1b
        __asm _emit 0x75
        __asm _emit 0xd8
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 95 A5 FF FF: call 0x5580f3
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x55dc28
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588860h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 20 D5 F9 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xd5
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x55db85
        __asm _emit 0x75
        __asm _emit 0x11
        push 49h
        push 5cfea0h
        ; Exact mapped bytes E8 80 6E FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x6e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
    }
}
