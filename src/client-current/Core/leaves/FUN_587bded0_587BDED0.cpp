// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BDED0 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_587bded0_587BDED0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 50h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 BB DC FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xbb
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF 78 CD FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x78
        __asm _emit 0xcd
        __asm _emit 0xff
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F2 7E EC FF: call 0x58685df0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x7e
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
