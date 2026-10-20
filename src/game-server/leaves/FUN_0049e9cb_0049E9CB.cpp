// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049E9CB .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_0049e9cb_0049E9CB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0dh
        ; Exact mapped bytes 0F 87 A9 00 00 00: ja 0x49ea90
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 24 95 BE EA 49 00: jmp dword ptr [edx*4 + 0x49eabe]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xbe
        __asm _emit 0xea
        __asm _emit 0x49
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x49eab5
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BF 48 08: movsx ecx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x08
        push ecx
        ; Exact mapped bytes E8 7B 43 00 00: call 0x4a2d80
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x49eab5
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 6A 43 00 00: call 0x4a2d80
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x49eab5
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes D9 41 08: fld dword ptr [ecx + 8]
        __asm _emit 0xd9
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes D8 35 B0 7E 58 00: fdiv dword ptr [0x587eb0]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 D0 AA 00 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x49eab5
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes DD 42 08: fld qword ptr [edx + 8]
        __asm _emit 0xdd
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes DC 35 A8 7E 58 00: fdiv qword ptr [0x587ea8]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0xa8
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 BA AA 00 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 71: jmp 0x49eab5
        __asm _emit 0xeb
        __asm _emit 0x71
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BF 48 08: movsx ecx, word ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x08
        push ecx
        ; Exact mapped bytes E8 2F 43 00 00: call 0x4a2d80
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 62: jmp 0x49eab5
        __asm _emit 0xeb
        __asm _emit 0x62
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 21 43 00 00: call 0x4a2d80
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 54: jmp 0x49eab5
        __asm _emit 0xeb
        __asm _emit 0x54
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes DD 41 08: fld qword ptr [ecx + 8]
        __asm _emit 0xdd
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes DC 35 A8 7E 58 00: fdiv qword ptr [0x587ea8]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0xa8
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 8A AA 00 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 41: jmp 0x49eab5
        __asm _emit 0xeb
        __asm _emit 0x41
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 CF 05 03 00: call 0x4cf04f
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 33: jmp 0x49eab5
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes E8 F2 42 00 00: call 0x4a2d80
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 25: jmp 0x49eab5
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x49eaad
        __asm _emit 0x74
        __asm _emit 0x14
        push 413h
        push 5cbe8ch
        ; Exact mapped bytes E8 58 5F 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x5f
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49eaad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x49ea90
        __asm _emit 0x75
        __asm _emit 0xdd
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
