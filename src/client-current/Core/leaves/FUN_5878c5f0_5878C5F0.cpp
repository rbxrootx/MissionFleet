// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878C5F0 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_5878c5f0_5878C5F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 FE FF FF: call 0x5878c470
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B8 00 00 00: call 0x5878c6c0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x5878c61a
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 01 00 00: call 0x5878c7a0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB E6: jmp 0x5878c600
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE FD FF FF: call 0x5878c3d0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 09: je 0x5878c630
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 61 FE FF FF: call 0x5878c490
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
