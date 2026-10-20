// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040270E .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_0040270e_0040270E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c7ch]
        ; Exact mapped bytes E8 E6 EB FF FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 91 60 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, 1
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 81 60 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
