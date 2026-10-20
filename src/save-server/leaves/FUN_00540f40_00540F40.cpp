// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00540F40 .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_00540f40_00540F40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d2f2h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push 18ah
        push 674970h
        push 1ch
        ; Exact mapped bytes E8 93 B1 F8 FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0F: je 0x540f8b
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0ah
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BA 83 F8 FF: call 0x4c9340
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x540f92
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
