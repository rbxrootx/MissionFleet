// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053486D .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_0053486d_0053486D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x534894
        __asm _emit 0x75
        __asm _emit 0x14
        push 277h
        push 636640h
        ; Exact mapped bytes E8 B1 44 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x534894
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x534877
        __asm _emit 0x75
        __asm _emit 0xdd
        push 2
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 80 B4 68 00: call dword ptr [0x68b480]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5348c5
        __asm _emit 0x75
        __asm _emit 0x14
        push 277h
        push 636640h
        ; Exact mapped bytes E8 80 44 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5348c5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x53489a
        __asm _emit 0x75
        __asm _emit 0xcf
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
