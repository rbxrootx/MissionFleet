// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882CCF0 .. +0x177 bytes.
extern "C" __declspec(naked) void FUN_5882ccf0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588926c7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 24h
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
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x5882ce4c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor eax, 7c8ba106h
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp + 10h]
        xor ecx, 0f3a91cd0h
        mov dword ptr [ebp - 24h], ecx
        imul edx, dword ptr [ebp - 24h], 11h
        add edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 74 33: je 0x5882cd7f
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 40h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 13: je 0x5882cd6e
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5882cd75
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 40h], 0
        push 9ch
        ; Exact mapped bytes E8 7B 42 00 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x5882cdae
        __asm _emit 0x74
        __asm _emit 0x12
        push 800h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C7 03 00 00: call 0x5882d170
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x5882cdb5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 30h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [eax + 40h], ecx
        push 0
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 40h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 40h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 48h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4ch], 1
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 40h]
        ; Exact mapped bytes E8 AD F2 C5 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf2
        __asm _emit 0xc5
        __asm _emit 0xff
        mov ecx, eax
        mov eax, dword ptr [ebp - 18h]
        xor edx, edx
        div ecx
        imul edx, edx, 0dh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 54h], edx
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 40h]
        ; Exact mapped bytes E8 90 F2 C5 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf2
        __asm _emit 0xc5
        __asm _emit 0xff
        mov ecx, eax
        mov eax, dword ptr [ebp - 18h]
        xor edx, edx
        div ecx
        imul edx, edx, 11h
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 58h], edx
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002030eh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 47 FB FF FF: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0A: jmp 0x5882ce56
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4ch], 0
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
