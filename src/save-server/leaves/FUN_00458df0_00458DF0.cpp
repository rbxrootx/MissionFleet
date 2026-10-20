// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00458DF0 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_00458df0_00458DF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x458e1a
        __asm _emit 0x75
        __asm _emit 0x1e
        push 676fach
        push 0
        push 3ch
        push 676fb8h
        push 2
        ; Exact mapped bytes E8 4F 40 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x458e1a
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x458df6
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x458e44
        __asm _emit 0x75
        __asm _emit 0x1e
        push 676fe0h
        push 0
        push 3dh
        push 676fb8h
        push 2
        ; Exact mapped bytes E8 25 40 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x458e44
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x458e20
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
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
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
