// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B83C0 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_004b83c0_004B83C0() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 5d1b48h
        ; Exact mapped bytes 72 22: jb 0x4b83ee
        __asm _emit 0x72
        __asm _emit 0x22
        cmp dword ptr [ebp + 8], 5d1da8h
        ; Exact mapped bytes 77 19: ja 0x4b83ee
        __asm _emit 0x77
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 8]
        sub eax, 5d1b48h
        sar eax, 5
        add eax, 1ch
        push eax
        ; Exact mapped bytes E8 A7 CE FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 0D: jmp 0x4b83fb
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        pop ebp
        ret
    }
}
