// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AB770 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_004ab770_004AB770() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes A1 B0 12 5D 00: mov eax, dword ptr [0x5d12b0]
        __asm _emit 0xa1
        __asm _emit 0xb0
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x4ab782
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 51: jmp 0x4ab7d3
        __asm _emit 0xeb
        __asm _emit 0x51
        push 9
        ; Exact mapped bytes E8 67 9A 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 8B 0D 18 ED 5D 00: mov ecx, dword ptr [0x5ded18]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 08: jmp 0x4ab79f
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 24: je 0x4ab7c9
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        and edx, 0ffffh
        cmp edx, 4
        ; Exact mapped bytes 75 11: jne 0x4ab7c7
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes FF 55 08: call dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x08
        add esp, 8
        ; Exact mapped bytes EB CE: jmp 0x4ab797
        __asm _emit 0xeb
        __asm _emit 0xce
        push 9
        ; Exact mapped bytes E8 C0 9A 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
