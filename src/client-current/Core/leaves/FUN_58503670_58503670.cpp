// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58503670 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58503670_58503670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F 48 F8 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 19 FF FF FF: call 0x585035a0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 FE 3B F8 FF: call 0x58487290
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x3b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 2E 3D F8 FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0x2e
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
