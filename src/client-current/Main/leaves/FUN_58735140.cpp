// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58735140 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58735140() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, esi
        push edi
        lea edi, [eax + 1]
        ; Exact mapped bytes EB 03: jmp 0x58735150
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x58735150
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        push esi
        ; Exact mapped bytes E8 A0 FE FF FF: call 0x58735000
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
    }
}
