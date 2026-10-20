// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587912B0 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_587912b0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, esi
        push edi
        lea edi, [eax + 1]
        ; Exact mapped bytes EB 03: jmp 0x587912c0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587912c0
        __asm _emit 0x75
        __asm _emit 0xf9
        sub eax, edi
        push eax
        mov eax, dword ptr [esp + 14h]
        push eax
        push esi
        ; Exact mapped bytes E8 FB C1 FF FF: call 0x5878d4d0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
    }
}
