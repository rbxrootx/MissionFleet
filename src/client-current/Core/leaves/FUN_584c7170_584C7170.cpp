// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C7170 .. +0x16D bytes.
extern "C" __declspec(naked) void FUN_584c7170_584C7170() {
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
        ; Exact mapped bytes E8 6A 0D FC FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 11h]
        push ecx
        ; Exact mapped bytes E8 00 01 FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 30h], eax
        mov dl, byte ptr [ebp - 12h]
        mov byte ptr [ebp - 0dh], dl
        mov eax, dword ptr [ebp - 30h]
        push eax
        movzx ecx, byte ptr [ebp - 0dh]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 A3 1E FE FF: call 0x584a9070
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 14h]
        add edx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 20h], 0fh
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 24h], ecx
        xor edx, edx
        mov byte ptr [ebp - 0eh], dl
        lea eax, [ebp - 0eh]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 15 B1 FD FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 73 51: jae 0x584c7265
        __asm _emit 0x73
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 34 36 FE FF: call 0x584aa850
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0fh
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 78 31 FE FF: call 0x584aa3a0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D6 0C FC FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 F0 1E FE FF: call 0x584a9130
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 61 00 FC FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 5E FB FB FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfb
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax + 10h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + 14h], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 68 34 FE FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 51 34 FE FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov byte ptr [ebp - 0fh], 0
        lea ecx, [ebp - 0fh]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        add edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes E8 2A 33 FE FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 6F 0C FC FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0c
        __asm _emit 0xfc
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
