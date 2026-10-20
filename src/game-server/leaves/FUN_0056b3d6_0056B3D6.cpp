// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056B3D6 .. +0x11C bytes.
extern "C" __declspec(naked) void FUN_0056b3d6_0056B3D6() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fe4eh
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
        push 3aah
        push 5d053ch
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 52 FD F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x56b428
        __asm _emit 0x75
        __asm _emit 0x14
        push 3abh
        push 5d053ch
        ; Exact mapped bytes E8 DD 95 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b428
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x56b40e
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 00 2F FC FF: call 0x52e333
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x2f
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
        ; Exact mapped bytes 74 1C: je 0x56b479
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
        ; Exact mapped bytes 75 D5: jne 0x56b454
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 78h], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 7C: call dword ptr [eax + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x7c
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 05: jne 0x56b4a3
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 09 49 F6 FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x49
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 20h
        ; Exact mapped bytes E8 04 22 F8 FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 4ch], 1
        ; Exact mapped bytes EB 3D: jmp 0x56b4f7
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 584850h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C9 FB F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfb
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56b4df
        __asm _emit 0x75
        __asm _emit 0x14
        push 3c0h
        push 5d053ch
        ; Exact mapped bytes E8 26 95 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b4df
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x56b4ba
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 E1 2D FC FF: call 0x52e2cf
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x2d
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        push 0
    }
}
