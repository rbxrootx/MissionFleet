// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B5A30 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_004b5a30_004B5A30() {
    __asm {
        push ebp
        mov ebp, esp
        push 0
        push 1000h
        xor eax, eax
        cmp dword ptr [ebp + 8], 0
        sete al
        push eax
        ; Exact mapped bytes FF 15 6C 22 5E 00: call dword ptr [0x5e226c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 5C 02 5E 00: mov dword ptr [0x5e025c], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 5C 02 5E 00 00: cmp dword ptr [0x5e025c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x4b5a5c
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1F: jmp 0x4b5a7b
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes E8 EF 00 00 00: call 0x4b5b50
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4b5a76
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 5C 02 5E 00: mov ecx, dword ptr [0x5e025c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 70 22 5E 00: call dword ptr [0x5e2270]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x4b5a7b
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop ebp
        ret
    }
}
