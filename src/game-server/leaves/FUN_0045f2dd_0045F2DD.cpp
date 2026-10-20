// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F2DD .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_0045f2dd_0045F2DD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp esi, esp
        ; Exact mapped bytes E8 E0 94 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 C8 94 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 1
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 B8 94 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
