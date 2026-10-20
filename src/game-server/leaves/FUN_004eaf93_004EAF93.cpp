// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EAF93 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_004eaf93_004EAF93() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F0 02 01 00: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        push 5c7d38h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        push 5c7d30h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5A 9B 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9F 9D 04 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4C 9B 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 6F 04 00: call 0x531f4f
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 57: jle 0x4eb032
        __asm _emit 0x7e
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D0 87 04 00: call 0x5337b3
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x87
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 46: je 0x4eb032
        __asm _emit 0x74
        __asm _emit 0x46
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1F FE FF FF: call 0x4eae1f
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 45 FC: mov ax, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfc
        push eax
        push 5c7d48h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 5c7d44h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 00 9B 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D2 9D 04 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F2 9A 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 62 9C 04 00: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB B4: jmp 0x4eafe6
        __asm _emit 0xeb
        __asm _emit 0xb4
        push 5c7d50h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DC 9A 04 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
