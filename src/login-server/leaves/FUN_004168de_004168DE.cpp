// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004168DE .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_004168de_004168DE() {
    __asm {
        push ebx
        xor ebx, ebx
        ; Exact mapped bytes 39 1D 10 F6 44 00: cmp dword ptr [0x44f610], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x10
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        push esi
        push edi
        ; Exact mapped bytes 74 10: je 0x4168fb
        __asm _emit 0x74
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 39 1D 08 F6 44 00: cmp dword ptr [0x44f608], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        setne al
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x4169b2
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 43dce4h
        ; Exact mapped bytes FF 15 04 C2 43 00: call dword ptr [0x43c204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        cmp edi, ebx
        ; Exact mapped bytes 74 76: je 0x416982
        __asm _emit 0x74
        __asm _emit 0x76
        ; Exact mapped bytes 8B 35 FC C1 43 00: mov esi, dword ptr [0x43c1fc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push 43dcd0h
        push edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        cmp eax, ebx
        ; Exact mapped bytes A3 F8 F5 44 00: mov dword ptr [0x44f5f8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xf5
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 5F: je 0x416982
        __asm _emit 0x74
        __asm _emit 0x5f
        push 43dcbch
        push edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        cmp eax, ebx
        ; Exact mapped bytes A3 FC F5 44 00: mov dword ptr [0x44f5fc], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0xf5
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 4E: je 0x416982
        __asm _emit 0x74
        __asm _emit 0x4e
        push 43dcach
        push edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        cmp eax, ebx
        ; Exact mapped bytes A3 00 F6 44 00: mov dword ptr [0x44f600], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 3D: je 0x416982
        __asm _emit 0x74
        __asm _emit 0x3d
        push 43dc98h
        push edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        cmp eax, ebx
        ; Exact mapped bytes A3 04 F6 44 00: mov dword ptr [0x44f604], eax
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 2C: je 0x416982
        __asm _emit 0x74
        __asm _emit 0x2c
        push 43dc84h
        push edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        cmp eax, ebx
        ; Exact mapped bytes A3 0C F6 44 00: mov dword ptr [0x44f60c], eax
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 1B: je 0x416982
        __asm _emit 0x74
        __asm _emit 0x1b
        push 43dc74h
        push edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        cmp eax, ebx
        ; Exact mapped bytes A3 08 F6 44 00: mov dword ptr [0x44f608], eax
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x416982
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        pop eax
        ; Exact mapped bytes A3 10 F6 44 00: mov dword ptr [0x44f610], eax
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes EB 30: jmp 0x4169b2
        __asm _emit 0xeb
        __asm _emit 0x30
        ; Exact mapped bytes 89 1D F8 F5 44 00: mov dword ptr [0x44f5f8], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0xf8
        __asm _emit 0xf5
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 89 1D FC F5 44 00: mov dword ptr [0x44f5fc], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0xfc
        __asm _emit 0xf5
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 89 1D 00 F6 44 00: mov dword ptr [0x44f600], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 89 1D 04 F6 44 00: mov dword ptr [0x44f604], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 89 1D 08 F6 44 00: mov dword ptr [0x44f608], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 89 1D 0C F6 44 00: mov dword ptr [0x44f60c], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x0c
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 10 F6 44 00 01 00 00 00: mov dword ptr [0x44f610], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        ret
    }
}
