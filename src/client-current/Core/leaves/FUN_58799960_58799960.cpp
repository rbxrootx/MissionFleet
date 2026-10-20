// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58799960 .. +0x184 bytes.
extern "C" __declspec(naked) void FUN_58799960_58799960() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588918eeh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 154h
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
        mov eax, dword ptr [ecx + 8]
        and eax, 0ffh
        cmp eax, 5
        ; Exact mapped bytes 0F 87 85 00 00 00: ja 0x58799a21
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 E4 9A 79 58: jmp dword ptr [eax*4 + 0x58799ae4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xe4
        __asm _emit 0x9a
        __asm _emit 0x79
        __asm _emit 0x58
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [ecx + 4]
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
        ; Exact mapped bytes E8 93 76 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x76
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
        cmp dword ptr [ecx + 4], 7fffffffh
        ; Exact mapped bytes 72 D9: jb 0x587999a3
        __asm _emit 0x72
        __asm _emit 0xd9
        ; Exact mapped bytes 0F 87 92 00 00 00: ja 0x58799a62
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx], -1
        ; Exact mapped bytes 0F 87 89 00 00 00: ja 0x58799a62
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB C8: jmp 0x587999a3
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 10 01: movsd xmm0, qword ptr [ecx]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x01
        ; Exact mapped bytes 66 0F 2F 05 C8 70 8B 58: comisd xmm0, xmmword ptr [0x588b70c8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x70
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 0F 82 B6 00 00 00: jb 0x58799aa3
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 0D B8 70 8B 58: movsd xmm1, qword ptr [0x588b70b8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x70
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F C8: comisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 82 A4 00 00 00: jb 0x58799aa3
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9C 7B 09 00: call 0x588315a0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x7b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB A2: jmp 0x587999a8
        __asm _emit 0xeb
        __asm _emit 0xa2
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 13 45 D0: movlpd qword ptr [ebp - 0x30], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xd0
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes EB 92: jmp 0x587999a8
        __asm _emit 0xeb
        __asm _emit 0x92
        xor eax, eax
        cmp byte ptr [ecx], al
        setne al
        xor edx, edx
        ; Exact mapped bytes EB 87: jmp 0x587999a8
        __asm _emit 0xeb
        __asm _emit 0x87
        push 1
        lea ecx, [ebp - 160h]
        ; Exact mapped bytes E8 D2 39 D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x39
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 160h]
        mov dword ptr [ebp - 4], 4
        push 588b6ecch
        push eax
        ; Exact mapped bytes E8 AA AB D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xab
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 160h]
        push eax
        ; Exact mapped bytes E8 A8 47 D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x47
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 5
        ; Exact mapped bytes E8 CE 12 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 0c8h]
        ; Exact mapped bytes E8 91 39 D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x39
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 0c8h]
        mov dword ptr [ebp - 4], 0
        push 588b6e90h
        push eax
        ; Exact mapped bytes E8 69 AB D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xab
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 0c8h]
        push eax
        ; Exact mapped bytes E8 67 47 D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x47
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 8D 12 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 0c8h]
        ; Exact mapped bytes E8 50 39 D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x39
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 0c8h]
        mov dword ptr [ebp - 4], 2
        push 588b6eb0h
        push eax
        ; Exact mapped bytes E8 28 AB D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xab
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 0c8h]
        push eax
        ; Exact mapped bytes E8 26 47 D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x47
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 3
        ; Exact mapped bytes E8 4C 12 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
