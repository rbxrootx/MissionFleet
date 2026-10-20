// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873E8E0 .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_5873e8e0_5873E8E0() {
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
        ; Exact mapped bytes E8 9C 61 00 00: call 0x58744ac0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588b4924h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 18h], eax
        push 0
        ; Exact mapped bytes 8B 0D B0 07 96 58: mov ecx, dword ptr [0x589607b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD 61 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x61
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CE 75 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x75
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx + 60h]
        mov dword ptr [ebp - 20h], ecx
        push 1
        ; Exact mapped bytes 8B 0D B0 07 96 58: mov ecx, dword ptr [0x589607b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F 61 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x61
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A0 75 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x75
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 28h], ecx
        push 0
        ; Exact mapped bytes 8B 0D B0 07 96 58: mov ecx, dword ptr [0x589607b0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A 61 D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x61
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 03 D7 D4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd7
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 44 DC DA FF: call 0x584ec600
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xdc
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
