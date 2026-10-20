// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048A80F .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_0048a80f_0048A80F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        push -1
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A9 DF 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c28h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c28h]
        ; Exact mapped bytes E8 AE 1A 00 00: call 0x48c300
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c28h]
        ; Exact mapped bytes E8 5E DE FA FF: call 0x4386c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xde
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c28h]
        ; Exact mapped bytes E8 6E DE FA FF: call 0x4386e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xde
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c28h]
        mov dword ptr [eax + 0c2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c28h]
        push ecx
        push 0
        push 467h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 40h]
        ; Exact mapped bytes E8 39 13 0B 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x13
        __asm _emit 0x0b
        __asm _emit 0x00
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 35 DF 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
