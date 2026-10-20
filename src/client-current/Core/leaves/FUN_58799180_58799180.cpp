// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58799180 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58799180_58799180() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov eax, edx
        push esi
        push edi
        mov esi, ecx
        lea edi, [eax + 1]
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x58799190
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        mov ecx, esi
        add eax, edx
        push eax
        push edx
        ; Exact mapped bytes E8 9C 17 00 00: call 0x5879a940
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
