// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041CFF4 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_0041cff4_0041CFF4() {
    __asm {
        mov edx, dword ptr [ecx + 4]
        test edx, edx
        ; Exact mapped bytes 74 20: je 0x41d01b
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ecx + 8]
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, dword ptr [eax + 8]
        mov eax, dword ptr [eax]
        push esi
        mov eax, dword ptr [eax + edi*8]
        mov edi, dword ptr [edx]
        push eax
        push dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes FF 57 10: call dword ptr [edi + 0x10]
        __asm _emit 0xff
        __asm _emit 0x57
        __asm _emit 0x10
        pop edi
        pop esi
        ; Exact mapped bytes EB 05: jmp 0x41d020
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 80004002h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
