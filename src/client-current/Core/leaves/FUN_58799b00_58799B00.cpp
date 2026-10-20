// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58799B00 .. +0x17F bytes.
extern "C" __declspec(naked) void FUN_58799b00_58799B00() {
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
        ; Exact mapped bytes 0F 87 80 00 00 00: ja 0x58799bbc
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 80 9C 79 58: jmp dword ptr [eax*4 + 0x58799c80]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x9c
        __asm _emit 0x79
        __asm _emit 0x58
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 7F 0F: jg 0x58799b58
        __asm _emit 0x7f
        __asm _emit 0x0f
        ; Exact mapped bytes 0F 8C AE 00 00 00: jl 0x58799bfd
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 0F 82 A5 00 00 00: jb 0x58799bfd
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes E8 DE 74 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes F2 0F 10 01: movsd xmm0, qword ptr [ecx]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x01
        ; Exact mapped bytes 66 0F 2F 05 B0 51 89 58: comisd xmm0, xmmword ptr [0x588951b0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 0F 82 B6 00 00 00: jb 0x58799c3e
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 0D C0 70 8B 58: movsd xmm1, qword ptr [0x588b70c0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x70
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F C8: comisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 82 A4 00 00 00: jb 0x58799c3e
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D1 79 09 00: call 0x58831570
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB BC: jmp 0x58799b5d
        __asm _emit 0xeb
        __asm _emit 0xbc
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
        ; Exact mapped bytes EB AC: jmp 0x58799b5d
        __asm _emit 0xeb
        __asm _emit 0xac
        xor eax, eax
        cmp byte ptr [ecx], al
        setne al
        xor edx, edx
        ; Exact mapped bytes EB A1: jmp 0x58799b5d
        __asm _emit 0xeb
        __asm _emit 0xa1
        push 1
        lea ecx, [ebp - 160h]
        ; Exact mapped bytes E8 37 38 D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x38
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 160h]
        mov dword ptr [ebp - 4], 4
        push 588b6f2ch
        push eax
        ; Exact mapped bytes E8 0F AA D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xaa
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 160h]
        push eax
        ; Exact mapped bytes E8 0D 46 D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x46
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 5
        ; Exact mapped bytes E8 33 11 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 0c8h]
        ; Exact mapped bytes E8 F6 37 D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x37
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 0c8h]
        mov dword ptr [ebp - 4], 0
        push 588b6ef0h
        push eax
        ; Exact mapped bytes E8 CE A9 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa9
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 0c8h]
        push eax
        ; Exact mapped bytes E8 CC 45 D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x45
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 F2 10 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 0c8h]
        ; Exact mapped bytes E8 B5 37 D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x37
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 0c8h]
        mov dword ptr [ebp - 4], 2
        push 588b6f10h
        push eax
        ; Exact mapped bytes E8 8D A9 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xa9
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 0c8h]
        push eax
        ; Exact mapped bytes E8 8B 45 D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 3
        ; Exact mapped bytes E8 B1 10 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
