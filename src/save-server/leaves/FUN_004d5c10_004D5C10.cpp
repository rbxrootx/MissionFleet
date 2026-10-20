// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D5C10 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_004d5c10_004D5C10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 75 11: jne 0x4d5c34
        __asm _emit 0x75
        __asm _emit 0x11
        push 21h
        push 672048h
        ; Exact mapped bytes E8 11 31 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x31
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d5c34
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4d5c1a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 34h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 34h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
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
