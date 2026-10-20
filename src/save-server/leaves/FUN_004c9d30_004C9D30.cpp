// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9D30 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_004c9d30_004C9D30() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d2d4h
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
        sub esp, 10h
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3E 06 01 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        push 6749b4h
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 6749ach
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D8 EA 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1D ED 05 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xed
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CA EA 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8F BF 05 00: call 0x525d18
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 8A 00 00 00: jle 0x4c9e1b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 6E AF 05 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5F AF 05 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F5 D9 05 00: call 0x5277a9
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 43: je 0x4c9e00
        __asm _emit 0x74
        __asm _emit 0x43
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 67 FC FF FF: call 0x4c9a38
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 10h]
        push eax
        push 6749c4h
        lea ecx, [ebp - 14h]
        push ecx
        push 6749c0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 EA 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 94 2C 00 00: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 53 EA 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 87 2C 00 00: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B7: jmp 0x4c9db7
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E0 2A 00 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D1 2A 00 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        push 6749cch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 EA 05 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
