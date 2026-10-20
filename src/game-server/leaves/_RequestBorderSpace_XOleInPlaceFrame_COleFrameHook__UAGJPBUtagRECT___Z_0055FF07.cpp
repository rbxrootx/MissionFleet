// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055FF07 .. +0x65 bytes.
extern "C" __declspec(naked) void _RequestBorderSpace_XOleInPlaceFrame_COleFrameHook__UAGJPBUtagRECT___Z_0055FF07() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 40h
        mov dword ptr [ebp - 8], eax
        push 47bh
        push 5cff18h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 37 B2 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [ebp - 4], eax
        push 47eh
        push 5cff18h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 1B B2 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xb2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 2
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 E0 00 00 00: call dword ptr [edx + 0xe0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x55ff64
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 800401a1h
        ; Exact mapped bytes EB 02: jmp 0x55ff66
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
