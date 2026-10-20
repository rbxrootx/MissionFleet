// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883AB12 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_5883ab12_5883AB12() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push dword ptr [ebp + 0ch]
        mov esi, ecx
        ; Exact mapped bytes E8 B4 FC FF FF: call 0x5883a7d4
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        add eax, 10h
        mov ecx, esi
        push eax
        push 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 FE FF FF: call 0x5883a9d7
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
