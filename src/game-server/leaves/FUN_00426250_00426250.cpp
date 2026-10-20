// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00426250 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_00426250_00426250() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push -1
        push -1
        push 0
        push 28h
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 56 33 06 00: call 0x4895d0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 581268h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 104h], 508h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ca0h], 0
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 36 25 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
