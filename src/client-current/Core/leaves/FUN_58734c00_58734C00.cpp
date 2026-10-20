// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58734C00 .. +0xE6 bytes.
extern "C" __declspec(naked) void FUN_58734c00_58734C00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b474ch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        ; Exact mapped bytes E8 E3 FB DF FF: call 0x58534800
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x58734cce
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58734c3a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        ; Exact mapped bytes E8 FB 35 D5 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x35
        __asm _emit 0xd5
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 73 78: jae 0x58734cc2
        __asm _emit 0x73
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 4]
        add eax, 54h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B1 2D D5 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x2d
        __asm _emit 0xd5
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 59: je 0x58734cbd
        __asm _emit 0x74
        __asm _emit 0x59
        mov edx, dword ptr [ebp - 4]
        add edx, 54h
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 97 2D D5 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x2d
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58734c9b
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58734ca2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 4]
        add edx, 54h
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 59 2D D5 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x2d
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [eax], 0
        ; Exact mapped bytes E9 6F FF FF FF: jmp 0x58734c31
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        ; Exact mapped bytes E8 23 34 D5 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x34
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        ; Exact mapped bytes E8 07 2B D5 FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x2b
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F FE 07 00: call 0x587b4b60
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
