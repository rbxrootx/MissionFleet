// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00447DF6 .. +0xF7 bytes.
extern "C" __declspec(naked) void FUN_00447df6_00447DF6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 0ch], 10h
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 14h], ecx
        lea edx, [ebp - 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 7E B9 FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 8D 00 00 00: je 0x447eda
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
        sar eax, 8
        mov ecx, dword ptr [ebp - 18h]
        mov byte ptr [ecx + 12ch], al
        mov edx, dword ptr [ebp - 4]
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x447e96
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x447e96
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 07: jmp 0x447e9d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dl, byte ptr [ebp - 1ch]
        mov byte ptr [ecx + 12dh], dl
        mov esi, esp
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx + 40ccch]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + 48h]
        mov eax, dword ptr [edx + 40ccch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 0D 09 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x09
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x447edc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 F9 08 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x08
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
