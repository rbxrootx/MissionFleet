// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B2E67 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_004b2e67_004B2E67() {
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
        ; Exact mapped bytes 75 14: jne 0x4b2e96
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fdh
        push 673328h
        ; Exact mapped bytes E8 AF 5E 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x5e
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b2e96
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4b2e71
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        mov eax, dword ptr [ebp + 8]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 B8 05 FF FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4b2ec6
        __asm _emit 0x75
        __asm _emit 0x14
        push 0feh
        push 673338h
        ; Exact mapped bytes E8 7F 5E 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x5e
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b2ec6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D0: jne 0x4b2e9c
        __asm _emit 0x75
        __asm _emit 0xd0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 1212h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
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
