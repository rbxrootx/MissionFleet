// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878BFD0 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_5878bfd0_5878BFD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 13 EA FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 0ah]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 04 EA FF FF: call 0x5878aa00
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 0bh]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 18 09 00 00: call 0x5878c930
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
