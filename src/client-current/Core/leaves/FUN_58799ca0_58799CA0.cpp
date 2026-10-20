// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58799CA0 .. +0x13F bytes.
extern "C" __declspec(naked) void FUN_58799ca0_58799CA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891938h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0c0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 2ch], esi
        mov eax, dword ptr [ecx + 8]
        movzx edx, al
        cmp edx, 5
        ; Exact mapped bytes 0F 87 BD 00 00 00: ja 0x58799d9e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 95 E0 9D 79 58: jmp dword ptr [edx*4 + 0x58799de0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0x9d
        __asm _emit 0x79
        __asm _emit 0x58
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 11 06: movups xmmword ptr [esi], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x06
        mov dword ptr [esi + 10h], 0
        mov dword ptr [esi + 14h], 0fh
        mov byte ptr [esi], 0
        ; Exact mapped bytes EB 57: jmp 0x58799d58
        __asm _emit 0xeb
        __asm _emit 0x57
        mov ecx, dword ptr [ecx]
        test ecx, ecx
        ; Exact mapped bytes 74 E1: je 0x58799ce8
        __asm _emit 0x74
        __asm _emit 0xe1
        lea edx, [ebp - 2ch]
        shr eax, 8
        push edx
        lea edx, [ebp - 30h]
        and al, 1
        push edx
        push ecx
        movzx eax, al
        push eax
        ; Exact mapped bytes E8 B2 02 00 00: call 0x58799fd0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, esi
        push dword ptr [ebp - 30h]
        push dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 82 C6 D6 FF: call 0x585063b0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc6
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes EB 28: jmp 0x58799d58
        __asm _emit 0xeb
        __asm _emit 0x28
        cmp byte ptr [ecx], 0
        mov edx, 588a3c04h
        mov eax, 588a3c0ch
        mov ecx, esi
        cmove eax, edx
        push eax
        ; Exact mapped bytes E8 88 FD D0 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfd
        __asm _emit 0xd0
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x58799d58
        __asm _emit 0xeb
        __asm _emit 0x0e
        push dword ptr [ecx + 4]
        push dword ptr [ecx]
        push esi
        ; Exact mapped bytes E8 BB 2E 00 00: call 0x5879cc10
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, esi
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
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 E0 72 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x72
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push dword ptr [ecx + 4]
        push dword ptr [ecx]
        push esi
        ; Exact mapped bytes E8 5F 2F 00 00: call 0x5879cce0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB D2: jmp 0x58799d55
        __asm _emit 0xeb
        __asm _emit 0xd2
        ; Exact mapped bytes F2 0F 10 01: movsd xmm0, qword ptr [ecx]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x01
        push 0
        push 11h
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        push esi
        ; Exact mapped bytes E8 47 2E 00 00: call 0x5879cbe0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes EB BA: jmp 0x58799d58
        __asm _emit 0xeb
        __asm _emit 0xba
        push 1
        lea ecx, [ebp - 0cch]
        ; Exact mapped bytes E8 55 36 D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x36
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 0cch]
        mov dword ptr [ebp - 4], 0
        push 588b6dech
        push eax
        ; Exact mapped bytes E8 2D A8 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xa8
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 0cch]
        push eax
        ; Exact mapped bytes E8 2B 44 D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x44
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 51 0F 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
