// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A279B .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_004a279b_004A279B() {
    __asm {
        push ebp
        mov ebp, esp
        push 673a20h
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 6F 2B 08 00: call 0x52531a
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x2b
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        push 673a10h
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 2B 2B 08 00: call 0x5252e4
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x2b
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        push 673a04h
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 DF 2A 08 00: call 0x5252a6
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x2a
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        push 6739fch
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 A1 2A 08 00: call 0x525276
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x2a
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        push 6739f0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 68 60 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 45 62 08 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5A 60 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9F 62 08 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4C 60 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 91 62 08 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 3E 60 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 83 62 08 00: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 30 60 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
