// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A3DB0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_584a3db0_584A3DB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F 41 FE FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 99 FF FF FF: call 0x584a3d60
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E8 BE 34 FE FF: call 0x58487290
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 EE 35 FE FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ret
    }
}
