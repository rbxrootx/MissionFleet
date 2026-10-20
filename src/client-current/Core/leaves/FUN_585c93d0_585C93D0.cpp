// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C93D0 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_585c93d0_585C93D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e7ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4F 6F FF FF: call 0x585c0340
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5e80h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 37 6F FF FF: call 0x585c0340
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x6f
        __asm _emit 0xff
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
