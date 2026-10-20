// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00566442 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_00566442_00566442() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0b0h
        push 5d0c78h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 FF 4C F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C7 FE FF FF: call 0x566330
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 F0 00 00 00: call dword ptr [eax + 0xf0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x566492
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 5d0c84h
        ; Exact mapped bytes E8 86 97 F6 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x97
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E4 B3 FE FF: call 0x551882
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x5664ae
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 86 FE FF FF: call 0x566330
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 5E: jmp 0x56650c
        __asm _emit 0xeb
        __asm _emit 0x5e
        ; Exact mapped bytes E8 4D F0 FC FF: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x5664d0
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c3h
        push 5d0c78h
        ; Exact mapped bytes E8 35 E5 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe5
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5664d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5664b6
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b0h], 0
        ; Exact mapped bytes 74 1E: je 0x566500
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        cmp dword ptr [eax + 10h], 4
        ; Exact mapped bytes 74 16: je 0x566507
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        cmp dword ptr [edx + 10h], 2
        ; Exact mapped bytes 74 07: je 0x566507
        __asm _emit 0x74
        __asm _emit 0x07
        push 1
        ; Exact mapped bytes E8 C8 7D FC FF: call 0x52e2cf
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, 1
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
