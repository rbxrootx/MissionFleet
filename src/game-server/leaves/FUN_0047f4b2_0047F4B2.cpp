// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047F4B2 .. +0x216 bytes.
extern "C" __declspec(naked) void FUN_0047f4b2_0047F4B2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 384h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 384h]
        mov ecx, 0e1h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 384h], ecx
        mov eax, dword ptr [ebp - 384h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 0F: jne 0x47f4f2
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 93 81 FC FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 C1 01 00 00: jmp 0x47f6b3
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, 0dfh
        lea edi, [ebp - 37ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov dword ptr [ebp - 380h], 0
        ; Exact mapped bytes EB 0F: jmp 0x47f51d
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 380h]
        add ecx, 1
        mov dword ptr [ebp - 380h], ecx
        cmp dword ptr [ebp - 380h], 64h
        ; Exact mapped bytes 0F 8D 87 01 00 00: jge 0x47f6b1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 384h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 380h]
        imul edx, edx, 37ch
        cmp dword ptr [ecx + edx + 2e4h], 1
        ; Exact mapped bytes 0F 85 59 01 00 00: jne 0x47f6ac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2bch], 0
        mov eax, dword ptr [ebp - 380h]
        mov dword ptr [ebp - 37ch], eax
        mov ecx, dword ptr [ebp - 384h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 380h]
        mov dword ptr [eax + ecx*4 + 94h], 0ffffffffh
        mov edx, dword ptr [ebp - 384h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 380h]
        imul edx, edx, 37ch
        lea edi, [ecx + edx + 224h]
        mov ecx, 0dfh
        lea esi, [ebp - 37ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0c0h], 1
        mov ecx, dword ptr [ebp - 384h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 168h]
        ; Exact mapped bytes 66 8B 48 50: mov cx, word ptr [eax + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 384h]
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [eax + 168h]
        ; Exact mapped bytes 66 89 4A 50: mov word ptr [edx + 0x50], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x50
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        ; Exact mapped bytes 66 8B 51 50: mov dx, word ptr [ecx + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x50
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        ; Exact mapped bytes 66 89 51 50: mov word ptr [ecx + 0x50], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 380h]
        shl edx, 10h
        or edx, 4
        push edx
        mov eax, dword ptr [ebp - 384h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 384h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 7D 30 00 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        shl edx, 10h
        or edx, 4
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 384h]
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 59 30 00 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push 37ch
        lea eax, [ebp - 37ch]
        push eax
        mov ecx, dword ptr [ebp - 384h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 8e8h]
        add ecx, 3ch
        ; Exact mapped bytes E8 47 19 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x19
        __asm _emit 0xf9
        __asm _emit 0xff
        lea eax, [ebp - 37ch]
        push eax
        mov ecx, dword ptr [ebp - 384h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40c98h]
        ; Exact mapped bytes E8 68 D5 FB FF: call 0x43cc0d
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd5
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 07: jmp 0x47f6b3
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 5D FE FF FF: jmp 0x47f50e
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        pop esi
        add esp, 384h
        cmp ebp, esp
        ; Exact mapped bytes E8 1E 91 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
