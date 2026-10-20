// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00531A7D .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_00531a7d_00531A7D() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 DB EB 00 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 11: jne 0x531a9f
        __asm _emit 0x75
        __asm _emit 0x11
        push 13h
        push 636640h
        ; Exact mapped bytes E8 A6 72 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x531a9f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x531a83
        __asm _emit 0x75
        __asm _emit 0xde
        ; Exact mapped bytes E8 B9 EB 00 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
