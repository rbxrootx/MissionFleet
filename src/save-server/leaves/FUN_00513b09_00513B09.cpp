// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00513B09 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_00513b09_00513B09() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 55: je 0x513b70
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1E 8F 01 00: call 0x52ca45
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x513b3f
        __asm _emit 0x75
        __asm _emit 0x14
        push 499h
        push 673dc0h
        ; Exact mapped bytes E8 06 52 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x513b3f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x513b1b
        __asm _emit 0x75
        __asm _emit 0xd6
        push 636f20h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3E 66 FC FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x66
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x513b6a
        __asm _emit 0x75
        __asm _emit 0x14
        push 49ah
        push 673dc0h
        ; Exact mapped bytes E8 DB 51 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x513b6a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x513b45
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 02: jne 0x513b86
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 69: jmp 0x513bef
        __asm _emit 0xeb
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 98h], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 18: je 0x513bb1
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 EC 00 00 00: call dword ptr [edx + 0xec]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 98h], 0
        ; Exact mapped bytes 74 02: je 0x513bbf
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 30: jmp 0x513bef
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 98h], edx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1E: je 0x513bef
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 18: je 0x513bef
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 1
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 90 EC 00 00 00: call dword ptr [eax + 0xec]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
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
