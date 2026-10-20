// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585614C0 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_585614c0_585614C0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883647h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1ch
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
        mov dword ptr [ebp - 10h], ecx
        push 0f4241h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5B FA FF FF: call 0x58560f50
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 430h
        ; Exact mapped bytes E8 04 FB 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfb
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1A: je 0x5856152d
        __asm _emit 0x74
        __asm _emit 0x1a
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0f4241h
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A8 B5 FF FF: call 0x5855cad0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58561534
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 4
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C4 6C F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x6c
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        add edx, 10h
        mov dword ptr [ebp - 28h], edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AF 6C F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x6c
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
