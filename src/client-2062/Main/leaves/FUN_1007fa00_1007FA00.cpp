// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007FA00 .. +0x128 bytes.
extern "C" __declspec(naked) void FUN_1007fa00_1007FA00() {
    __asm {
        push -1
        push 1016fe41h
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
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 64h]
        mov ecx, dword ptr [esi + 74h]
        mov dword ptr [esi + 70h], eax
        mov eax, dword ptr [esi + 0d8h]
        test eax, eax
        mov dword ptr [esi + 80h], ecx
        ; Exact mapped bytes 75 4E: jne 0x1007fa80
        __asm _emit 0x75
        __asm _emit 0x4e
        push 100h
        ; Exact mapped bytes E8 64 CD 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xcd
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes 74 21: je 0x1007fa70
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        push 0
        sub edx, 0a0h
        push 0
        add ecx, 37h
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 72 36 01 00: call 0x100930e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007fa72
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esp + 10h], 0ffffffffh
        mov dword ptr [esi + 0d8h], eax
        mov eax, dword ptr [esi + 0dch]
        test eax, eax
        ; Exact mapped bytes 75 41: jne 0x1007facb
        __asm _emit 0x75
        __asm _emit 0x41
        push 0f8h
        ; Exact mapped bytes E8 0C CD 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xcd
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 10h], 1
        ; Exact mapped bytes 74 14: je 0x1007fabb
        __asm _emit 0x74
        __asm _emit 0x14
        push 40h
        push 0
        push 0
        push 64h
        push 64h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 07 FF 00 00: call 0x1008f9c0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007fabd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esp + 10h], 0ffffffffh
        mov dword ptr [esi + 0dch], eax
        mov eax, dword ptr [esi + 0e0h]
        test eax, eax
        ; Exact mapped bytes 75 3F: jne 0x1007fb14
        __asm _emit 0x75
        __asm _emit 0x3f
        push 0a4h
        ; Exact mapped bytes E8 C1 CC 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xcc
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 10h], 2
        ; Exact mapped bytes 74 1A: je 0x1007fb0c
        __asm _emit 0x74
        __asm _emit 0x1a
        push 40h
        push 0
        push 0
        push 0beh
        push 0d2h
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 36 21 01 00: call 0x10091c40
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1007fb0e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0e0h], eax
        mov ecx, dword ptr [esp + 8]
        or byte ptr [esi + 24h], 0fh
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
