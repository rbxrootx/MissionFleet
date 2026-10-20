// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004186B8 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_004186b8_004186B8() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        cmp esi, dword ptr [esp + 10h]
        ; Exact mapped bytes 7F 15: jg 0x4186db
        __asm _emit 0x7f
        __asm _emit 0x15
        mov eax, dword ptr [edi]
        xor ecx, ecx
        cmp esi, dword ptr [esp + 14h]
        sete cl
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        inc esi
        ; Exact mapped bytes EB E5: jmp 0x4186c0
        __asm _emit 0xeb
        __asm _emit 0xe5
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
