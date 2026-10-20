// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005172CC .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_005172cc_005172CC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 B7 FD FF: call 0x4f2a61
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 1D: je 0x517304
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5ch], 0
        ; Exact mapped bytes 75 14: jne 0x517304
        __asm _emit 0x75
        __asm _emit 0x14
        push 3d0h
        push 5c8b74h
        ; Exact mapped bytes E8 01 D7 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517304
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x5172de
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 40ffffh
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 64h]
        ; Exact mapped bytes 74 14: je 0x517332
        __asm _emit 0x74
        __asm _emit 0x14
        push 3d1h
        push 5c8b74h
        ; Exact mapped bytes E8 D3 D6 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517332
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x51730a
        __asm _emit 0x75
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
