// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042B66A .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_0042b66a_0042B66A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 75 11: jne 0x42b69c
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 88 00 00 00: call 0x42b71b
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 04: je 0x42b69c
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6E: jmp 0x42b70a
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov esi, esp
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 5C C1 68 00: call dword ptr [0x68c15c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2E 97 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x42b6cd
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 3D: jmp 0x42b70a
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov esi, esp
        ; Exact mapped bytes FF 15 8C C1 68 00: call dword ptr [0x68c18c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 14 97 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2733h
        ; Exact mapped bytes 75 14: jne 0x42b6fc
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ach], 1
        mov eax, 1
        ; Exact mapped bytes EB 0E: jmp 0x42b70a
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0F 03 00 00: call 0x42ba17
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 DB 96 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x96
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
