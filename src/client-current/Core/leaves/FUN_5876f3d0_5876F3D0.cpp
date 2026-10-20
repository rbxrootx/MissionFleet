// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876F3D0 .. +0x1A7 bytes.
extern "C" __declspec(naked) void FUN_5876f3d0_5876F3D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114ch]
        mov dword ptr [ebp - 0ch], ecx
        push 58895250h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AE 6C D1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x6c
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 0F 87 54 01 00 00: ja 0x5876f557
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 85 78 F5 76 58: jmp dword ptr [eax*4 + 0x5876f578]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xf5
        __asm _emit 0x76
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 114ch]
        mov dword ptr [ebp - 10h], edx
        push 58895250h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7A 6C D1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x6c
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 45 01 00 00: jmp 0x5876f571
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114ch]
        mov dword ptr [ebp - 14h], ecx
        push 588b5444h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 5B 6C D1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x6c
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 114ch]
        mov dword ptr [ebp - 18h], eax
        push 20a6ffh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 82 6C D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x6c
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0D 01 00 00: jmp 0x5876f571
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 114ch]
        mov dword ptr [ebp - 1ch], edx
        push 588b5444h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 23 6C D1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x6c
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114ch]
        mov dword ptr [ebp - 20h], ecx
        push 20a6ffh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 4A 6C D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x6c
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D5 00 00 00: jmp 0x5876f571
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 114ch]
        mov dword ptr [ebp - 24h], eax
        push 588b5444h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 EB 6B D1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 114ch]
        mov dword ptr [ebp - 28h], edx
        push 20a6ffh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 12 6C D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x6c
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x5876f571
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114ch]
        mov dword ptr [ebp - 2ch], ecx
        push 588b544ch
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B3 6B D1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 114ch]
        mov dword ptr [ebp - 30h], eax
        push 17fffah
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 DA 6B D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 68: jmp 0x5876f571
        __asm _emit 0xeb
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 114ch]
        mov dword ptr [ebp - 34h], edx
        push 588b5454h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7E 6B D1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 114ch]
        mov dword ptr [ebp - 38h], ecx
        push 58895250h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 65 6B D1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 114ch]
        mov dword ptr [ebp - 3ch], eax
        push 20a6ffh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 8C 6B D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1A: jmp 0x5876f571
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 114ch]
        mov dword ptr [ebp - 40h], edx
        push 58895250h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 30 6B D1 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x6b
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
