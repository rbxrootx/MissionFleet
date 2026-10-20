// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042237B .. +0x309 bytes.
extern "C" __declspec(naked) void FUN_0042237b_0042237B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 28h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 10h], 63h
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        lea eax, [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 04 14 FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 57: je 0x42241a
        __asm _emit 0x74
        __asm _emit 0x57
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        cmp dword ptr [edx + eax + 2e4h], 1
        ; Exact mapped bytes 74 3B: je 0x42241a
        __asm _emit 0x74
        __asm _emit 0x3b
        mov dword ptr [ebp - 1ch], 4
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        and ecx, 0e000h
        sar ecx, 0dh
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 1ch]
        push edx
        lea eax, [ebp - 20h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 AD 13 FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x13
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x422438
        __asm _emit 0x75
        __asm _emit 0x1e
        push 0
        push 0
        push 0
        push 0
        push 0ah
        push 80021034h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 01 4E 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x4e
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 3A 02 00 00: jmp 0x422672
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 55 10: mov dx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        push edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 19ch]
        mov edx, dword ptr [ecx + 40cc8h]
        mov ecx, dword ptr [edx + 0ca0h]
        add ecx, 4
        ; Exact mapped bytes E8 46 3B 00 00: call 0x425fa0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 4
        and eax, 0ffh
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 19ch]
        mov ecx, dword ptr [edx + 40cc8h]
        mov edx, dword ptr [ecx + 0ca0h]
        mov ecx, dword ptr [edx + 40004h]
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 368h
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes 66 8B 54 11 0C: mov dx, word ptr [ecx + edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        ; Exact mapped bytes 66 81 E2 FF 00: and dx, 0xff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0x00
        and edx, 0ffffh
        cmp eax, edx
        ; Exact mapped bytes 73 07: jae 0x4224c4
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 AE 01 00 00: jmp 0x422672
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes EB 09: jmp 0x4224d6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x42257e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [edx + 168h]
        xor edx, edx
        mov dl, byte ptr [ecx + eax + 2f0h]
        test edx, edx
        ; Exact mapped bytes 75 77: jne 0x422579
        __asm _emit 0x75
        __asm _emit 0x77
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 234h]
        shr eax, 10h
        and eax, 0ffffh
        shr eax, 5
        and eax, 0ffh
        cmp eax, 3
        ; Exact mapped bytes 74 47: je 0x422577
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 10h
        and ecx, 0ffffh
        shr ecx, 5
        and ecx, 0ffh
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        mov eax, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp - 0ch]
        add esi, dword ptr [eax + 168h]
        mov byte ptr [edx + esi + 2f0h], cl
        ; Exact mapped bytes EB 05: jmp 0x42257e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 4F FF FF FF: jmp 0x4224cd
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        and ecx, 0ffffh
        shl ecx, 10h
        mov eax, dword ptr [eax + edx + 234h]
        and eax, 0ffffh
        or eax, ecx
        mov ecx, dword ptr [ebp + 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + 168h]
        mov dword ptr [edx + ecx + 234h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 2c0h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 19ch]
        mov ecx, dword ptr [eax + 40cc8h]
        mov ecx, dword ptr [ecx + 0ca0h]
        ; Exact mapped bytes E8 02 08 01 00: call 0x432e09
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        shl edx, 10h
        or edx, 4
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 19ch]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 86 00 06 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x422659
        __asm _emit 0x74
        __asm _emit 0x26
        push 0
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        shl ecx, 10h
        or ecx, 0ah
        push ecx
        push 80021034h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E0 4B 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 19: jmp 0x422672
        __asm _emit 0xeb
        __asm _emit 0x19
        push 0
        push 0
        push 0
        push 0
        push 0ah
        push 80021034h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C2 4B 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x4b
        __asm _emit 0x06
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 62 61 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
