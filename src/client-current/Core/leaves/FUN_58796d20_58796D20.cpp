// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58796D20 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_58796d20_58796D20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 D0 01 CF FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0xcf
        __asm _emit 0xff
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ret
    }
}
