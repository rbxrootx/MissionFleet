// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58792075 .. +0x25 bytes.
extern "C" __declspec(naked) void Catch_All_58792075() {
    __asm {
        mov esi, dword ptr [ebp - 38h]
        mov edi, dword ptr [ebp - 34h]
        cmp esi, edi
        ; Exact mapped bytes 74 12: je 0x58792091
        __asm _emit 0x74
        __asm _emit 0x12
        mov ebx, dword ptr [ebp + 14h]
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 96 FD FF FF: call 0x58791e20
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esi, 1ch
        cmp esi, edi
        ; Exact mapped bytes 75 F1: jne 0x58792082
        __asm _emit 0x75
        __asm _emit 0xf1
        xor ebx, ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 DE AB 1E 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xab
        __asm _emit 0x1e
        __asm _emit 0x00
    }
}
