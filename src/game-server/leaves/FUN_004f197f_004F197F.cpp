// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F197F .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_004f197f_004F197F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        push 1
        ; Exact mapped bytes E8 20 FF FF FF: call 0x4f18af
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x4f19ac
        __asm _emit 0x75
        __asm _emit 0x14
        push 11dh
        push 5c5574h
        ; Exact mapped bytes E8 59 30 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f19ac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f1992
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 62 B6 00 00: call 0x4fd020
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9B DD FF FF: call 0x4ef768
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x4f19f2
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 14: je 0x4f19f2
        __asm _emit 0x74
        __asm _emit 0x14
        push 124h
        push 5c5574h
        ; Exact mapped bytes E8 13 30 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x30
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f19f2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4f19cd
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
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
