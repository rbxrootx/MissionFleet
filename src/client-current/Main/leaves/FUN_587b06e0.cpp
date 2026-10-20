// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B06E0 .. +0xC4 bytes.
extern "C" __declspec(naked) void FUN_587b06e0() {
    __asm {
        cmp dword ptr [ecx + 100h], 0
        ; Exact mapped bytes 0F 84 B6 00 00 00: je 0x587b07a3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x587b07a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 40000000h
        cmp dword ptr [ecx + 10ch], eax
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x587b07a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx + 11ch], eax
        ; Exact mapped bytes 75 0C: jne 0x587b071c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ecx + 0d8h], 1
        ; Exact mapped bytes EB 28: jmp 0x587b0744
        __asm _emit 0xeb
        __asm _emit 0x28
        cmp dword ptr [ecx + 114h], eax
        ; Exact mapped bytes 75 16: jne 0x587b073a
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ecx + 0cch]
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 3
        mov dword ptr [ecx + 0d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x587b0744
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ecx + 0d8h], 3
        mov eax, dword ptr [ecx + 128h]
        imul eax, dword ptr [ecx + 0d8h]
        add dword ptr [ecx + 0ach], eax
        mov eax, dword ptr [ecx + 0ach]
        mov edx, dword ptr [ecx + 0b8h]
        cmp eax, edx
        ; Exact mapped bytes 7F 10: jg 0x587b0777
        __asm _emit 0x7f
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7D 2C: jge 0x587b0797
        __asm _emit 0x7d
        __asm _emit 0x2c
        mov dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes EB 16: jmp 0x587b078d
        __asm _emit 0xeb
        __asm _emit 0x16
        test eax, eax
        ; Exact mapped bytes 7D 0C: jge 0x587b0787
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes EB 06: jmp 0x587b078d
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [ecx + 0ach], edx
        mov dword ptr [ecx + 10ch], 0
        mov edx, dword ptr [ecx + 0ach]
        push edx
        ; Exact mapped bytes E8 DD FE FF FF: call 0x587b0680
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ret
    }
}
