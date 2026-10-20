// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051B9A0 .. +0x11F bytes.
extern "C" __declspec(naked) void FUN_0051b9a0_0051B9A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 2bh
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0eh
        ; Exact mapped bytes 0F 87 D2 00 00 00: ja 0x51ba97
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [eax + 51bad3h]
        ; Exact mapped bytes FF 24 95 BF BA 51 00: jmp dword ptr [edx*4 + 0x51babf]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xbf
        __asm _emit 0xba
        __asm _emit 0x51
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 14: je 0x51b9f1
        __asm _emit 0x74
        __asm _emit 0x14
        push 191h
        push 6769f8h
        ; Exact mapped bytes E8 54 D3 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51b9f1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x51b9d7
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 FA FF FF: call 0x51b403
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x51bab1
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 14: je 0x51ba22
        __asm _emit 0x74
        __asm _emit 0x14
        push 195h
        push 6769f8h
        ; Exact mapped bytes E8 23 D3 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51ba22
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x51ba08
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 FD FF FF: call 0x51b7db
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 7B: jmp 0x51bab1
        __asm _emit 0xeb
        __asm _emit 0x7b
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x51ba50
        __asm _emit 0x75
        __asm _emit 0x14
        push 199h
        push 6769f8h
        ; Exact mapped bytes E8 F5 D2 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51ba50
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x51ba36
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 47 FE FF FF: call 0x51b8a9
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 48: jmp 0x51bab1
        __asm _emit 0xeb
        __asm _emit 0x48
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 14: je 0x51ba83
        __asm _emit 0x74
        __asm _emit 0x14
        push 19dh
        push 6769f8h
        ; Exact mapped bytes E8 C2 D2 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51ba83
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x51ba69
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7D FE FF FF: call 0x51b912
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1A: jmp 0x51bab1
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 54 FF FF: call 0x510eff
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x51bab6
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
