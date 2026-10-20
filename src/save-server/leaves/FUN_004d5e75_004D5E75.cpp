// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D5E75 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_004d5e75_004D5E75() {
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
        ; Exact mapped bytes 75 11: jne 0x4d5ea1
        __asm _emit 0x75
        __asm _emit 0x11
        push 61h
        push 672048h
        ; Exact mapped bytes E8 A4 2E 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d5ea1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4d5e7f
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 75 1B: jne 0x4d5ecb
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
        ; Exact mapped bytes FF 15 68 BE 68 00: call dword ptr [0x68be68]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x4d5ee8
        __asm _emit 0xeb
        __asm _emit 0x1d
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
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
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
