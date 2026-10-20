// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053794B .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_0053794b_0053794B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 C0 BC 68 00: call dword ptr [0x68bcc0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x53797a
        __asm _emit 0x75
        __asm _emit 0x14
        push 42dh
        push 636640h
        ; Exact mapped bytes E8 CB 13 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53797a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x537955
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 11: je 0x537997
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        push 2ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 D3 BA F6 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xba
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5379ab
        __asm _emit 0x75
        __asm _emit 0x14
        push 42dh
        push 636640h
        ; Exact mapped bytes E8 9A 13 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5379ab
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x537980
        __asm _emit 0x75
        __asm _emit 0xcf
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 94 BC 68 00: call dword ptr [0x68bc94]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xbc
        __asm _emit 0x68
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
