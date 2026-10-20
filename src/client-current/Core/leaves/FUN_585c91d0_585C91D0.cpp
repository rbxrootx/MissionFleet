// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C91D0 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_585c91d0_585C91D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 A0 7F 28 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x7f
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 30 44 89 58: call dword ptr [0x58894430]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 30: jne 0x585c9226
        __asm _emit 0x75
        __asm _emit 0x30
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 21: je 0x585c921d
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 77 7F 28 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x7f
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 4
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 00 00 00: call 0x585c9230
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x585c9228
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes EB 07: jmp 0x585c9224
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x585c9228
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x585c9228
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
    }
}
