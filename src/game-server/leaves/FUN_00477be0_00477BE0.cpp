// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00477BE0 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_00477be0_00477BE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bf69h
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
        sub esp, 0ch
        mov dword ptr [ebp - 18h], 0cccccccch
        mov dword ptr [ebp - 14h], 0cccccccch
        mov dword ptr [ebp - 10h], 0cccccccch
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 25 14 05 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 06: jmp 0x477c30
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 3B 15 54 CB 5D 00: cmp edx, dword ptr [0x5dcb54]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 4B: je 0x477c86
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 2C F6 FF FF: call 0x477270
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8E FF FF FF: call 0x477be0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 05 F6 FF FF: call 0x477260
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 14 F6 FF FF: call 0x477280
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 78 0E 00 00: call 0x478af0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9C F4 FF FF: call 0x477120
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB A4: jmp 0x477c2a
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 8B 14 05 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x14
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
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 37 0B 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
