// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BE680 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_584be680_584BE680() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 5ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [eax + 6ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 60h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [eax + 70h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 64h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 68h], edx
        push 40000000h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 70 12 00: call 0x585e5730
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ach], 20h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3b8h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3b4h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 05 6F 2F 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x6f
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584be72e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 1D: jge 0x584be751
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0b0h]
        mov dword ptr [ebp - 10h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 92 77 FC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x77
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x584be725
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 2B: jne 0x584be785
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 5ch]
        cmp eax, dword ptr [edx + 64h]
        ; Exact mapped bytes 75 0E: jne 0x584be776
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 60h]
        cmp eax, dword ptr [edx + 68h]
        ; Exact mapped bytes 74 0F: je 0x584be785
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3b4h]
        ; Exact mapped bytes E8 DC 05 00 00: call 0x584bed60
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
