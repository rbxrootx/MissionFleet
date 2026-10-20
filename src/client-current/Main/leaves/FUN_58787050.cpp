// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58787050 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_58787050() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        push edi
        push 6
        push ebx
        mov esi, ecx
        ; Exact mapped bytes E8 6A FC FF FF: call 0x58786cd0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push 7
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 5F FC FF FF: call 0x58786cd0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push 8
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 54 FC FF FF: call 0x58786cd0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push 9
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 49 FC FF FF: call 0x58786cd0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push 0ah
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 3E FC FF FF: call 0x58786cd0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push 0bh
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 33 FC FF FF: call 0x58786cd0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push 0ch
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 28 FC FF FF: call 0x58786cd0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
