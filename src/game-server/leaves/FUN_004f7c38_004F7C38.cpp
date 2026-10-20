// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F7C38 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_004f7c38_004F7C38() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f7c69
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f48h
        push 5c5574h
        ; Exact mapped bytes E8 9C CD 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7c69
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4f7c44
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        push -4
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 C0 28 5E 00: call dword ptr [0x5e28c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 81 9E FF FF: call 0x4f1b27
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
