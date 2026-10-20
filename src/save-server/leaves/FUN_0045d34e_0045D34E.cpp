// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D34E .. +0x1A0 bytes.
extern "C" __declspec(naked) void FUN_0045d34e_0045D34E() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ea0fh
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
        sub esp, 30h
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 E4 F5 06 00: call 0x4cc978
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xf5
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 07 7A 0C 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x7a
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 09: jne 0x45d3b5
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 36: jmp 0x45d3eb
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 CC 8B 00 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], esp
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes E8 08 02 FF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 15 40 BB 68 00: call dword ptr [0x68bb40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 8D AA 00 00 00: jge 0x45d4b8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 80020005h
        ; Exact mapped bytes 75 38: jne 0x45d44f
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [eax], 0
        mov dword ptr [eax + 4], 0
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7F E1 0E 00: call 0x54b5b0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xe1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 A5 F4 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x45d4db
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 8002000ah
        ; Exact mapped bytes 75 35: jne 0x45d48d
        __asm _emit 0x75
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ecx], 0
        mov dword ptr [ecx + 4], 0bff00000h
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 3E E1 0E 00: call 0x54b5b0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 64 F4 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes EB 4E: jmp 0x45d4db
        __asm _emit 0xeb
        __asm _emit 0x4e
        push 6787c4h
        push 6787f0h
        ; Exact mapped bytes E8 79 31 04 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 8
        cmp dword ptr [ebp - 18h], 8007000eh
        ; Exact mapped bytes 75 07: jne 0x45d4af
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes E8 2F 5A 04 00: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x5a
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x45d4b8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 42 EA 0E 00: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xea
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 EE E0 0E 00: call 0x54b5b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe0
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 14 F4 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        lea esp, [ebp - 3ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
