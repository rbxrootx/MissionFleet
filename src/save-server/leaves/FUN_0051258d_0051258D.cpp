// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051258D .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_0051258d_0051258D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 75 2F: jne 0x5125cf
        __asm _emit 0x75
        __asm _emit 0x2f
        push 8
        ; Exact mapped bytes E8 84 2D FC FF: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5125bf
        __asm _emit 0x75
        __asm _emit 0x14
        push 211h
        push 673dc0h
        ; Exact mapped bytes E8 86 67 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5125bf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x5125a0
        __asm _emit 0x75
        __asm _emit 0xdb
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 28h], 634da4h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 20h]
        and ecx, 8000h
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x5125f7
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0F: je 0x5125f7
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 20h]
        or ah, 40h
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 20h], eax
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0F: je 0x51260f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 2ch]
        or ah, 2
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 2ch], eax
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
