// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421130 .. +0x126 bytes.
extern "C" __declspec(naked) void FUN_00421130_00421130() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 6ch]
        mov ecx, 1bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 06 FE FF: call 0x401780
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 F4 FE FD FF: call 0x40105f
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 08: jmp 0x421180
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 5F: je 0x4211e5
        __asm _emit 0x74
        __asm _emit 0x5f
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2
        ; Exact mapped bytes E8 BA 04 FE FF: call 0x40164f
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2
        ; Exact mapped bytes E8 A7 04 FE FF: call 0x40164f
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        ; Exact mapped bytes E8 32 04 FE FF: call 0x4015e6
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x4211e3
        __asm _emit 0x74
        __asm _emit 0x26
        mov byte ptr [ebp - 18h], 0
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 08 08 FE FF: call 0x4019dd
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B6 00 FE FF: call 0x401294
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 60: jmp 0x421243
        __asm _emit 0xeb
        __asm _emit 0x60
        ; Exact mapped bytes EB 93: jmp 0x421178
        __asm _emit 0xeb
        __asm _emit 0x93
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 08 FE FF: call 0x401ad2
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 54 FE FD FF: call 0x40105f
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], eax
        mov byte ptr [ebp - 24h], 1
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 A6 07 FE FF: call 0x4019dd
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 54 00 FE FF: call 0x401294
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        add esp, 6ch
        cmp ebp, esp
        ; Exact mapped bytes E8 A0 3B 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
