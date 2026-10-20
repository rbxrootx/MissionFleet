// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588640F4 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_588640f4_588640F4() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 A1 4A 00 00: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 4], ecx
        lea ecx, [ebp - 4]
        push ecx
        push eax
        ; Exact mapped bytes E8 12 8E 00 00: call 0x5886cf21
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop ecx
        pop ecx
        mov eax, dword ptr [eax + 8]
        leave
        ret
    }
}
