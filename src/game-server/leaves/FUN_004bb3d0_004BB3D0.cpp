// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BB3D0 .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_004bb3d0_004BB3D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes 83 3D FC 1F 5D 00 00: cmp dword ptr [0x5d1ffc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 1E: jne 0x4bb404
        __asm _emit 0x75
        __asm _emit 0x1e
        push 167h
        push 58cd14h
        push 2
        push 351h
        ; Exact mapped bytes E8 34 EE FE FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes A3 FC 1F 5D 00: mov dword ptr [0x5d1ffc], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 FC 1F 5D 00: mov eax, dword ptr [0x5d1ffc]
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x5d
        __asm _emit 0x00
        mov byte ptr [eax], 0
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 09: jmp 0x4bb41e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 0ch
        mov eax, dword ptr [edx + 5d1ffch]
        push eax
        push 58cd20h
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ecx + 5d1ff8h]
        push edx
        push 3
        ; Exact mapped bytes A1 FC 1F 5D 00: mov eax, dword ptr [0x5d1ffc]
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 26 02 00 00: call 0x4bb670
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 7D 46: jge 0x4bb499
        __asm _emit 0x7d
        __asm _emit 0x46
        push 58cd0ch
        ; Exact mapped bytes 8B 0D FC 1F 5D 00: mov ecx, dword ptr [0x5d1ffc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 EC E9 FE FF: call 0x4a9e50
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        imul edx, edx, 0ch
        mov eax, dword ptr [edx + 5d1ffch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ecx + 5d1ffch]
        push edx
        ; Exact mapped bytes E8 A7 EA FF FF: call 0x4b9f30
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4bb497
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 2E: jmp 0x4bb4c7
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x4bb4a6
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes A1 FC 1F 5D 00: mov eax, dword ptr [0x5d1ffc]
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 26: jmp 0x4bb4cc
        __asm _emit 0xeb
        __asm _emit 0x26
        push 2
        ; Exact mapped bytes A1 FC 1F 5D 00: mov eax, dword ptr [0x5d1ffc]
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 0D F8 FE FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes C7 05 FC 1F 5D 00 00 00 00 00: mov dword ptr [0x5d1ffc], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x1f
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 14 20 5D 00: mov eax, dword ptr [0x5d2014]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x20
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x4bb4cc
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 49 FF FF FF: jmp 0x4bb415
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
