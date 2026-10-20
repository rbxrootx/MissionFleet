// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F422 .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_0041f422_0041F422() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 43f9f0h
        push 423118h
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
        sub esp, 0ch
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 6C 10 45 00: mov eax, dword ptr [0x45106c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 43: jne 0x41f492
        __asm _emit 0x75
        __asm _emit 0x43
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 35 64 10 45 00: cmp esi, dword ptr [0x451064]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0x64
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 0F 87 93 00 00 00: ja 0x41f4f1
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 9
        ; Exact mapped bytes E8 A5 31 00 00: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        and dword ptr [ebp - 4], 0
        push esi
        ; Exact mapped bytes E8 C3 42 00 00: call 0x423733
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 1ch], eax
        or dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 0C 00 00 00: call 0x41f489
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        test eax, eax
        ; Exact mapped bytes 74 6D: je 0x41f4f1
        __asm _emit 0x74
        __asm _emit 0x6d
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x41f50f
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 9
        ; Exact mapped bytes E8 DB 31 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ret
        cmp eax, 2
        ; Exact mapped bytes 75 5A: jne 0x41f4f1
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x41f4a6
        __asm _emit 0x74
        __asm _emit 0x08
        lea esi, [eax + 0fh]
        and esi, 0fffffff0h
        ; Exact mapped bytes EB 03: jmp 0x41f4a9
        __asm _emit 0xeb
        __asm _emit 0x03
        push 10h
        pop esi
        mov dword ptr [ebp + 8], esi
        ; Exact mapped bytes 3B 35 3C D0 44 00: cmp esi, dword ptr [0x44d03c]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0x3c
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 77 2E: ja 0x41f4e2
        __asm _emit 0x77
        __asm _emit 0x2e
        push 9
        ; Exact mapped bytes E8 4F 31 00 00: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 4], 1
        mov eax, esi
        shr eax, 4
        push eax
        ; Exact mapped bytes E8 08 4D 00 00: call 0x4241d6
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 1ch], eax
        or dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 0D 00 00 00: call 0x41f4e8
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        test eax, eax
        ; Exact mapped bytes 75 2D: jne 0x41f50f
        __asm _emit 0x75
        __asm _emit 0x2d
        push esi
        ; Exact mapped bytes EB 1C: jmp 0x41f501
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov esi, dword ptr [ebp + 8]
        push 9
        ; Exact mapped bytes E8 7C 31 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ret
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 75 03: jne 0x41f4fb
        __asm _emit 0x75
        __asm _emit 0x03
        push 1
        pop eax
        add eax, 0fh
        and al, 0f0h
        push eax
        push 0
        ; Exact mapped bytes FF 35 68 10 45 00: push dword ptr [0x451068]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
    }
}
