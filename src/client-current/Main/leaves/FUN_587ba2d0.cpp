// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BA2D0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_587ba2d0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, esi
        push edi
        lea edi, [eax + 1]
        ; Exact mapped bytes EB 03: jmp 0x587ba2e0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        inc eax
        test dl, dl
        ; Exact mapped bytes 75 F9: jne 0x587ba2e0
        __asm _emit 0x75
        __asm _emit 0xf9
        push 0
        sub eax, edi
        inc eax
        push eax
        push esi
        push 0
        push 0
        push 80013201h
        ; Exact mapped bytes E8 74 69 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x69
        __asm _emit 0x1b
        __asm _emit 0x00
        pop edi
        pop esi
    }
}
