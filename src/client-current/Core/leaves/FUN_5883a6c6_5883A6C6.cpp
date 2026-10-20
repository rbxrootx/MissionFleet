// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A6C6 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_5883a6c6_5883A6C6() {
    __asm {
        push 4
        mov eax, 58892944h
        ; Exact mapped bytes E8 66 7E FF FF: call 0x58832538
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, ecx
        mov dword ptr [ebp - 10h], edi
        mov esi, dword ptr [ebp + 8]
        push esi
        ; Exact mapped bytes E8 D0 AB C8 FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xab
        __asm _emit 0xc8
        __asm _emit 0xff
        push dword ptr [esi + 18h]
        and dword ptr [ebp - 4], 0
        lea ecx, [edi + 18h]
        ; Exact mapped bytes E8 8A 04 00 00: call 0x5883ab79
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edi
        ; Exact mapped bytes E8 1F 7E FF FF: call 0x58832515
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
