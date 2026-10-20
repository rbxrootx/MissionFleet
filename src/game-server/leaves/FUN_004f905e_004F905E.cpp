// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F905E .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_004f905e_004F905E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 18 00 00: call 0x4fa8d3
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 CE C3 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 14: je 0x4f9091
        __asm _emit 0x74
        __asm _emit 0x14
        push 220h
        push 5c5db4h
        ; Exact mapped bytes E8 74 B9 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9091
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x4f9070
        __asm _emit 0x75
        __asm _emit 0xd9
        ; Exact mapped bytes E8 A7 C3 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 8]
        cmp eax, dword ptr [edx + 6ch]
        ; Exact mapped bytes 74 14: je 0x4f90bb
        __asm _emit 0x74
        __asm _emit 0x14
        push 221h
        push 5c5db4h
        ; Exact mapped bytes E8 4A B9 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f90bb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4f9097
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes E8 F3 06 00 00: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 02: je 0x4f90cd
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 25: jmp 0x4f90f2
        __asm _emit 0xeb
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 84h], 0
        ; Exact mapped bytes 74 19: je 0x4f90f2
        __asm _emit 0x74
        __asm _emit 0x19
        push 227h
        push 5c5db4h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        ; Exact mapped bytes E8 6E 20 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x6e
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
