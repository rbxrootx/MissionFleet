// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506720 .. +0xD7 bytes.
extern "C" __declspec(naked) void FUN_58506720_58506720() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588805ffh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CE 9C 32 00: call 0x58830426
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x9c
        __asm _emit 0x32
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        ; Exact mapped bytes E8 D6 F6 FF FF: call 0x58505e40
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0ch
        ; Exact mapped bytes E8 C7 F6 FF FF: call 0x58505e40
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 14h
        ; Exact mapped bytes E8 D8 F6 FF FF: call 0x58505e60
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1ch
        ; Exact mapped bytes E8 C9 F6 FF FF: call 0x58505e60
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 24h
        ; Exact mapped bytes E8 9A F6 FF FF: call 0x58505e40
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 2ch
        ; Exact mapped bytes E8 8B F6 FF FF: call 0x58505e40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 6
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 12: je 0x585067d1
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 4D 9F 32 00: call 0x58830719
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x9f
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB 0B: jmp 0x585067dc
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 588a3bf4h
        ; Exact mapped bytes E8 F2 7F 32 00: call 0x5882e7cd
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x7f
        __asm _emit 0x32
        __asm _emit 0x00
        nop
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
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
