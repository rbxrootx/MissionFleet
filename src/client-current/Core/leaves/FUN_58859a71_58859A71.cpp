// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58859A71 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_58859a71_58859A71() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 24 F1 00 00: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 4], ecx
        lea ecx, [ebp - 4]
        push ecx
        push eax
        ; Exact mapped bytes E8 95 34 01 00: call 0x5886cf21
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop ecx
        pop ecx
        mov eax, dword ptr [eax + 88h]
        leave
        ret
    }
}
