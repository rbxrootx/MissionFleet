// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58744890 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58744890_58744890() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0fh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EF 16 D4 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x16
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 70h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
