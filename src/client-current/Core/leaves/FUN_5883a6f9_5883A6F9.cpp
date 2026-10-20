// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A6F9 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_5883a6f9_5883A6F9() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        push esi
        mov edi, ecx
        ; Exact mapped bytes E8 A7 AB C8 FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xab
        __asm _emit 0xc8
        __asm _emit 0xff
        lea eax, [esi + 18h]
        push eax
        lea ecx, [edi + 18h]
        ; Exact mapped bytes E8 9B AB C8 FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xab
        __asm _emit 0xc8
        __asm _emit 0xff
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
