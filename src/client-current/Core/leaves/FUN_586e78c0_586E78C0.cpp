// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E78C0 .. +0xED bytes.
extern "C" __declspec(naked) void FUN_586e78c0_586E78C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888c90dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 20 06 DA FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        xor eax, eax
        mov byte ptr [ebp - 0dh], al
        lea ecx, [ebp - 0dh]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        lea ecx, [ebp - 0eh]
        ; Exact mapped bytes E8 0C AA DB FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xaa
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 78: je 0x586e7993
        __asm _emit 0x74
        __asm _emit 0x78
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 29 3F 00 00: call 0x586eb850
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 6B F9 D9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf9
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 5A F9 D9 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf9
        __asm _emit 0xd9
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 6D 06 00 00: call 0x586e7fe0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 4], eax
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 6E 16 00 00: call 0x586e9000
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        lea ecx, [ebp - 0eh]
        ; Exact mapped bytes E8 95 05 DA FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x05
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
