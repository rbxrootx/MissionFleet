// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418290 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_00418290_00418290() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        push edi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 581134h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], ecx
        ; Exact mapped bytes E8 37 D2 11 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xd2
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 7C: call dword ptr [eax + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 00 05 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 9ch]
        mov dword ptr [ecx + 4], edx
        mov esi, dword ptr [ebp + 10h]
        mov edi, dword ptr [ebp - 4]
        add edi, 10h
        mov ecx, 65h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 00 00 00: call 0x418334
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 CD 04 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x04
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
