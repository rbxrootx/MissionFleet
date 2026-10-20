// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00535871 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_00535871_00535871() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        sub eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 D4 00 00 00: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x00
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
