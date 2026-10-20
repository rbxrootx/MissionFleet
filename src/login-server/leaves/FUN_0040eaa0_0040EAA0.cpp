// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040EAA0 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_0040eaa0_0040EAA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 EA FF FF: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 96 EA FF FF: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 8B EA FF FF: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ch
        ; Exact mapped bytes E8 80 EA FF FF: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 75 EA FF FF: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        ; Exact mapped bytes E8 6A EA FF FF: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18h
        ; Exact mapped bytes E8 5F EA FF FF: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
