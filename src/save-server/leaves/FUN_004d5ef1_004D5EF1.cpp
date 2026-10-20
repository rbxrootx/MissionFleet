// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D5EF1 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_004d5ef1_004D5EF1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4d5f1d
        __asm _emit 0x75
        __asm _emit 0x11
        push 6bh
        push 672048h
        ; Exact mapped bytes E8 28 2E 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d5f1d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4d5efb
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 75 1B: jne 0x4d5f47
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 64 BE 68 00: call dword ptr [0x68be64]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 20: jmp 0x4d5f67
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 80 00 00 00: call dword ptr [edx + 0x80]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
