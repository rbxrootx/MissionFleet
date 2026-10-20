// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00532F45 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_00532f45_00532F45() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 64 B6 68 00: call dword ptr [0x68b664]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5B 5D FB FF: call 0x4e8cbe
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x5d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
