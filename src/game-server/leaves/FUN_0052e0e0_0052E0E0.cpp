// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052E0E0 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_0052e0e0_0052E0E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4E 6A FC FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x6a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x52e106
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x52e120
        __asm _emit 0x75
        __asm _emit 0x14
        push 866h
        push 5c8fcch
        ; Exact mapped bytes E8 E5 68 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52e120
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x52e106
        __asm _emit 0x75
        __asm _emit 0xe0
        push 585e80h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D CF FC FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52e14b
        __asm _emit 0x75
        __asm _emit 0x14
        push 867h
        push 5c8fcch
        ; Exact mapped bytes E8 BA 68 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52e14b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x52e126
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
