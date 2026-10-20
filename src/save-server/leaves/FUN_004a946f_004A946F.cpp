// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A946F .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_004a946f_004A946F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
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
        ; Exact mapped bytes 75 14: jne 0x4a94a0
        __asm _emit 0x75
        __asm _emit 0x14
        push 0beh
        push 672a58h
        ; Exact mapped bytes E8 A5 F8 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf8
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a94a0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4a947b
        __asm _emit 0x75
        __asm _emit 0xd5
        ; Exact mapped bytes E8 07 86 08 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x4a94c8
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c1h
        push 672a58h
        ; Exact mapped bytes E8 7D F8 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a94c8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4a94ae
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 413h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
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
