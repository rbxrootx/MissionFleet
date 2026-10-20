// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CFC40 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_588cfc40() {
    __asm {
        cmp dword ptr [esp + 8], 2
        ; Exact mapped bytes 75 27: jne 0x588cfc6e
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, dword ptr [esp + 4]
        cmp eax, dword ptr [ecx + 68h]
        ; Exact mapped bytes 75 0F: jne 0x588cfc5f
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 5ch]
        push 14h
        ; Exact mapped bytes E8 B6 70 EE FF: call 0x587b6d10
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x70
        __asm _emit 0xee
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 75 0A: jne 0x588cfc6e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ecx + 5ch]
        push 14h
        ; Exact mapped bytes E8 12 71 EE FF: call 0x587b6d80
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x71
        __asm _emit 0xee
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
