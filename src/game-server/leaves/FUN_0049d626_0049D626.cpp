// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049D626 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_0049d626_0049D626() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 80 24 5E 00: call dword ptr [0x5e2480]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 1F F2 FF FF: call 0x49c860
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
