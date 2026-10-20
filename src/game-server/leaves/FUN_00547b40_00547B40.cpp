// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00547B40 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_00547b40_00547B40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D 44 EB 5D 00 00: cmp dword ptr [0x5deb44], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 7D: jne 0x547bcf
        __asm _emit 0x75
        __asm _emit 0x7d
        ; Exact mapped bytes A1 44 EB 5D 00: mov eax, dword ptr [0x5deb44]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        add eax, 1
        ; Exact mapped bytes A3 44 EB 5D 00: mov dword ptr [0x5deb44], eax
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 44 EB 5D 00 00: cmp dword ptr [0x5deb44], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x547b79
        __asm _emit 0x75
        __asm _emit 0x11
        push 2eh
        push 5ca280h
        ; Exact mapped bytes E8 8C CE FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x547b79
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x547b52
        __asm _emit 0x75
        __asm _emit 0xd3
        ; Exact mapped bytes FF 15 8C 23 5E 00: call dword ptr [0x5e238c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffh
        cmp edx, 4
        ; Exact mapped bytes 7D 15: jge 0x547bab
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x547bab
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x547bb2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 89 0D 40 EB 5D 00: mov dword ptr [0x5deb40], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 40 EB 5D 00 00: cmp dword ptr [0x5deb40], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0B: jne 0x547bcf
        __asm _emit 0x75
        __asm _emit 0x0b
        push 5de990h
        ; Exact mapped bytes FF 15 18 24 5E 00: call dword ptr [0x5e2418]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A1 44 EB 5D 00: mov eax, dword ptr [0x5deb44]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0xeb
        __asm _emit 0x5d
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
