// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CBBF .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_0042cbbf_0042CBBF() {
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
        ; Exact mapped bytes E8 09 82 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c28h], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c28h]
        ; Exact mapped bytes E8 0E 1B 00 00: call 0x42e710
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c28h]
        ; Exact mapped bytes E8 9E 1B 00 00: call 0x42e7b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c28h]
        ; Exact mapped bytes E8 AE 1B 00 00: call 0x42e7d0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 E9 E9 0F 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 95 81 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x81
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
