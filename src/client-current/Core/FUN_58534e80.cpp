// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58534E80 .. +0xED bytes.
extern "C" __declspec(naked) void FUN_58534e80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ch], 2
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 67: je 0x58534f00
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 58h], 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 64h], 0
        ; Exact mapped bytes 74 52: je 0x58534efe
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 64h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 190h
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        neg eax
        add eax, 12ch
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C3 8C 03 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 67: jmp 0x58534f67
        __asm _emit 0xeb
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 58h], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 74 54: je 0x58534f67
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 64h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        sub edx, 190h
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        neg ecx
        add ecx, 12ch
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5A 8C 03 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret 4
    }
}
