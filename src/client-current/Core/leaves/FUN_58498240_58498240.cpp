// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58498240 .. +0x172 bytes.
extern "C" __declspec(naked) void FUN_58498240_58498240() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 318h], 0
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x584982f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 DC 41 FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 75 C7 FE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2E: je 0x5849829d
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 C6 41 FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5F C7 FE FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, 1ffh
        ; Exact mapped bytes 66 23 48 06: and cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x06
        movzx eax, cx
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 328h], eax
        ; Exact mapped bytes 7C 55: jl 0x584982f2
        __asm _emit 0x7c
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 318h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 318h], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 344h], 0ffffff38h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 56 4E FF FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x584982f2
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 07 3A FF FF: call 0x5848bce0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7F 4B 00 00: call 0x5849ce70
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x584983ae
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 318h], 1
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x584983ae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 344h], 64h
        ; Exact mapped bytes 7D 1A: jge 0x5849832d
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 344h]
        add eax, 1eh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 344h], eax
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x584983ae
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 344h], 64h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4c4h], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 318h], 0
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 2c8h]
        cmp eax, 4
        ; Exact mapped bytes 75 14: jne 0x58498377
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 338h]
        mov dword ptr [ecx + 320h], eax
        ; Exact mapped bytes EB 12: jmp 0x58498389
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 338h]
        mov dword ptr [ecx + 320h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 74 1C: je 0x584983ae
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 13 A4 2C 00: call 0x587627b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa4
        __asm _emit 0x2c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x584983ae
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 464h], 1
        mov esp, ebp
        pop ebp
        ret
    }
}
