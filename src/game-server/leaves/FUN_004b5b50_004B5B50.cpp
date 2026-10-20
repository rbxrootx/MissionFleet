// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B5B50 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_004b5b50_004B5B50() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 68 40 01 00 00: push 0x140
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes A1 5C 02 5E 00: mov eax, dword ptr [0x5e025c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 7C 22 5E 00: call dword ptr [0x5e227c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 58 02 5E 00: mov dword ptr [0x5e0258], eax
        __asm _emit 0xa3
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 58 02 5E 00 00: cmp dword ptr [0x5e0258], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x4b5b78
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 2F: jmp 0x4b5ba7
        __asm _emit 0xeb
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 0D 58 02 5E 00: mov ecx, dword ptr [0x5e0258]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D 4C 02 5E 00: mov dword ptr [0x5e024c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 50 02 5E 00 00 00 00 00: mov dword ptr [0x5e0250], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 54 02 5E 00 00 00 00 00: mov dword ptr [0x5e0254], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 44 02 5E 00 10 00 00 00: mov dword ptr [0x5e0244], 0x10
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 01 00 00 00: mov eax, 1
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
