// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58840DE9 .. +0x441 bytes.
extern "C" __declspec(naked) void FUN_58840de9_58840DE9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1a4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push edi
        mov dword ptr [ebp - 1a4h], ecx
        and dword ptr [ebp - 17ch], 0
        and dword ptr [ebp - 188h], 0
        and dword ptr [ebp - 184h], 0
        mov byte ptr [ebp - 60h], 0
        push 7
        pop ecx
        xor eax, eax
        lea edi, [ebp - 5fh]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        mov byte ptr [ebp - 164h], 0
        push 103h
        push 0
        lea eax, [ebp - 163h]
        push eax
        ; Exact mapped bytes E8 CD BF 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        and dword ptr [ebp - 18ch], 0
        and dword ptr [ebp - 180h], 0
        mov byte ptr [ebp - 40h], 0
        xor eax, eax
        lea edi, [ebp - 3fh]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        push 10h
        push 0
        lea eax, [ebp - 174h]
        push eax
        ; Exact mapped bytes E8 9C BF 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 174h]
        push eax
        ; Exact mapped bytes FF 15 48 42 89 58: call dword ptr [0x58894248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        movzx eax, word ptr [ebp - 168h]
        push eax
        movzx eax, word ptr [ebp - 16ah]
        push eax
        movzx eax, word ptr [ebp - 16ch]
        push eax
        movzx eax, word ptr [ebp - 16eh]
        push eax
        movzx eax, word ptr [ebp - 172h]
        push eax
        movzx eax, word ptr [ebp - 174h]
        push eax
        push 588f2f8ch
        ; Exact mapped bytes E8 95 B4 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 97 BC CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xbc
        __asm _emit 0xcc
        __asm _emit 0xff
        add esp, 20h
        lea eax, [ebp - 188h]
        push eax
        lea eax, [ebp - 17ch]
        push eax
        push 0
        push 0f003fh
        push 0
        push 0
        push 0
        push 588f2fb0h
        ; Exact mapped bytes E8 62 B4 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push 80000001h
        ; Exact mapped bytes FF 15 40 40 89 58: call dword ptr [0x58894040]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [ebp - 188h], 2
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x58840f9f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 184h], 20h
        lea eax, [ebp - 184h]
        push eax
        lea eax, [ebp - 60h]
        push eax
        push 0
        push 0
        push 588f2fech
        ; Exact mapped bytes E8 25 B4 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 17ch]
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 5F: jne 0x58840f9f
        __asm _emit 0x75
        __asm _emit 0x5f
        mov dword ptr [ebp - 184h], 4
        lea eax, [ebp - 184h]
        push eax
        lea eax, [ebp - 18ch]
        push eax
        push 0
        push 0
        push 588f3000h
        ; Exact mapped bytes E8 ED B3 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 17ch]
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 27: jne 0x58840f9f
        __asm _emit 0x75
        __asm _emit 0x27
        lea eax, [ebp - 60h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 31 5C 00 00: call 0x58846bb5
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x58840f9f
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp - 18ch]
        ; Exact mapped bytes 75 0A: jne 0x58840f9f
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 180h], 1
        cmp dword ptr [ebp - 180h], 1
        ; Exact mapped bytes 0F 85 D0 01 00 00: jne 0x5884117c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 180h], 0
        mov dword ptr [ebp - 184h], 104h
        lea eax, [ebp - 184h]
        push eax
        lea eax, [ebp - 164h]
        push eax
        push 0
        push 0
        push 588f3010h
        ; Exact mapped bytes E8 7A B3 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 17ch]
        ; Exact mapped bytes FF 15 24 40 89 58: call dword ptr [0x58894024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 8B 01 00 00: jne 0x5884117a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 178h], 0
        mov byte ptr [ebp - 0ch], 0
        xor eax, eax
        lea edi, [ebp - 0bh]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        push 4
        lea eax, [ebp - 164h]
        push eax
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 BB 5B 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 77 6C 01 00: call 0x58857c98
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 190h], eax
        lea eax, [ebp - 15fh]
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 14h], 0
        xor eax, eax
        lea edi, [ebp - 13h]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        push 2
        push dword ptr [ebp - 178h]
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 7E 5B 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 3A 6C 01 00: call 0x58857c98
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 194h], eax
        lea eax, [ebp - 15ch]
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 1ch], 0
        xor eax, eax
        lea edi, [ebp - 1bh]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        push 2
        push dword ptr [ebp - 178h]
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 41 5B 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 FD 6B 01 00: call 0x58857c98
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 198h], eax
        lea eax, [ebp - 159h]
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 24h], 0
        xor eax, eax
        lea edi, [ebp - 23h]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        push 2
        push dword ptr [ebp - 178h]
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 04 5B 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 C0 6B 01 00: call 0x58857c98
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 19ch], eax
        lea eax, [ebp - 156h]
        mov dword ptr [ebp - 178h], eax
        mov byte ptr [ebp - 2ch], 0
        xor eax, eax
        lea edi, [ebp - 2bh]
        ; Exact mapped bytes AB: stosd dword ptr es:[edi], eax
        __asm _emit 0xab
        ; Exact mapped bytes 66 AB: stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xab
        ; Exact mapped bytes AA: stosb byte ptr es:[edi], al
        __asm _emit 0xaa
        push 2
        push dword ptr [ebp - 178h]
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 C7 5A 00 00: call 0x58846bd0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 83 6B 01 00: call 0x58857c98
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 1a0h], eax
        movzx eax, word ptr [ebp - 174h]
        cmp dword ptr [ebp - 190h], eax
        ; Exact mapped bytes 75 4F: jne 0x5884117a
        __asm _emit 0x75
        __asm _emit 0x4f
        movzx eax, word ptr [ebp - 172h]
        cmp dword ptr [ebp - 194h], eax
        ; Exact mapped bytes 75 40: jne 0x5884117a
        __asm _emit 0x75
        __asm _emit 0x40
        movzx eax, word ptr [ebp - 16eh]
        cmp dword ptr [ebp - 198h], eax
        ; Exact mapped bytes 75 31: jne 0x5884117a
        __asm _emit 0x75
        __asm _emit 0x31
        movzx eax, word ptr [ebp - 16ch]
        imul eax, eax, 3ch
        movzx ecx, word ptr [ebp - 16ah]
        add eax, ecx
        imul ecx, dword ptr [ebp - 19ch], 3ch
        add ecx, dword ptr [ebp - 1a0h]
        sub eax, ecx
        cmp eax, 14h
        ; Exact mapped bytes 73 0A: jae 0x5884117a
        __asm _emit 0x73
        __asm _emit 0x0a
        mov dword ptr [ebp - 180h], 1
        ; Exact mapped bytes EB 07: jmp 0x58841183
        __asm _emit 0xeb
        __asm _emit 0x07
        and dword ptr [ebp - 180h], 0
        cmp dword ptr [ebp - 180h], 0
        ; Exact mapped bytes 75 6D: jne 0x588411f9
        __asm _emit 0x75
        __asm _emit 0x6d
        push 4
        lea eax, [ebp + 0ch]
        push eax
        push 4
        push 0
        push 588f3000h
        ; Exact mapped bytes E8 B3 B1 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 17ch]
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CA FF 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push dword ptr [ebp + 8]
        push 1
        push 0
        push 588f2fech
        ; Exact mapped bytes E8 8A B1 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 17ch]
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push 14h
        lea eax, [ebp - 40h]
        push eax
        push 1
        push 0
        push 588f3010h
        ; Exact mapped bytes E8 68 B1 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        push dword ptr [ebp - 17ch]
        ; Exact mapped bytes FF 15 34 40 89 58: call dword ptr [0x58894034]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [ebp - 17ch]
        ; Exact mapped bytes FF 15 64 40 89 58: call dword ptr [0x58894064]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 83 3D 68 95 96 58 64: cmp dword ptr [0x58969568], 0x64
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x64
        ; Exact mapped bytes 75 05: jne 0x58841213
        __asm _emit 0x75
        __asm _emit 0x05
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB 06: jmp 0x58841219
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 180h]
        pop edi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2C FE FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
