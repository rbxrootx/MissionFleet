// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58791FA9 .. +0x25 bytes.
extern "C" __declspec(naked) void Catch_All_58791fa9() {
    __asm {
        mov esi, dword ptr [ebp - 14h]
        mov edi, dword ptr [ebp + 8]
        cmp esi, edi
        ; Exact mapped bytes 74 12: je 0x58791fc5
        __asm _emit 0x74
        __asm _emit 0x12
        mov ebx, dword ptr [ebp + 14h]
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 62 FE FF FF: call 0x58791e20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, 1ch
        cmp esi, edi
        ; Exact mapped bytes 75 F1: jne 0x58791fb6
        __asm _emit 0x75
        __asm _emit 0xf1
        xor ebx, ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 AA AC 1E 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xac
        __asm _emit 0x1e
        __asm _emit 0x00
    }
}
