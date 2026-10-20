// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00470EF0 .. +0xD8 bytes.
extern "C" __declspec(naked) void FUN_00470ef0_00470EF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes 83 3D B8 8D 68 00 00: cmp dword ptr [0x688db8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x470f04
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 AC A9 FF FF: call 0x46b8b0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        push 104h
        push 687328h
        push 0
        ; Exact mapped bytes FF 15 F4 B7 68 00: call dword ptr [0x68b7f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 64 72 68 00 28 73 68 00: mov dword ptr [0x687264], 0x687328
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x28
        __asm _emit 0x73
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 D0 8D 68 00: mov eax, dword ptr [0x688dd0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 75 0B: jne 0x470f37
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 15 64 72 68 00: mov edx, dword ptr [0x687264]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 08: jmp 0x470f3f
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes A1 D0 8D 68 00: mov eax, dword ptr [0x688dd0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        lea edx, [ebp - 4]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 76 00 00 00: call 0x470fd0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        push 80h
        push 63ee74h
        push 2
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4]
        push ecx
        ; Exact mapped bytes E8 48 58 FF FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0A: jne 0x470f8e
        __asm _emit 0x75
        __asm _emit 0x0a
        push 8
        ; Exact mapped bytes E8 05 54 FF FF: call 0x466390
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        lea edx, [ebp - 4]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 23 00 00 00: call 0x470fd0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1
        ; Exact mapped bytes A3 48 72 68 00: mov dword ptr [0x687248], eax
        __asm _emit 0xa3
        __asm _emit 0x48
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 89 0D 4C 72 68 00: mov dword ptr [0x68724c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
