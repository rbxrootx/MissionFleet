// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00463CBC .. +0x172 bytes.
extern "C" __declspec(naked) void FUN_00463cbc_00463CBC() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bb5bh
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
        sub esp, 18h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        add eax, 18h
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F8 0C 00 00: call 0x4649f8
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, 0aaaaaaaah
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 1a8h]
        ; Exact mapped bytes 75 2D: jne 0x463d43
        __asm _emit 0x75
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 40cc8h]
        mov eax, dword ptr [edx + 0ca0h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 1a4h]
        cmp eax, dword ptr [ecx + 0f4h]
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x463e12
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BC D1 0C 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd1
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 140h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 144h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 138h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 13ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 120h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 134h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 128h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 124h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 1a8h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        push edx
        push 5bace0h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 94 AB 06 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xab
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 34h
        push ecx
        mov ecx, esp
        mov dword ptr [ebp - 18h], esp
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 A0 96 08 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        push 9
        mov ecx, 5d4c70h
        ; Exact mapped bytes E8 7F 0C FF FF: call 0x454a68
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 08: je 0x463df7
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 87 38 FE FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 3F 9A 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x9a
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes EB 02: jmp 0x463e14
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 B8 49 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
