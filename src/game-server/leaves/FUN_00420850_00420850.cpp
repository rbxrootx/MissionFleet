// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420850 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_00420850_00420850() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1D 08 00 00: call 0x421090
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 54 FF FF FF: call 0x4207d0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 8]
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 50 7F 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x7f
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
