// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047EFA0 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_0047efa0_0047EFA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        push esi
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        and eax, 3ffh
        and eax, 0ffffh
        or ah, 4
        and eax, 0ffffh
        mov dword ptr [ebp - 4], eax
        push 78h
        lea ecx, [ebp - 7ch]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 D4 75 68 00: call dword ptr [0x6875d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x47efde
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 44: jmp 0x47f022
        __asm _emit 0xeb
        __asm _emit 0x44
        lea eax, [ebp - 7ch]
        push eax
        ; Exact mapped bytes E8 29 02 00 00: call 0x47f210
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 74 2E: je 0x47f01d
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 28: je 0x47f01d
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D C4 75 68 00: mov ecx, dword ptr [0x6875c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 8F 02 00 00: call 0x47f290
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        ; Exact mapped bytes 8B 15 C4 75 68 00: mov edx, dword ptr [0x6875c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 2E 67 FE FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        cmp esi, eax
        ; Exact mapped bytes 75 04: jne 0x47f01d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x47f022
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
