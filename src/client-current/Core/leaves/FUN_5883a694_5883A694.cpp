// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A694 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_5883a694_5883A694() {
    __asm {
        push 4
        mov eax, 58892944h
        ; Exact mapped bytes E8 98 7E FF FF: call 0x58832538
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 F3 C6 FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xf3
        __asm _emit 0xc6
        __asm _emit 0xff
        push dword ptr [ebp + 0ch]
        and dword ptr [ebp - 4], 0
        lea ecx, [esi + 18h]
        ; Exact mapped bytes E8 64 F3 C6 FF: call 0x584a9a20
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf3
        __asm _emit 0xc6
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes E8 52 7E FF FF: call 0x58832515
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
