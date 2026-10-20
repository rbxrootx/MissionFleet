// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00571870 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_00571870_00571870() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f6a9h
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
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EC 54 F6 FF: call 0x4d6d80
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x54
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 4A 06 00 00: call 0x571ef0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 16 09 FC FF: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x09
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 63cc64h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 30h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 34h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 38h], 0
        push 3
        ; Exact mapped bytes E8 9B 14 FD FF: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D F8 71 68 00 00: cmp dword ptr [0x6871f8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf8
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 3B: jne 0x571923
        __asm _emit 0x75
        __asm _emit 0x3b
        push 2
        push 63cc48h
        push 63cc40h
        ; Exact mapped bytes FF 15 8C B9 68 00: call dword ptr [0x68b98c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 00 72 68 00: mov dword ptr [0x687200], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        push 0c8h
        push 63cc54h
        push 63cc40h
        ; Exact mapped bytes FF 15 8C B9 68 00: call dword ptr [0x68b98c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 FC 71 68 00: mov dword ptr [0x6871fc], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 F8 71 68 00 01 00 00 00: mov dword ptr [0x6871f8], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        ; Exact mapped bytes E8 82 15 FD FF: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        push 35h
        push 67c7a0h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 26 89 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x89
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
