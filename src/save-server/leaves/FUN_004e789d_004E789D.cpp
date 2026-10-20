// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E789D .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_004e789d_004E789D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e78c6
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a0h
        push 6733e0h
        ; Exact mapped bytes E8 7F 14 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e78c6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4e78a9
        __asm _emit 0x75
        __asm _emit 0xdd
        push 67356ch
        ; Exact mapped bytes FF 15 FC B7 68 00: call dword ptr [0x68b7fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4e78f4
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a3h
        push 6733e0h
        ; Exact mapped bytes E8 51 14 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x14
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e78f4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4e78da
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 0ch], 0
        push 673578h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 13: je 0x4e792c
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 15: jmp 0x4e7941
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0F: je 0x4e7941
        __asm _emit 0x74
        __asm _emit 0x0f
        mov dword ptr [ebp - 0ch], 0ffffffffh
        push 78h
        ; Exact mapped bytes FF 15 B8 B9 68 00: call dword ptr [0x68b9b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
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
