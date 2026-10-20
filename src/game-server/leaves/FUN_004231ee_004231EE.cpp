// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004231EE .. +0x33A bytes.
extern "C" __declspec(naked) void FUN_004231ee_004231EE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 50h], ecx
        mov dword ptr [ebp - 24h], 63h
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 24h]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        lea eax, [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 91 05 FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x423259
        __asm _emit 0x75
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 8001020dh
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E0 3F 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 BD 02 00 00: jmp 0x423516
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        and edx, 0fh
        mov byte ptr [ebp - 10h], dl
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 278h]
        shr eax, 1
        and eax, 7fffffffh
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 30h], 4
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 10h]
        and ecx, 0ffh
        mov dword ptr [ebp - 38h], ecx
        lea edx, [ebp - 30h]
        push edx
        lea eax, [ebp - 34h]
        push eax
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 FA 04 FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x4232f9
        __asm _emit 0x74
        __asm _emit 0x2c
        mov dword ptr [ebp - 3ch], 53h
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 44h], edx
        lea eax, [ebp - 3ch]
        push eax
        lea ecx, [ebp - 40h]
        push ecx
        lea edx, [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 CE 04 FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x42331c
        __asm _emit 0x75
        __asm _emit 0x23
        push 0
        push 0
        push 0
        push 8001020dh
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D 3F 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 FA 01 00 00: jmp 0x423516
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        and ecx, 0ffh
        imul ecx, ecx, 3f8ch
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 0c4h
        mov eax, dword ptr [ecx + edx + 5a1540h]
        mov dword ptr [ebp - 4], eax
        mov byte ptr [ebp - 14h], 0
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 72 07: jb 0x42334f
        __asm _emit 0x72
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C7 01 00 00: jmp 0x423516
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 4bfh
        push 5a1454h
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 0c4h
        push ecx
        ; Exact mapped bytes E8 CB 9C 0C 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x9c
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x423386
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 83 3D 01 00 00: jae 0x4234cf
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        and edx, 0ffh
        imul edx, edx, 3f8ch
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 0c4h
        lea ecx, [edx + eax + 5a14d8h]
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 44 51 6C: mov ax, word ptr [ecx + edx*2 + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x6c
        ; Exact mapped bytes 66 89 45 E4: mov word ptr [ebp - 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        ; Exact mapped bytes 66 8B 55 E4: mov dx, word ptr [ebp - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        and edx, 0ffffh
        imul edx, edx, 3f8ch
        ; Exact mapped bytes 66 8B 45 E4: mov ax, word ptr [ebp - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 66 25 FF 03: and ax, 0x3ff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x03
        and eax, 0ffffh
        imul eax, eax, 0c4h
        cmp ecx, dword ptr [edx + eax + 5a1524h]
        ; Exact mapped bytes 0F 82 B3 00 00 00: jb 0x4234ca
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 66 8B 4D E4: mov cx, word ptr [ebp - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 66 83 E1 3F: and cx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x3f
        and ecx, 0ffffh
        shl ecx, 18h
        mov edx, dword ptr [ebp - 20h]
        or edx, ecx
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes 66 8B 45 E4: mov ax, word ptr [ebp - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 66 25 FF 03: and ax, 0x3ff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x03
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 20h]
        or ecx, eax
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 5
        lea edx, [eax + ecx + 15e94h]
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffh
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [edx + eax*4], ecx
        ; Exact mapped bytes 66 8B 55 E4: mov dx, word ptr [ebp - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 66 83 E2 3F: and dx, 0x3f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x3f
        and edx, 0ffffh
        imul edx, edx, 3f8ch
        ; Exact mapped bytes 66 8B 45 E4: mov ax, word ptr [ebp - 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes 66 C1 E8 06: shr ax, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x06
        ; Exact mapped bytes 66 25 FF 03: and ax, 0x3ff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x03
        and eax, 0ffffh
        imul eax, eax, 0c4h
        lea esi, [edx + eax + 5a14d8h]
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 0ffh
        imul ecx, ecx, 0c4h
        mov edi, dword ptr [ebp - 0ch]
        add edi, ecx
        mov ecx, 31h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dl, byte ptr [ebp - 14h]
        add dl, 1
        mov byte ptr [ebp - 14h], dl
        ; Exact mapped bytes E9 AE FE FF FF: jmp 0x42337d
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffh
        imul eax, eax, 0c4h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffh
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 80020118h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 3D 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4ch]
        push edx
        ; Exact mapped bytes E8 FB 9E 0C 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9e
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov eax, 1
        pop edi
        pop esi
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 BE 52 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x52
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
