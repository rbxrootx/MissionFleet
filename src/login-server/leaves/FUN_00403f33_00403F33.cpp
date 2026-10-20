// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00403F33 .. +0x23C bytes.
extern "C" __declspec(naked) void FUN_00403f33_00403F33() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 4393eeh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 18ch
        mov dword ptr [ebp - 198h], ecx
        mov dword ptr [ebp - 14h], 1
        push 44da28h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 AE 9C 02 00: call 0x42dc19
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        add eax, 18h
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B3 9D 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        push 44da2ch
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 B1 03 00 00: call 0x404340
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 9E 01 00 00: je 0x40413a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 184h]
        ; Exact mapped bytes E8 C2 DC 00 00: call 0x411c69
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea edx, [ebp - 184h]
        push edx
        lea ecx, [ebp - 124h]
        ; Exact mapped bytes E8 BC E5 00 00: call 0x412579
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        push 8
        push 448cf0h
        lea ecx, [ebp - 184h]
        ; Exact mapped bytes E8 4C DE 00 00: call 0x411e1f
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 188h]
        ; Exact mapped bytes E8 D2 02 00 00: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 18ch]
        ; Exact mapped bytes E8 C3 02 00 00: call 0x4042b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 18h
        push ecx
        push 448d0ch
        lea edx, [ebp - 18ch]
        push edx
        ; Exact mapped bytes E8 D2 8A 02 00: call 0x42cadf
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 10h
        push 0
        lea ecx, [ebp - 18ch]
        ; Exact mapped bytes E8 F3 02 00 00: call 0x404310
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push -1
        lea ecx, [ebp - 124h]
        ; Exact mapped bytes E8 63 E8 00 00: call 0x41288e
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 124h]
        ; Exact mapped bytes E8 7A 54 00 00: call 0x4094b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x404051
        __asm _emit 0x74
        __asm _emit 0x17
        lea ecx, [ebp - 124h]
        ; Exact mapped bytes E8 1D E9 00 00: call 0x412962
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x4040f1
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 124h]
        ; Exact mapped bytes E8 06 E9 00 00: call 0x412962
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        push 44da30h
        lea ecx, [ebp - 190h]
        ; Exact mapped bytes E8 AD 9B 02 00: call 0x42dc19
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        mov eax, dword ptr [ebp + 8]
        add eax, 44h
        push eax
        lea ecx, [ebp - 190h]
        ; Exact mapped bytes E8 B2 9C 02 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        mov eax, dword ptr [ebp - 190h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 40h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 30h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 18h
        push edx
        push 448d54h
        lea eax, [ebp - 188h]
        push eax
        ; Exact mapped bytes E8 1E 8A 02 00: call 0x42cadf
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 24h
        lea ecx, [ebp - 188h]
        ; Exact mapped bytes E8 41 02 00 00: call 0x404310
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 184h]
        ; Exact mapped bytes E8 C5 DD 00 00: call 0x411ea0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 1
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 190h]
        ; Exact mapped bytes E8 BA 9A 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 184h]
        ; Exact mapped bytes E8 BC DE 00 00: call 0x411fb8
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 18ch]
        ; Exact mapped bytes E8 A0 9A 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 188h]
        ; Exact mapped bytes E8 91 9A 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 124h]
        ; Exact mapped bytes E8 5C E6 00 00: call 0x412785
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 184h]
        ; Exact mapped bytes E8 AE DB 00 00: call 0x411ce6
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x404141
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 194h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 52 9A 02 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 194h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
