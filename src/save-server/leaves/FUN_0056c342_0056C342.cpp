// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C342 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_0056c342_0056C342() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0b0h
        push 67d450h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 FF DE F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xde
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C7 FE FF FF: call 0x56c230
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
        ; Exact mapped bytes 75 11: jne 0x56c392
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 67d45ch
        ; Exact mapped bytes E8 86 42 F3 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x42
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 54 3F FE FF: call 0x5502f2
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x56c3ae
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 86 FE FF FF: call 0x56c230
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 5E: jmp 0x56c40c
        __asm _emit 0xeb
        __asm _emit 0x5e
        ; Exact mapped bytes E8 BD 56 FC FF: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x56
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x56c3d0
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c3h
        push 67d450h
        ; Exact mapped bytes E8 75 C9 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xc9
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56c3d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x56c3b6
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b0h], 0
        ; Exact mapped bytes 74 1E: je 0x56c400
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        cmp dword ptr [eax + 10h], 4
        ; Exact mapped bytes 74 16: je 0x56c407
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        cmp dword ptr [edx + 10h], 2
        ; Exact mapped bytes 74 07: je 0x56c407
        __asm _emit 0x74
        __asm _emit 0x07
        push 1
        ; Exact mapped bytes E8 68 E7 FA FF: call 0x51ab6f
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe7
        __asm _emit 0xfa
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
