// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052E8EB .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_0052e8eb_0052E8EB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 04 05 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 75 40: jne 0x52e943
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes 83 3D FC E8 5D 00 00: cmp dword ptr [0x5de8fc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x52e916
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5E 2F FC FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 46: jmp 0x52e95c
        __asm _emit 0xeb
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c4h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 1D: je 0x52e941
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 0c4h], eax
        push 0
        push 0
        push 85h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 D2 00 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x52e957
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        and edx, 200h
        test edx, edx
        ; Exact mapped bytes 74 04: je 0x52e957
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x52e95c
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
