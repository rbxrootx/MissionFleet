// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056B27F .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_0056b27f_0056B27F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fe44h
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
        push ecx
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 1ch], ecx
        push 385h
        push 5d053ch
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 A9 FE F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x56b2d1
        __asm _emit 0x75
        __asm _emit 0x14
        push 386h
        push 5d053ch
        ; Exact mapped bytes E8 34 97 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x97
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b2d1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x56b2b7
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 57 30 FC FF: call 0x52e333
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x30
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 74 1C: je 0x56b322
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 78h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 78h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x56b2fd
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 78h], ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 20h
        ; Exact mapped bytes E8 76 23 F8 FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x23
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 4ch], 1
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 78: call dword ptr [edx + 0x78]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x78
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 05: jne 0x56b35f
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 4D 4A F6 FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x4a
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 3D: jmp 0x56b39e
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 584850h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 22 FD F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56b386
        __asm _emit 0x75
        __asm _emit 0x14
        push 399h
        push 5d053ch
        ; Exact mapped bytes E8 7F 96 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b386
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x56b361
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 3A 2F FC FF: call 0x52e2cf
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x2f
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        push 0
    }
}
