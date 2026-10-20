// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874A0B .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58874a0b_58874A0B() {
    __asm {
        mov edi, edi
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr [edi]
        ; Exact mapped bytes EB 0B: jmp 0x58874a20
        __asm _emit 0xeb
        __asm _emit 0x0b
        push dword ptr [esi]
        ; Exact mapped bytes E8 F4 81 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        add esi, 4
        cmp esi, dword ptr [edi + 4]
        ; Exact mapped bytes 75 F0: jne 0x58874a15
        __asm _emit 0x75
        __asm _emit 0xf0
        push dword ptr [edi]
        ; Exact mapped bytes E8 E4 81 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop edi
        pop esi
        ret
    }
}
