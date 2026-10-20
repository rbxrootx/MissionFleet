// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58509100 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58509100_58509100() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        lea eax, [ebp - 30h]
        push eax
        ; Exact mapped bytes E8 78 78 32 00: call 0x5883098c
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x78
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov ecx, 0bh
        mov esi, eax
        mov edi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
