// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F78EE .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_004f78ee_004F78EE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 44 DB 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4f791c
        __asm _emit 0x74
        __asm _emit 0x14
        push 0eeah
        push 5c5574h
        ; Exact mapped bytes E8 E9 D0 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f791c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4f78fa
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes E8 1C DB 04 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xdb
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x4f7934
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4E: jmp 0x4f7982
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4f7951
        __asm _emit 0x75
        __asm _emit 0x14
        push 0eefh
        push 5c5574h
        ; Exact mapped bytes E8 B4 D0 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f7951
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4f7934
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, 5de894h
        ; Exact mapped bytes E8 5F AB 04 00: call 0x5424c0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 13: je 0x4f7980
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        ; Exact mapped bytes EB 02: jmp 0x4f7982
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
