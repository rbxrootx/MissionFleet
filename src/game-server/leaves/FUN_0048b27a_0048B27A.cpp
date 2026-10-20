// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048B27A .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_0048b27a_0048B27A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        push 10h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        push edx
        ; Exact mapped bytes FF 15 28 29 5E 00: call dword ptr [0x5e2928]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 3B D5 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 12: jne 0x48b2bc
        __asm _emit 0x75
        __asm _emit 0x12
        push 0
        push 0
        push 5c4914h
        ; Exact mapped bytes E8 C9 25 08 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 72: jmp 0x48b32e
        __asm _emit 0xeb
        __asm _emit 0x72
        mov esi, esp
        push 8
        push 464h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        push eax
        ; Exact mapped bytes FF 15 34 29 5E 00: call dword ptr [0x5e2934]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 00 D5 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 12: jne 0x48b2f7
        __asm _emit 0x75
        __asm _emit 0x12
        push 0
        push 0
        push 5c4924h
        ; Exact mapped bytes E8 8E 25 08 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 37: jmp 0x48b32e
        __asm _emit 0xeb
        __asm _emit 0x37
        mov esi, esp
        push 7fffffffh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        push edx
        ; Exact mapped bytes FF 15 24 29 5E 00: call dword ptr [0x5e2924]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 CE D4 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 12: jne 0x48b329
        __asm _emit 0x75
        __asm _emit 0x12
        push 0
        push 0
        push 5c493ch
        ; Exact mapped bytes E8 5C 25 08 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x25
        __asm _emit 0x08
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x48b32e
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 A7 D4 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xd4
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
