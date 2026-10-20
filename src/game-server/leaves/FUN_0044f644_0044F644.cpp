// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044F644 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_0044f644_0044F644() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 22 26 FF FF: call 0x441c80
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x44f684
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov esi, esp
        mov edx, dword ptr [ecx*4 + 5d7b80h]
        push edx
        ; Exact mapped bytes FF 15 04 24 5E 00: call dword ptr [0x5e2404]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 5C 91 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x91
        __asm _emit 0x05
        __asm _emit 0x00
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 51 91 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x91
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
