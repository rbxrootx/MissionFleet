// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00403AD0 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_00403ad0_00403AD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 581054h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 3e8h
        mov esi, esp
        ; Exact mapped bytes FF 15 E8 28 5E 00: call dword ptr [0x5e28e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C2 4C 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], eax
        mov eax, dword ptr [ebp - 4]
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 AE 4C 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x4c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
