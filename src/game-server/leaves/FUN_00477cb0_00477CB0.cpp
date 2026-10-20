// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00477CB0 .. +0xF4 bytes.
extern "C" __declspec(naked) void FUN_00477cb0_00477CB0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bf89h
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
        sub esp, 8
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 14h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5C 13 05 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x13
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 83 3D 54 CB 5D 00 00: cmp dword ptr [0x5dcb54], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 3A: jne 0x477d2e
        __asm _emit 0x75
        __asm _emit 0x3a
        push 1
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 60 0D 00 00: call 0x478a60
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 54 CB 5D 00: mov dword ptr [0x5dcb54], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 54 CB 5D 00: mov eax, dword ptr [0x5dcb54]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 50 F5 FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 0
        ; Exact mapped bytes 8B 0D 54 CB 5D 00: mov ecx, dword ptr [0x5dcb54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 4B F5 FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 0
        ; Exact mapped bytes 8B 15 58 CB 5D 00: mov edx, dword ptr [0x5dcb58]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        add edx, 1
        ; Exact mapped bytes 89 15 58 CB 5D 00: mov dword ptr [0x5dcb58], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes A1 54 CB 5D 00: mov eax, dword ptr [0x5dcb54]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 13 0D 00 00: call 0x478a60
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 0ch], 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3B 05 00 00: call 0x4782a0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5B 05 00 00: call 0x4782d0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 94 13 05 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x13
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 40 0A 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
