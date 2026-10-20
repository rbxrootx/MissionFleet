// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044D440 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_0044d440_0044D440() {
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
        ; Exact mapped bytes E8 76 F7 03 00: call 0x48cbe0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 5819b0h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 11e8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ca0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ca8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 11ech], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 11f0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 11f4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10dch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0db0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0db4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0db8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0fd0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ec4h], 0
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 C4 B2 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xb2
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
