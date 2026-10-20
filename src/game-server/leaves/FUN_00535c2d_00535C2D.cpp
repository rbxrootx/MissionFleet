// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00535C2D .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_00535c2d_00535C2D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 18 FD FF FF: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
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
