// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A212 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_0041a212_0041A212() {
    __asm {
        mov eax, 43ae54h
        ; Exact mapped bytes E8 EC 53 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        push esi
        and dword ptr [ebp - 4], 0
        mov esi, ecx
        push edi
        lea ecx, [ebp - 14h]
        mov eax, dword ptr [esi]
        mov dword ptr [ebp - 10h], esp
        push ecx
        mov edi, 0fffffdfeh
        push 0bh
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        push dword ptr [ebp + 8]
        mov eax, dword ptr [esi]
        push 0bh
        push edi
        push esi
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        add esp, 10h
        mov ecx, dword ptr [ebp - 0ch]
        xor eax, eax
        cmp dword ptr [ebp - 14h], eax
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sete al
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
