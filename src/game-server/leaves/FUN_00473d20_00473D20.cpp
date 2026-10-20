// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00473D20 .. +0x11D bytes.
extern "C" __declspec(naked) void FUN_00473d20_00473D20() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bdceh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 1ch
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes 0F BF 45 08: movsx eax, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x08
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 1
        ; Exact mapped bytes 74 0F: je 0x473d75
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp - 28h], 3
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x473df2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x473e20
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 57 9B 07 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x9b
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 18h]
        push edx
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 E5 67 FA FF: call 0x41a580
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x67
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 9D 9A 07 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x9a
        __asm _emit 0x07
        __asm _emit 0x00
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 4
        ; Exact mapped bytes E8 E2 66 FA FF: call 0x41a4a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x66
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C9 69 FA FF: call 0x41a790
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x69
        __asm _emit 0xfa
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x473dd4
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4E: jmp 0x473e22
        __asm _emit 0xeb
        __asm _emit 0x4e
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 34 69 FA FF: call 0x41a710
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x69
        __asm _emit 0xfa
        __asm _emit 0xff
        add eax, 4
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 18h], ecx
        mov eax, 1
        ; Exact mapped bytes EB 30: jmp 0x473e22
        __asm _emit 0xeb
        __asm _emit 0x30
        mov esi, esp
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 24h]
        add eax, 64h
        push eax
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 D4 49 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x473e20
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 7ch], edx
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x473e22
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 A9 49 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
