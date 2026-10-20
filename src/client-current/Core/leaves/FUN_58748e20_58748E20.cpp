// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58748E20 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_58748e20_58748E20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A C8 06 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xc8
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 70h]
        sub ecx, dword ptr [eax + 78h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 45 B6 DD FF: call 0x58524490
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xb6
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
