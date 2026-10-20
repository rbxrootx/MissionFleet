// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429C8B .. +0x177 bytes.
extern "C" __declspec(naked) void FUN_00429c8b_00429C8B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x429cbe
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 34 01 00 00: jmp 0x429df2
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        push ecx
        ; Exact mapped bytes E8 CC B0 00 00: call 0x434da0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], 9
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 1ch], edx
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 C1 9A FD FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x429d0d
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x429df2
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x429d1f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [edx + eax*4 + 7ch]
        ; Exact mapped bytes 0F 8D B7 00 00 00: jge 0x429def
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4 + 54h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 40004h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        imul eax, dword ptr [ecx + edx*4 + 0a4h]
        mov ecx, dword ptr [ebp - 10h]
        add ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 25 0F 00: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x0f
        __asm _emit 0x00
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        and edx, 0ffffh
        cmp eax, edx
        ; Exact mapped bytes 75 5D: jne 0x429dea
        __asm _emit 0x75
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 C1 E9 05: shr cx, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x05
        ; Exact mapped bytes 66 81 E1 FF 07: and cx, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0x07
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 C1 E8 05: shr ax, 5
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x05
        ; Exact mapped bytes 66 25 FF 07: and ax, 0x7ff
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0x07
        and eax, 0ffffh
        cmp ecx, eax
        ; Exact mapped bytes 75 31: jne 0x429dea
        __asm _emit 0x75
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 01: and dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x01
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 C1 E9 04: shr cx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        and ecx, 0ffffh
        cmp edx, ecx
        ; Exact mapped bytes 75 05: jne 0x429dea
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 08: jmp 0x429df2
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes E9 27 FF FF FF: jmp 0x429d16
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 E4 E9 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
