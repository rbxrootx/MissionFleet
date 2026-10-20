// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D80FE .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_004d80fe_004D80FE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 18 00 00: call 0x4d99d6
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4E 85 06 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 14: je 0x4d8131
        __asm _emit 0x74
        __asm _emit 0x14
        push 220h
        push 6722d0h
        ; Exact mapped bytes E8 14 0C 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x0c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d8131
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x4d8110
        __asm _emit 0x75
        __asm _emit 0xd9
        ; Exact mapped bytes E8 27 85 06 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 8]
        cmp eax, dword ptr [edx + 6ch]
        ; Exact mapped bytes 74 14: je 0x4d815b
        __asm _emit 0x74
        __asm _emit 0x14
        push 221h
        push 6722d0h
        ; Exact mapped bytes E8 EA 0B 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d815b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4d8137
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes E8 F3 06 00 00: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 02: je 0x4d816d
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 25: jmp 0x4d8192
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 74 19: je 0x4d8192
        __asm _emit 0x74
        __asm _emit 0x19
        push 227h
        push 6722d0h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        ; Exact mapped bytes E8 CE 20 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
