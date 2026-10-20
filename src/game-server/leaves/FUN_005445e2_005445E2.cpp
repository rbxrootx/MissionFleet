// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005445E2 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_005445e2_005445E2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x544605
        __asm _emit 0x75
        __asm _emit 0x11
        push 5ah
        push 5c7374h
        ; Exact mapped bytes E8 00 04 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x544605
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x5445ee
        __asm _emit 0x75
        __asm _emit 0xe3
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C2 FE FF FF: call 0x5444dc
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 04: jne 0x544627
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 30: jmp 0x544657
        __asm _emit 0xeb
        __asm _emit 0x30
        lea ecx, [ebp - 0ch]
        push ecx
        lea edx, [ebp - 4]
        push edx
        push 0
        push 2001fh
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 00 1E 5E 00: call dword ptr [0x5e1e00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
