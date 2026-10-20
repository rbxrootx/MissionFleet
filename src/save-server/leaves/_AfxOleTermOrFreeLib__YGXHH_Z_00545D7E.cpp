// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00545D7E .. +0x5F bytes.
extern "C" __declspec(naked) void _AfxOleTermOrFreeLib__YGXHH_Z_00545D7E() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0B: je 0x545d92
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 5A FF FF FF: call 0x545cea
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 47: jmp 0x545dd9
        __asm _emit 0xeb
        __asm _emit 0x47
        ; Exact mapped bytes 83 3D 20 71 68 00 00: cmp dword ptr [0x687120], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1A: jne 0x545db5
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes FF 15 EC B8 68 00: call dword ptr [0x68b8ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 C4 8F 67 00: mov dword ptr [0x678fc4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x8f
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 71 68 00: mov ecx, dword ptr [0x687120]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        add ecx, 1
        ; Exact mapped bytes 89 0D 20 71 68 00: mov dword ptr [0x687120], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 EC B8 68 00: call dword ptr [0x68b8ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 2B 05 C4 8F 67 00: sub eax, dword ptr [0x678fc4]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0x8f
        __asm _emit 0x67
        __asm _emit 0x00
        cmp eax, 0ea60h
        ; Exact mapped bytes 76 11: jbe 0x545dd9
        __asm _emit 0x76
        __asm _emit 0x11
        ; Exact mapped bytes FF 15 08 C3 68 00: call dword ptr [0x68c308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 EC B8 68 00: call dword ptr [0x68b8ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 C4 8F 67 00: mov dword ptr [0x678fc4], eax
        __asm _emit 0xa3
        __asm _emit 0xc4
        __asm _emit 0x8f
        __asm _emit 0x67
        __asm _emit 0x00
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
