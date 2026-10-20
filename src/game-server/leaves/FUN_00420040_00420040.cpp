// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420040 .. +0xF4 bytes.
extern "C" __declspec(naked) void FUN_00420040_00420040() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a049h
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
        ; Exact mapped bytes E8 CC 8F 0A 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x8f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 83 3D 3C 2F 5D 00 00: cmp dword ptr [0x5d2f3c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 3A: jne 0x4200be
        __asm _emit 0x75
        __asm _emit 0x3a
        push 1
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 60 0D 00 00: call 0x420df0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 3C 2F 5D 00: mov dword ptr [0x5d2f3c], eax
        __asm _emit 0xa3
        __asm _emit 0x3c
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 3C 2F 5D 00: mov eax, dword ptr [0x5d2f3c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 50 F5 FF FF: call 0x41f5f0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 0
        ; Exact mapped bytes 8B 0D 3C 2F 5D 00: mov ecx, dword ptr [0x5d2f3c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 4B F5 FF FF: call 0x41f600
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [eax], 0
        ; Exact mapped bytes 8B 15 40 2F 5D 00: mov edx, dword ptr [0x5d2f40]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        add edx, 1
        ; Exact mapped bytes 89 15 40 2F 5D 00: mov dword ptr [0x5d2f40], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes A1 3C 2F 5D 00: mov eax, dword ptr [0x5d2f3c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x2f
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 13 0D 00 00: call 0x420df0
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
        ; Exact mapped bytes E8 3B 05 00 00: call 0x420630
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5B 05 00 00: call 0x420660
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
        ; Exact mapped bytes E8 04 90 0A 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x90
        __asm _emit 0x0a
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
        ; Exact mapped bytes E8 B0 86 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
