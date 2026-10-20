// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C0EE0 .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_584c0ee0_584C0EE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887ea87h
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
        mov dword ptr [eax], 58895a90h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 2d4h], 1
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 80 CC 01 00 00: movss dword ptr [eax + 0x1cc], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x80
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes F3 0F 11 81 D0 01 00 00: movss dword ptr [ecx + 0x1d0], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x81
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0d74h
        ; Exact mapped bytes E8 B6 00 37 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 19: je 0x584c0f7a
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BB DE 28 00: call 0x5874ee30
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xde
        __asm _emit 0x28
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584c0f81
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax + 8], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584c0fa9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 7D 56: jge 0x584c1005
        __asm _emit 0x7d
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 26 3A FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x3a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 268h]
        shr edx, cl
        and edx, 1
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 14h]
        mov byte ptr [eax + 18ch], dl
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 FC 39 FC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x39
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 26ch]
        shr edx, cl
        and edx, 1
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 14h]
        mov byte ptr [eax + 1ach], dl
        ; Exact mapped bytes EB 9B: jmp 0x584c0fa0
        __asm _emit 0xeb
        __asm _emit 0x9b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A3 05 00 00: call 0x584c15b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
