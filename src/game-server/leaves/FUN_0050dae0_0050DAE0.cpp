// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050DAE0 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_0050dae0_0050DAE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0a0h], 0
        ; Exact mapped bytes 74 2B: je 0x50db20
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0a0h], 3f107h
        ; Exact mapped bytes 74 1A: je 0x50db1e
        __asm _emit 0x74
        __asm _emit 0x1a
        push 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3C: jmp 0x50db5c
        __asm _emit 0xeb
        __asm _emit 0x3c
        ; Exact mapped bytes E8 DB 7A 02 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 25h
        push 5c5da4h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 28 D6 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x50db54
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AE C5 00 00: call 0x51a100
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x50db5c
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E C6 00 00: call 0x51a1da
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
