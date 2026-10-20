// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00482D4B .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_00482d4b_00482D4B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 18c4h], 0
        ; Exact mapped bytes 75 37: jne 0x482d9d
        __asm _emit 0x75
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18c8h
        mov esi, esp
        push ecx
        push 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 218h]
        push eax
        push 481f80h
        push 0
        push 0
        ; Exact mapped bytes FF 15 F4 23 5E 00: call dword ptr [0x5e23f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4C 5A 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18c4h], eax
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 38 5A 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
