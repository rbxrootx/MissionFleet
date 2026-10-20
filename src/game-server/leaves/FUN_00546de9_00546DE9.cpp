// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00546DE9 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_00546de9_00546DE9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 19eh
        push 5c8c2ch
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 58 43 FB FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x43
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x546e22
        __asm _emit 0x75
        __asm _emit 0x14
        push 19fh
        push 5c8c2ch
        ; Exact mapped bytes E8 E3 DB FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546e22
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x546e08
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 15 E7 FE FF: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 2
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 B8 23 5E 00: call dword ptr [0x5e23b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 04: jne 0x546e4d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3D: jmp 0x546e8a
        __asm _emit 0xeb
        __asm _emit 0x3d
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 04 06 FD FF: call 0x517460
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8E 00 00 00: call 0x546ef9
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x546e73
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 17: jmp 0x546e8a
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 7ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 78h], ecx
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
