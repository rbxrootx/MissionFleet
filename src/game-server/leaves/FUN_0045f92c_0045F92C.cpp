// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F92C .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_0045f92c_0045F92C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 80h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov esi, esp
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp esi, esp
        ; Exact mapped bytes E8 84 8E 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x8e
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
        ; Exact mapped bytes E8 6C 8E 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 16 00 00 00: call 0x45f992
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 54 8E 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8e
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
