// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052D39E .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_0052d39e_0052D39E() {
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
        ; Exact mapped bytes 77 3E: ja 0x52d40a
        __asm _emit 0x77
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 85 6F D4 52 00: jmp dword ptr [eax*4 + 0x52d46f]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0xd4
        __asm _emit 0x52
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 14h
        ; Exact mapped bytes EB 49: jmp 0x52d428
        __asm _emit 0xeb
        __asm _emit 0x49
        mov dword ptr [ebp - 8], 90h
        ; Exact mapped bytes EB 40: jmp 0x52d428
        __asm _emit 0xeb
        __asm _emit 0x40
        mov dword ptr [ebp - 8], 91h
        ; Exact mapped bytes EB 37: jmp 0x52d428
        __asm _emit 0xeb
        __asm _emit 0x37
        mov dword ptr [ebp - 8], 15h
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x52d408
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 8000h
        ; Exact mapped bytes EB 1E: jmp 0x52d428
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 5c919ch
        ; Exact mapped bytes E8 FA 27 FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x27
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C3 E4 00 00: call 0x53b8e9
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3E: jmp 0x52d466
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 BC 25 5E 00: call dword ptr [0x5e25bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x25
        __asm _emit 0x5e
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
        ; Exact mapped bytes 75 14: jne 0x52d460
        __asm _emit 0x75
        __asm _emit 0x14
        push 6c0h
        push 5c8fcch
        ; Exact mapped bytes E8 A5 75 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52d460
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x52d443
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
