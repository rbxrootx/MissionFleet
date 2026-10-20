// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58866100 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58866100_58866100() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes E8 81 31 FF FF: call 0x58859290
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [eax*2 + 2]
        push eax
        push esi
        mov esi, dword ptr [ebp + 8]
        push esi
        ; Exact mapped bytes E8 6F 67 FE FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov eax, esi
        pop esi
        pop ebp
        ret
    }
}
