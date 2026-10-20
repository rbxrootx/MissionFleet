// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049B450 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_0049b450_0049B450() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 30h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        cmp dword ptr [edx + eax + 10h], 4
        ; Exact mapped bytes 74 21: je 0x49b490
        __asm _emit 0x74
        __asm _emit 0x21
        push 5cb068h
        push 0
        push 7d7h
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 A9 56 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x49b490
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C6: jne 0x49b45c
        __asm _emit 0x75
        __asm _emit 0xc6
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2E EF FF FF: call 0x49a3d0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
