// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004388F0 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_004388f0_004388F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov esi, esp
        push 4389f3h
        ; Exact mapped bytes FF 15 4C 24 5E 00: call dword ptr [0x5e244c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C4 FE 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes A3 48 2F 5D 00: mov dword ptr [0x5d2f48], eax
        __asm _emit 0xa3
        __asm _emit 0x48
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        mov esi, esp
        push 104h
        push 5d2f4ch
        push 0
        ; Exact mapped bytes FF 15 50 24 5E 00: call dword ptr [0x5e2450]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A4 FE 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0x06
        __asm _emit 0x00
        push 2eh
        push 5d2f4ch
        ; Exact mapped bytes E8 48 0D 00 00: call 0x439690
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2B: je 0x43897f
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 6A 0A 07 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x0a
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        cmp eax, 3
        ; Exact mapped bytes 72 11: jb 0x43897f
        __asm _emit 0x72
        __asm _emit 0x11
        push 5b5bdch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 C4 14 07 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 8]
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 53 FE 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
