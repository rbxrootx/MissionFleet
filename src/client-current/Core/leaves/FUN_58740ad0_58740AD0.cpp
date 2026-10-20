// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58740AD0 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_58740ad0_58740AD0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888f28fh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 34h
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
        ; Exact mapped bytes E8 AC 3F 00 00: call 0x58744ac0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx], 588b4a2ch
        push 198h
        ; Exact mapped bytes E8 D6 04 0F 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x04
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 16: je 0x58740b54
        __asm _emit 0x74
        __asm _emit 0x16
        push 1
        push 0
        push 588b49f8h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 61 F8 03 00: call 0x587803b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58740b5b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 58h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8D 3F D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x3f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8E 53 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x53
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 60h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 58h]
        mov dword ptr [ebp - 2ch], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 59 3F D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x3f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 5A 53 D4 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x53
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 2E 3F D4 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x3f
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B7 B4 D4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb4
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 F8 B9 DA FF: call 0x584ec600
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb9
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
