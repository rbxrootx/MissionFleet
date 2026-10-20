// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004026B0 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_004026b0_004026B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 178h], 1
        ; Exact mapped bytes 75 2F: jne 0x4026f9
        __asm _emit 0x75
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 178h], 0
        push 0
        push 0
        push 1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 170h]
        or eax, 40000h
        push eax
        push 80020116h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD 73 08 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x73
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 1
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 D8 60 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd8
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
