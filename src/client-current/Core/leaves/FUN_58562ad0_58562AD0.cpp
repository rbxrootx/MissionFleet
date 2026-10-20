// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58562AD0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_58562ad0_58562AD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 5C 99 F2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x99
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E5 2C F3 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x2c
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], 40000000h
        mov edx, dword ptr [ebp - 8]
        movzx ecx, word ptr [edx + 0ah]
        add ecx, 64h
        mov eax, 2710h
        cdq
        idiv ecx
        imul eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
