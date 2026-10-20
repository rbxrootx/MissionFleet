// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851D600 .. +0x175 bytes.
extern "C" __declspec(naked) void FUN_5851d600_5851D600() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ecbdh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 2ch
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
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 DA A8 F6 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa8
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 70 9C F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x9c
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 30h], eax
        mov dl, byte ptr [ebp - 11h]
        mov byte ptr [ebp - 0dh], dl
        mov eax, dword ptr [ebp - 30h]
        push eax
        movzx ecx, byte ptr [ebp - 0dh]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 13 BA F8 FF: call 0x584a9070
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xba
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 14h]
        add edx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 20h], 7
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 28h], ecx
        xor edx, edx
        mov byte ptr [ebp - 0eh], dl
        lea eax, [ebp - 0eh]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        lea ecx, [ebp - 0fh]
        ; Exact mapped bytes E8 85 4C F8 FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x4c
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 73 51: jae 0x5851d6f5
        __asm _emit 0x73
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 64 5F FE FF: call 0x58503610
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 7
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 68 53 FE FF: call 0x58502a20
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 46 A8 F6 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa8
        __asm _emit 0xf6
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 A0 3B FE FF: call 0x58501270
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 D1 9B F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x9b
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 CE 96 F6 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x96
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 88 56 FE FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 28h]
        lea edx, [ecx + eax*2]
        push edx
        ; Exact mapped bytes E8 6E 56 FE FF: call 0x58502da0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x56
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        xor eax, eax
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 28h]
        lea ecx, [eax + edx*2]
        push ecx
        ; Exact mapped bytes E8 92 24 FB FF: call 0x584cfbe0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        lea ecx, [ebp - 0fh]
        ; Exact mapped bytes E8 D7 A7 F6 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa7
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 1ch]
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
