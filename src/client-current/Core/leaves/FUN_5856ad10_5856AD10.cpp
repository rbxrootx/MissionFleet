// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856AD10 .. +0x17E bytes.
extern "C" __declspec(naked) void FUN_5856ad10_5856AD10() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888398dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 14h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], ecx
        movzx eax, word ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A8 D0 FF FF: call 0x58567e00
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx], 588a9714h
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 3914h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 3918h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 391ch], 0c8h
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 3920h], 64h
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 3924h], 1
        push 5
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 9D F1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x9d
        __asm _emit 0xf1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 3a54h], eax
        push 8
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 9D F1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x9d
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 3a58h], eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 83 72 FE FF: call 0x58552060
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], 1
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 15 C0 40 89 58: call dword ptr [0x588940c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 392ch], eax
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 3930h], 0ffffffceh
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 3938h], 32h
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 3934h], 0ffffffe7h
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 393ch], 19h
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 3950h], 0
        push 100h
        push 0
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 3954h
        push ecx
        ; Exact mapped bytes E8 B4 1F 2E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x1f
        __asm _emit 0x2e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 58h], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 20h]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 C8 61 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x61
        __asm _emit 0x2c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
