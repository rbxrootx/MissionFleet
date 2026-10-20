// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E5BD4 .. +0x7B bytes.
extern "C" __declspec(naked) void __6_YGAAVCDumpContext__AAV0_ABUtagRECT___Z_004E5BD4() {
    __asm {
        push ebp
        mov ebp, esp
        push 6734c4h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 6734bch
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        push 6734b4h
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 6734ach
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        push ecx
        push 6734a8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 2C 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 15 2E 04 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2A 2C 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 07 2E 04 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x2e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1C 2C 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F9 2D 04 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 0E 2C 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EB 2D 04 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x2d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 00 2C 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
