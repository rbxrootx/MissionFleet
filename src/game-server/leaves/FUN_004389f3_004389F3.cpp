// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004389F3 .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_004389f3_004389F3() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, esp
        push 0
        push 80000000h
        push 4
        push 0
        push 0
        push 40000000h
        push 5d2f4ch
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C3 FD 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes A3 44 2F 5D 00: mov dword ptr [0x5d2f44], eax
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 44 2F 5D 00 00: cmp dword ptr [0x5d2f44], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 47: je 0x438a72
        __asm _emit 0x74
        __asm _emit 0x47
        mov esi, esp
        push 2
        push 0
        push 0
        ; Exact mapped bytes A1 44 2F 5D 00: mov eax, dword ptr [0x5d2f44]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9A FD 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 4F 00 00 00: call 0x438a9e
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, esp
        ; Exact mapped bytes 8B 15 44 2F 5D 00: mov edx, dword ptr [0x5d2f44]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 78 FD 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfd
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 44 2F 5D 00 00 00 00 00: mov dword ptr [0x5d2f44], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 48 2F 5D 00 00: cmp dword ptr [0x5d2f48], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 15: je 0x438a90
        __asm _emit 0x74
        __asm _emit 0x15
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 48 2F 5D 00: call dword ptr [0x5d2f48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 52 FD 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x438a92
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        cmp ebp, esp
        ; Exact mapped bytes E8 46 FD 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfd
        __asm _emit 0x06
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
