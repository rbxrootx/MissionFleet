// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041CC30 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_0041cc30_0041CC30() {
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
        ; Exact mapped bytes E8 2E 08 0D 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x08
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 8]
        add esi, 4
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
        ; Exact mapped bytes E8 72 BB 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xbb
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
