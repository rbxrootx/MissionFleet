// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EA420 .. +0x2D3 bytes.
extern "C" __declspec(naked) void FUN_585ea420_585EA420() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C A5 E9 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A5 A5 E9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [eax + ecx*2 + 0dah]
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, word ptr [eax + 1eh]
        sub edx, ecx
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C A5 E9 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xa5
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 9B 58 EC FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x58
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x585ea4ce
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC A4 E9 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa4
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7B 58 EC FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x58
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 1E: mov cx, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x1e
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 2ch]
        lea ecx, [eax + edx*2 + 10921h]
        mov edx, 1
        imul eax, edx, 0
        movzx ecx, byte ptr [ecx + eax]
        xor ecx, 55h
        ; Exact mapped bytes 66 89 4D F0: mov word ptr [ebp - 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf0
        movzx edx, word ptr [ebp - 0ch]
        movzx eax, word ptr [ebp - 10h]
        imul edx, eax
        add edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 A4 E9 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xa4
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 26 58 EC FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x58
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x585ea543
        __asm _emit 0x74
        __asm _emit 0x55
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 A4 E9 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa4
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 06 58 EC FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x58
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 1E: mov ax, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x1e
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 2ch]
        lea eax, [edx + ecx*2 + 10921h]
        mov ecx, 1
        shl ecx, 0
        movzx edx, byte ptr [eax + ecx]
        xor edx, 55h
        ; Exact mapped bytes 66 89 55 E8: mov word ptr [ebp - 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe8
        movzx eax, word ptr [ebp - 14h]
        movzx ecx, word ptr [ebp - 18h]
        imul eax, ecx
        add eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 28h]
        sub edx, eax
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 8D 8D 01 00 00: jge 0x585ea6ed
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 A4 E9 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6E A4 E9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xa4
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [eax + ecx*2 + 0dah]
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, word ptr [eax + 1eh]
        sub edx, ecx
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes 79 05: jns 0x585ea590
        __asm _emit 0x79
        __asm _emit 0x05
        ; Exact mapped bytes E9 5D 01 00 00: jmp 0x585ea6ed
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE A3 E9 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa3
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 5D 57 EC FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x57
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 7F: je 0x585ea636
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE A3 E9 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xa3
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 3D 57 EC FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x57
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 1E: mov cx, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x1e
        ; Exact mapped bytes 66 89 4D E4: mov word ptr [ebp - 0x1c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 2ch]
        lea ecx, [eax + edx*2 + 10921h]
        mov edx, 1
        imul eax, edx, 0
        movzx ecx, byte ptr [ecx + eax]
        xor ecx, 55h
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        movzx edx, word ptr [ebp - 4]
        sub edx, 1
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        movzx eax, word ptr [ebp - 4]
        xor eax, 55h
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 2ch]
        lea ecx, [edx + ecx*2 + 10921h]
        mov edx, 1
        imul edx, edx, 0
        mov byte ptr [ecx + edx], al
        movzx eax, word ptr [ebp - 1ch]
        movzx ecx, word ptr [ebp - 4]
        imul eax, ecx
        add eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F A3 E9 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xa3
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 BE 56 EC FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x56
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 7F: je 0x585ea6d5
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1F A3 E9 FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xa3
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 9E 56 EC FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x56
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 1E: mov cx, word ptr [eax + 0x1e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x1e
        ; Exact mapped bytes 66 89 4D E0: mov word ptr [ebp - 0x20], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 2ch]
        lea ecx, [eax + edx*2 + 10921h]
        mov edx, 1
        shl edx, 0
        movzx eax, byte ptr [ecx + edx]
        xor eax, 55h
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        movzx ecx, word ptr [ebp - 8]
        sub ecx, 1
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        movzx edx, word ptr [ebp - 8]
        xor edx, 55h
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 2ch]
        lea eax, [ecx + eax*2 + 10921h]
        mov ecx, 1
        shl ecx, 0
        mov byte ptr [eax + ecx], dl
        movzx edx, word ptr [ebp - 20h]
        movzx eax, word ptr [ebp - 8]
        imul edx, eax
        add edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov edx, dword ptr [ebp - 28h]
        sub edx, eax
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes E9 69 FE FF FF: jmp 0x585ea556
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
