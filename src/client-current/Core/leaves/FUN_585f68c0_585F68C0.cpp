// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F68C0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_585f68c0_585F68C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 2B 56 E9 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x56
        __asm _emit 0xe9
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 48 02: mov word ptr [eax + 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x02
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
