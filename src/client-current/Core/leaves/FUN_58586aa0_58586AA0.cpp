// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58586AA0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58586aa0_58586AA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5F 14 F0 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x14
        __asm _emit 0xf0
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 39 3D F2 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 CE 07 F0 FF: call 0x58487290
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x07
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 FE 08 F0 FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x08
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ret
    }
}
