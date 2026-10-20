// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F202C .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_004f202c_004F202C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 336h
        push 678234h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 17 82 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 14: je 0x4f2066
        __asm _emit 0x74
        __asm _emit 0x14
        push 337h
        push 678234h
        ; Exact mapped bytes E8 DF 6C 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2066
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4f2049
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28h
        ; Exact mapped bytes E8 9E FD FC FF: call 0x4c1e1b
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xfd
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4f2095
        __asm _emit 0x74
        __asm _emit 0x14
        push 338h
        push 678234h
        ; Exact mapped bytes E8 B0 6C 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f2095
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x4f206c
        __asm _emit 0x75
        __asm _emit 0xd1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28h
        ; Exact mapped bytes E8 98 F6 FC FF: call 0x4c1742
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 14: je 0x4f20c7
        __asm _emit 0x74
        __asm _emit 0x14
        push 33bh
        push 678234h
        ; Exact mapped bytes E8 7E 6C 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f20c7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f20aa
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
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
