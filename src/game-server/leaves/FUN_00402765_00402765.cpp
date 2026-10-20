// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00402765 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_00402765_00402765() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d78h]
        mov edx, dword ptr [ecx + 1ch]
        mov ecx, dword ptr [edx + 10h]
        ; Exact mapped bytes E8 B3 1D 00 00: call 0x404546
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 3E 60 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3e
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
