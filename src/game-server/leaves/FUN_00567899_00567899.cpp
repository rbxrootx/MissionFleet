// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00567899 .. +0x14E bytes.
extern "C" __declspec(naked) void FUN_00567899_00567899() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58032eh
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
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 8]
        sub eax, 0a8h
        mov dword ptr [ebp - 30h], eax
        push 317h
        push 5d0c78h
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 87 38 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x38
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 09: jne 0x56790a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 35: jmp 0x56793f
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 D8 22 5E 00: call dword ptr [0x5e22d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [eax + eax + 2]
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 98 1E F4 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x1e
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], esp
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 74 4E F3 FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x4e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 EC 00 00 00: call dword ptr [eax + 0xec]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 2F: je 0x56798f
        __asm _emit 0x74
        __asm _emit 0x2f
        push 320h
        push 5d0c78h
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 ED 37 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x37
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes FF 15 D0 29 5E 00: call dword ptr [0x5e29d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x56798b
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 7F: jmp 0x567a0a
        __asm _emit 0xeb
        __asm _emit 0x7f
        xor eax, eax
        ; Exact mapped bytes EB 7B: jmp 0x567a0a
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov dword ptr [ebp - 20h], 800401e5h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 E8 00 00 00: call dword ptr [eax + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 07: je 0x5679c5
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 39: jmp 0x567a00
        __asm _emit 0xeb
        __asm _emit 0x39
        push 584850h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 BC 36 F9 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x36
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5679ec
        __asm _emit 0x75
        __asm _emit 0x14
        push 32fh
        push 5d0c78h
        ; Exact mapped bytes E8 19 D0 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
    }
}
