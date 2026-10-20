// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CC23F .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_004cc23f_004CC23F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 00 51 68 00 00: cmp dword ptr [0x685100], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x51
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x4cc253
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 38: jmp 0x4cc28b
        __asm _emit 0xeb
        __asm _emit 0x38
        push -1
        ; Exact mapped bytes E8 76 BC F9 FF: call 0x467ed0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xbc
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 10: je 0x4cc276
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        or al, 1
        push eax
        ; Exact mapped bytes E8 5F BC F9 FF: call 0x467ed0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xbc
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 0F: jmp 0x4cc285
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0fffffffeh
        push ecx
        ; Exact mapped bytes E8 4E BC F9 FF: call 0x467ed0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xbc
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        and eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
