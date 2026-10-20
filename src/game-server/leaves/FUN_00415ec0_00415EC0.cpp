// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415EC0 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_00415ec0_00415EC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push -1
        push -1
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED 6B 07 00: call 0x48cad0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x6b
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 5810dch
        mov esi, esp
        push 5a10b8h
        mov edx, dword ptr [ebp - 4]
        add edx, 6ch
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D9 28 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 CB 28 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
