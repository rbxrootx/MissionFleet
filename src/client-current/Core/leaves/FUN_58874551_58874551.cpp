// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874551 .. +0x17C bytes.
extern "C" __declspec(naked) void FUN_58874551_58874551() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        sub esp, 20h
        push esi
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x58874577
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes E8 09 DF FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 3B CA FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xca
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes E9 47 01 00 00: jmp 0x588746be
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [eax], 0
        xor ecx, ecx
        and dword ptr [ebp - 18h], ecx
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push edi
        xor edi, edi
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 20h], edi
        mov eax, dword ptr [ebx]
        test eax, eax
        ; Exact mapped bytes 74 56: je 0x588745e8
        __asm _emit 0x74
        __asm _emit 0x56
        lea ecx, [ebp - 4]
        ; Exact mapped bytes 66 C7 45 FC 2A 3F: mov word ptr [ebp - 4], 0x3f2a
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x2a
        __asm _emit 0x3f
        push ecx
        push eax
        mov byte ptr [ebp - 2], 0
        ; Exact mapped bytes E8 7A 74 00 00: call 0x5887ba20
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x588745c6
        __asm _emit 0x75
        __asm _emit 0x1a
        lea eax, [ebp - 20h]
        push eax
        xor eax, eax
        push eax
        push eax
        push dword ptr [ebx]
        ; Exact mapped bytes E8 13 01 00 00: call 0x588746ce
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        add esp, 10h
        test esi, esi
        ; Exact mapped bytes 75 74: jne 0x58874638
        __asm _emit 0x75
        __asm _emit 0x74
        ; Exact mapped bytes EB 13: jmp 0x588745d9
        __asm _emit 0xeb
        __asm _emit 0x13
        lea ecx, [ebp - 20h]
        push ecx
        push eax
        push dword ptr [ebx]
        ; Exact mapped bytes E8 AD 01 00 00: call 0x5887477f
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x588745f6
        __asm _emit 0x75
        __asm _emit 0x1d
        add ebx, 4
        mov eax, dword ptr [ebx]
        test eax, eax
        ; Exact mapped bytes 75 B0: jne 0x58874592
        __asm _emit 0x75
        __asm _emit 0xb0
        mov edi, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 1ch]
        mov ebx, ecx
        mov esi, edi
        sub ebx, edi
        sar ebx, 2
        inc ebx
        xor eax, eax
        ; Exact mapped bytes EB 1F: jmp 0x58874615
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov esi, eax
        ; Exact mapped bytes EB 3E: jmp 0x58874638
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov edx, dword ptr [esi]
        lea eax, [edx + 1]
        mov dword ptr [ebp - 0ch], eax
        mov al, byte ptr [edx]
        inc edx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x58874602
        __asm _emit 0x75
        __asm _emit 0xf9
        mov eax, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 0ch]
        inc eax
        add eax, edx
        add esi, 4
        mov dword ptr [ebp - 8], eax
        cmp esi, ecx
        ; Exact mapped bytes 75 DE: jne 0x588745fa
        __asm _emit 0x75
        __asm _emit 0xde
        push 1
        push eax
        push ebx
        ; Exact mapped bytes E8 CF 0E FF FF: call 0x588654f4
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        add esp, 0ch
        test esi, esi
        ; Exact mapped bytes 75 16: jne 0x58874644
        __asm _emit 0x75
        __asm _emit 0x16
        push eax
        ; Exact mapped bytes E8 DC 85 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        or esi, 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 CB 03 00 00: call 0x58874a0b
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        ; Exact mapped bytes EB 78: jmp 0x588746bc
        __asm _emit 0xeb
        __asm _emit 0x78
        lea eax, [esi + ebx*4]
        mov ebx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], eax
        mov edx, eax
        mov dword ptr [ebp - 4], edx
        cmp edi, ebx
        ; Exact mapped bytes 74 4E: je 0x588746a4
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, esi
        sub eax, edi
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [edi]
        lea eax, [ecx + 1]
        mov dword ptr [ebp - 0ch], eax
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x58874665
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, dword ptr [ebp - 0ch]
        lea eax, [ecx + 1]
        push eax
        push dword ptr [edi]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 10h]
        sub eax, edx
        add eax, dword ptr [ebp - 8]
        push eax
        push edx
        ; Exact mapped bytes E8 A9 1A FF FF: call 0x58866130
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 33: jne 0x588746c1
        __asm _emit 0x75
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax + edi], edx
        add edi, 4
        add edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], edx
        cmp edi, ebx
        ; Exact mapped bytes 75 B9: jne 0x5887465d
        __asm _emit 0x75
        __asm _emit 0xb9
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], esi
        xor eax, eax
        push eax
        ; Exact mapped bytes E8 5F 85 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 51 03 00 00: call 0x58874a0b
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop ebx
        pop esi
        leave
        ret
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 0C C9 FD FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xc9
        __asm _emit 0xfd
        __asm _emit 0xff
    }
}
