// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58740300 .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_58740300_58740300() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888f1fdh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1ch
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
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7C 47 00 00: call 0x58744ac0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588b49d4h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 18h], eax
        push 23h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 47 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x47
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AE 5B D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x5b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 20h], ecx
        push 24h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 47 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x47
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 80 5B D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x5b
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 28h], ecx
        push 23h
        ; Exact mapped bytes 8B 0D 94 07 96 58: mov ecx, dword ptr [0x58960794]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A 47 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x47
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E3 BC D4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xbc
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 24 C2 DA FF: call 0x584ec600
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc2
        __asm _emit 0xda
        __asm _emit 0xff
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
