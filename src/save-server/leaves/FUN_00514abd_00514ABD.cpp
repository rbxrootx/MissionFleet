// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00514ABD .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_00514abd_00514ABD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        sub edx, 0e701h
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 77 3E: ja 0x514b29
        __asm _emit 0x77
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 85 8E 4B 51 00: jmp dword ptr [eax*4 + 0x514b8e]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x4b
        __asm _emit 0x51
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 14h
        ; Exact mapped bytes EB 49: jmp 0x514b47
        __asm _emit 0xeb
        __asm _emit 0x49
        mov dword ptr [ebp - 8], 90h
        ; Exact mapped bytes EB 40: jmp 0x514b47
        __asm _emit 0xeb
        __asm _emit 0x40
        mov dword ptr [ebp - 8], 91h
        ; Exact mapped bytes EB 37: jmp 0x514b47
        __asm _emit 0xeb
        __asm _emit 0x37
        mov dword ptr [ebp - 8], 15h
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x514b27
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 8000h
        ; Exact mapped bytes EB 1E: jmp 0x514b47
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 673f90h
        ; Exact mapped bytes E8 DB BA F8 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xba
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 31 02 00: call 0x537d2d
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 3E: jmp 0x514b85
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 FC BE 68 00: call dword ptr [0x68befc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        and ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 75 14: jne 0x514b7f
        __asm _emit 0x75
        __asm _emit 0x14
        push 6c4h
        push 673dc0h
        ; Exact mapped bytes E8 C6 41 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x514b7f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x514b62
        __asm _emit 0x75
        __asm _emit 0xdd
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
