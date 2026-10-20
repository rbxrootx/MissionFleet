// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00490FE0 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_00490fe0_00490FE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x49100a
        __asm _emit 0x75
        __asm _emit 0x1e
        push 5ca858h
        push 0
        push 30h
        push 5ca830h
        push 2
        ; Exact mapped bytes E8 2F FB 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x49100a
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x490fe6
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x491034
        __asm _emit 0x75
        __asm _emit 0x1e
        push 5ca824h
        push 0
        push 31h
        push 5ca830h
        push 2
        ; Exact mapped bytes E8 05 FB 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x491034
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x491010
        __asm _emit 0x75
        __asm _emit 0xd6
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 02 00 00: mov word ptr [edx], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes FF 15 DC 23 5E 00: call dword ptr [0x5e23dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
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
