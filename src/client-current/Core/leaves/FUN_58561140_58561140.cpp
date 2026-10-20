// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58561140 .. +0xD4 bytes.
extern "C" __declspec(naked) void FUN_58561140_58561140() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883607h
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
        push 0f4240h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 3B FF FF FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x58561187
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0f4240h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CA FD FF FF: call 0x58560f50
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        push 430h
        ; Exact mapped bytes E8 73 FE 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1A: je 0x585611be
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        push 0f4240h
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 17 B9 FF FF: call 0x5855cad0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x585611c5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 4
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 33 70 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x70
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        add edx, 10h
        mov dword ptr [ebp - 28h], edx
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 1E 70 F2 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x70
        __asm _emit 0xf2
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
