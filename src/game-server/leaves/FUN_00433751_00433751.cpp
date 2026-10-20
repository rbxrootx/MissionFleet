// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433751 .. +0x39A bytes.
extern "C" __declspec(naked) void FUN_00433751_00433751() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57a27ch
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
        sub esp, 74h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 80h]
        mov ecx, 1dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 80h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x43378f
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 3D 03 00 00: jmp 0x433acc
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        lea edx, [ebp - 64h]
        push edx
        ; Exact mapped bytes E8 9E 66 07 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x66
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 1ch]
        add eax, 30h
        push eax
        lea ecx, [ebp - 34h]
        push ecx
        ; Exact mapped bytes E8 8B 66 07 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x66
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 72 35: jb 0x4337f6
        __asm _emit 0x72
        __asm _emit 0x35
        mov dword ptr [ebp - 6ch], 13h
        mov dword ptr [ebp - 70h], 2
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 F8 5B 07 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x5b
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        lea ecx, [ebp - 6ch]
        push ecx
        lea edx, [ebp - 70h]
        push edx
        lea eax, [ebp - 74h]
        push eax
        ; Exact mapped bytes E8 D1 FF FC FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x433814
        __asm _emit 0x75
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002040ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 3A 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x3a
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 B8 02 00 00: jmp 0x433acc
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        cmp edx, 2
        ; Exact mapped bytes 75 1E: jne 0x433840
        __asm _emit 0x75
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 2
        push 8002040ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F9 39 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 8C 02 00 00: jmp 0x433acc
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0ah
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 97 62 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        imul edx, edx, 370h
        lea eax, [eax + edx + 16c04h]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 6C 62 FF FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 1E: jne 0x4338a7
        __asm _emit 0x75
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 0
        push 8002040ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 92 39 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 25 02 00 00: jmp 0x433acc
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 168h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4ch]
        xor edx, edx
        mov esi, 32h
        div esi
        cmp dword ptr [ecx + 18h], eax
        ; Exact mapped bytes 7D 1E: jge 0x4338e2
        __asm _emit 0x7d
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 1
        push 8002040ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 39 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 EA 01 00 00: jmp 0x433acc
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16bech]
        push ecx
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 CE 9F 0B 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x9f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 91 D6 0F 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xd6
        __asm _emit 0x0f
        __asm _emit 0x00
        push eax
        lea edx, [ebp - 4ch]
        push edx
        ; Exact mapped bytes E8 1D 65 07 00: call 0x4a9e40
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x65
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov esi, esp
        lea eax, [ebp - 34h]
        push eax
        lea ecx, [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A3 4E 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4e
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 35: jne 0x433976
        __asm _emit 0x75
        __asm _emit 0x35
        push 0
        push 0
        push 0
        push 0
        push 2
        push 8002040ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DA 38 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 DE 9E 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x9e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 78h]
        ; Exact mapped bytes E9 56 01 00 00: jmp 0x433acc
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea edx, [ebp - 34h]
        push edx
        push 5b58e4h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        imul eax, eax, 370h
        lea ecx, [ecx + eax + 16bech]
        push ecx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 2F 4E 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x4e
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4ch]
        xor edx, edx
        mov esi, 32h
        div esi
        mov ecx, dword ptr [ecx + 18h]
        sub ecx, eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 18h], ecx
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 40008h]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 C1 EC 04 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        shl edx, 10h
        or edx, 2
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        mov edx, dword ptr [ecx + 40008h]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 99 EC 04 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 48h
        lea eax, [ebp - 64h]
        push eax
        push 0
        push 0
        push 8001040ah
        mov ecx, dword ptr [ebp - 80h]
        mov ecx, dword ptr [ecx + 40008h]
        ; Exact mapped bytes E8 E5 D8 FC FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xd8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0db4h]
        ; Exact mapped bytes E8 EC 37 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        push 0
        push 18h
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bech]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 08: mov dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x08
        push edx
        push 10000h
        push 8002040ah
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC 37 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        push edx
        push 80025000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F 37 05 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 83 9D 0B 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x9d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 80h
        cmp ebp, esp
        ; Exact mapped bytes E8 FB 4C 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
