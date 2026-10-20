// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00527DA7 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_00527da7_00527DA7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EC 9D 00 00: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
