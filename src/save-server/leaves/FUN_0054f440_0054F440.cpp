// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F440 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_0054f440_0054F440() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f335h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 87 0D FA FF: call 0x4f01f0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 0ah
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 50h
        ; Exact mapped bytes E8 C3 2B F7 FF: call 0x4c2040
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x2b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 63c7ech
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 28h
        ; Exact mapped bytes E8 B5 74 FD FF: call 0x52694a
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x54f4aa
        __asm _emit 0x75
        __asm _emit 0x11
        push 1dh
        push 67bf90h
        ; Exact mapped bytes E8 9B 98 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f4aa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x54f48a
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 50h
        ; Exact mapped bytes E8 18 78 FD FF: call 0x526cd3
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x54f4d0
        __asm _emit 0x75
        __asm _emit 0x11
        push 1eh
        push 67bf90h
        ; Exact mapped bytes E8 75 98 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f4d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x54f4b0
        __asm _emit 0x75
        __asm _emit 0xda
        mov dword ptr [ebp - 10h], 0
        lea eax, [ebp - 10h]
        push eax
        push 1
        ; Exact mapped bytes FF 15 24 C2 68 00: call dword ptr [0x68c224]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x54f511
        __asm _emit 0x74
        __asm _emit 0x24
        push 67bffch
        push 67c030h
        ; Exact mapped bytes E8 19 11 F5 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x11
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        push 67c034h
        push 67c060h
        ; Exact mapped bytes E8 07 11 F5 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x11
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 13: je 0x54f52a
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [ebp - 10h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x54f511
        __asm _emit 0x75
        __asm _emit 0xe1
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 6ch], 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 70h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 80h], 1
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 7ch], 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 78h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 84h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 74h], 0
        ; Exact mapped bytes E8 85 B5 FC FF: call 0x51ab06
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
