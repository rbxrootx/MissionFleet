// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A6C0 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_0041a6c0_0041A6C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9E 2D 0D 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x2d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 0ch]
        mov edi, dword ptr [ebp - 4]
        add edi, 4
        mov ecx, 7
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 E5 E0 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe0
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
