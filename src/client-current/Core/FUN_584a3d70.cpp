// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A3D70 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_584a3d70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F 41 FE FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 C9 FF FF FF: call 0x584a3d50
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 FE 34 FE FF: call 0x58487290
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 2E 36 FE FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ret
    }
}
