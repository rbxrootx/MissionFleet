// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049C7D0 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_0049c7d0_0049C7D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x49c7fa
        __asm _emit 0x75
        __asm _emit 0x1e
        push 5ca824h
        push 0
        push 3ch
        push 5ca830h
        push 2
        ; Exact mapped bytes E8 3F 43 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x49c7fa
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x49c7d6
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x49c824
        __asm _emit 0x75
        __asm _emit 0x1e
        push 5ca858h
        push 0
        push 3dh
        push 5ca830h
        push 2
        ; Exact mapped bytes E8 15 43 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x49c824
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x49c800
        __asm _emit 0x75
        __asm _emit 0xd6
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx], 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push -1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes FF 15 E0 23 5E 00: call dword ptr [0x5e23e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
