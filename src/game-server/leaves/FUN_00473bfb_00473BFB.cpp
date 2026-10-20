// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00473BFB .. +0x125 bytes.
extern "C" __declspec(naked) void FUN_00473bfb_00473BFB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bdbbh
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
        sub esp, 48h
        push edi
        push ecx
        lea edi, [ebp - 54h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 A1 9C 07 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 4
        ; Exact mapped bytes E8 2F 69 FA FF: call 0x41a580
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x69
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E7 9B 07 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x9b
        __asm _emit 0x07
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 4
        ; Exact mapped bytes E8 2C 68 FA FF: call 0x41a4a0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x68
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 13 6B FA FF: call 0x41a790
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x6b
        __asm _emit 0xfa
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 7D: je 0x473d03
        __asm _emit 0x74
        __asm _emit 0x7d
        mov edx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 66 8B 82 88 00 00 00: mov ax, word ptr [edx + 0x88]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 05 01 00: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 66 89 81 88 00 00 00: mov word ptr [ecx + 0x88], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 2E 9C 07 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x9c
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 40h]
        push ecx
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 FF 69 FA FF: call 0x41a6c0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x69
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 54h], edx
        mov byte ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 54h]
        push eax
        lea ecx, [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 4
        ; Exact mapped bytes E8 FF 67 FA FF: call 0x41a4e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x67
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 03 67 FA FF: call 0x41a3f0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x67
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 50 9B 07 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x9b
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x473d05
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
        pop edi
        add esp, 54h
        cmp ebp, esp
        ; Exact mapped bytes E8 C6 4A 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
