// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052D1D2 .. +0x1CC bytes.
extern "C" __declspec(naked) void FUN_0052d1d2_0052D1D2() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57df14h
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
        sub esp, 11ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 128h], ecx
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 8], 0fffffdf8h
        ; Exact mapped bytes 74 20: je 0x52d225
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 8], 0fffffdeeh
        ; Exact mapped bytes 74 14: je 0x52d225
        __asm _emit 0x74
        __asm _emit 0x14
        push 66ch
        push 5c8fcch
        ; Exact mapped bytes E8 E0 77 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52d225
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x52d1f9
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 11ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], ecx
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 C2 3C 00 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 8], 0fffffdf8h
        ; Exact mapped bytes 75 10: jne 0x52d271
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 11ch]
        mov eax, dword ptr [edx + 64h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x52d28d
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 8], 0fffffdeeh
        ; Exact mapped bytes 75 22: jne 0x52d29f
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0b4h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x52d29f
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 1C 26 5E 00: call dword ptr [0x5e261c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 57: je 0x52d2fc
        __asm _emit 0x74
        __asm _emit 0x57
        push 100h
        lea edx, [ebp - 114h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 86 D9 FC FF: call 0x4fac40
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 27: jne 0x52d2e5
        __asm _emit 0x75
        __asm _emit 0x27
        mov dword ptr [ebp - 120h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 72 05 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 120h]
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x52d38b
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        push 1
        lea ecx, [ebp - 114h]
        push ecx
        lea edx, [ebp - 118h]
        push edx
        ; Exact mapped bytes E8 D3 D9 FC FF: call 0x4faccf
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xd9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 8], 0fffffdf8h
        ; Exact mapped bytes 75 20: jne 0x52d328
        __asm _emit 0x75
        __asm _emit 0x20
        push 50h
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 95 3C 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 11ch]
        add ecx, 10h
        push ecx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x52d345
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 50h
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 75 3C 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 14h]
        add edx, 10h
        push edx
        ; Exact mapped bytes E8 CB 12 FC FF: call 0x4ee60d
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        push 213h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 14 26 5E 00: call dword ptr [0x5e2614]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 124h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 C7 04 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 124h]
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
