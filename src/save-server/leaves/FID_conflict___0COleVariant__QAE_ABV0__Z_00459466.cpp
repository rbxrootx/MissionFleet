// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00459466 .. +0x2D bytes.
extern "C" __declspec(naked) void FID_conflict___0COleVariant__QAE_ABV0__Z_00459466() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 32 0C 00 00: call 0x45a0a8
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 00 BB 68 00: call dword ptr [0x68bb00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 F6 F9 FF FF: call 0x458e80
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf9
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
