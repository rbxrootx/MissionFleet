// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048D250 .. +0x149 bytes.
extern "C" __declspec(naked) void FUN_0048d250_0048D250() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 18 E5 5D 00 00: cmp dword ptr [0x5de518], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x18
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x48d26e
        __asm _emit 0x74
        __asm _emit 0x11
        xor eax, eax
        ; Exact mapped bytes 83 3D 10 E5 5D 00 00: cmp dword ptr [0x5de510], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        setne al
        ; Exact mapped bytes E9 27 01 00 00: jmp 0x48d395
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c55ach
        ; Exact mapped bytes FF 15 3C 24 5E 00: call dword ptr [0x5e243c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 C7 00 00 00: je 0x48d34d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c55b4h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 00 E5 5D 00: mov dword ptr [0x5de500], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 00 E5 5D 00 00: cmp dword ptr [0x5de500], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x48d34d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c55c8h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 04 E5 5D 00: mov dword ptr [0x5de504], eax
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 04 E5 5D 00 00: cmp dword ptr [0x5de504], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x48d34d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5c55dch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 08 E5 5D 00: mov dword ptr [0x5de508], eax
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 08 E5 5D 00 00: cmp dword ptr [0x5de508], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 68: je 0x48d34d
        __asm _emit 0x74
        __asm _emit 0x68
        push 5c55ech
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 0C E5 5D 00: mov dword ptr [0x5de50c], eax
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 0C E5 5D 00 00: cmp dword ptr [0x5de50c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 4B: je 0x48d34d
        __asm _emit 0x74
        __asm _emit 0x4b
        push 5c5600h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 14 E5 5D 00: mov dword ptr [0x5de514], eax
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 14 E5 5D 00 00: cmp dword ptr [0x5de514], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2E: je 0x48d34d
        __asm _emit 0x74
        __asm _emit 0x2e
        push 5c5614h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 10 E5 5D 00: mov dword ptr [0x5de510], eax
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 10 E5 5D 00 00: cmp dword ptr [0x5de510], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x48d34d
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes C7 05 18 E5 5D 00 01 00 00 00: mov dword ptr [0x5de518], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 48: jmp 0x48d395
        __asm _emit 0xeb
        __asm _emit 0x48
        ; Exact mapped bytes C7 05 00 E5 5D 00 00 00 00 00: mov dword ptr [0x5de500], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 04 E5 5D 00 00 00 00 00: mov dword ptr [0x5de504], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 08 E5 5D 00 00 00 00 00: mov dword ptr [0x5de508], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 0C E5 5D 00 00 00 00 00: mov dword ptr [0x5de50c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 10 E5 5D 00 00 00 00 00: mov dword ptr [0x5de510], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 14 E5 5D 00 00 00 00 00: mov dword ptr [0x5de514], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 18 E5 5D 00 01 00 00 00: mov dword ptr [0x5de518], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x18
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
