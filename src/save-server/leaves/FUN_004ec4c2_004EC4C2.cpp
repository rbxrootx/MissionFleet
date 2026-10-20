// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EC4C2 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_004ec4c2_004EC4C2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x4ec4db
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 8], 8000h
        ; Exact mapped bytes 72 11: jb 0x4ec4ec
        __asm _emit 0x72
        __asm _emit 0x11
        push 76h
        push 676ad0h
        ; Exact mapped bytes E8 59 C8 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec4ec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4ec4cc
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 26: je 0x4ec51e
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x4ec507
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 0ch], 8000h
        ; Exact mapped bytes 72 11: jb 0x4ec518
        __asm _emit 0x72
        __asm _emit 0x11
        push 78h
        push 676ad0h
        ; Exact mapped bytes E8 2D C8 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec518
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4ec4f8
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 22: je 0x4ec546
        __asm _emit 0x74
        __asm _emit 0x22
        push 636f38h
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 F9 DF FE FF: call 0x4da52a
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4ec546
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ah
        push 676ad0h
        ; Exact mapped bytes E8 FF C7 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec546
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4ec51e
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 22: je 0x4ec574
        __asm _emit 0x74
        __asm _emit 0x22
        push 636f20h
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 CB DF FE FF: call 0x4da52a
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4ec574
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ch
        push 676ad0h
        ; Exact mapped bytes E8 D1 C7 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec574
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x4ec54c
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 58h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 5ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 44h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 40h], edx
        ; Exact mapped bytes 83 3D DC 22 67 00 00: cmp dword ptr [0x6722dc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x22
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x4ec5b2
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
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
