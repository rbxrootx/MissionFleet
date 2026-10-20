// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585035D0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_585035d0_585035D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F 49 F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x49
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 C9 FF FF FF: call 0x585035b0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 9E 3C F8 FF: call 0x58487290
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x3c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 CE 3D F8 FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ret
    }
}
