// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00551252 .. +0x41 bytes.
extern "C" __declspec(naked) void _Dump_CDocItem__UBEXAAVCDumpContext___Z_00551252() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 95 C8 FE FF: call 0x53dafa
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 67c190h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D2 75 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A4 78 FD FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        push 67c1a0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BE 75 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
