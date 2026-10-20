// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E822C .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_004e822c_004E822C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 0c3h
        push 5cfeb0h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 15 2F 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e8268
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c4h
        push 5cfeb0h
        ; Exact mapped bytes E8 9D C7 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e8268
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4e824b
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        push 0ch
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 D8 7B FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e8296
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c5h
        push 5cfeb0h
        ; Exact mapped bytes E8 6F C7 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e8296
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4e826e
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 0F: je 0x4e82d1
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [eax + 4], 0
        ; Exact mapped bytes EB 0A: jmp 0x4e82db
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A9 FC FF FF: call 0x4e7f90
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
