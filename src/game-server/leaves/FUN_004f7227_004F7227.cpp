// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F7227 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_004f7227_004F7227() {
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
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f7256
        __asm _emit 0x75
        __asm _emit 0x14
        push 0dbeh
        push 5c5574h
        ; Exact mapped bytes E8 AF D7 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd7
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7256
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4f7231
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 2ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x4f728f
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        and edx, 0ffffffefh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 24h], edx
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9E 49 04 00: call 0x53bc2d
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
