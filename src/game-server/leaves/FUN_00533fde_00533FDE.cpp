// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533FDE .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_00533fde_00533FDE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 74h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 70h]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 43 16 00 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
