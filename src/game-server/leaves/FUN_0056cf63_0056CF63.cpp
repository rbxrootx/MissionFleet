// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056CF63 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_0056cf63_0056CF63() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 6a7h
        push 5d053ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 DE E1 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xe1
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        push 10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C7 2E F6 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x2e
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56cfa7
        __asm _emit 0x75
        __asm _emit 0x14
        push 6a8h
        push 5d053ch
        ; Exact mapped bytes E8 5E 7A FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x7a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56cfa7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x56cf82
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0ach], 0
        ; Exact mapped bytes 75 14: jne 0x56cfcd
        __asm _emit 0x75
        __asm _emit 0x14
        push 6abh
        push 5d053ch
        ; Exact mapped bytes E8 38 7A FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x7a
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56cfcd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x56cfad
        __asm _emit 0x75
        __asm _emit 0xda
        push 58e430h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ach]
        push eax
        ; Exact mapped bytes E8 9F EE FD FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1C: je 0x56d00c
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 38: call dword ptr [eax + 0x38]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
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
