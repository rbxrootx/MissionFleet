// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EEA80 .. +0xDE bytes.
extern "C" __declspec(naked) void FUN_004eea80_004EEA80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 176h
        push 677c28h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C1 B7 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        push 177h
        push 677c28h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 AE B7 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0D 37 04 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 00 39 04 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 90 D0 03 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 06: jne 0x4eead7
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 14: je 0x4eeaeb
        __asm _emit 0x74
        __asm _emit 0x14
        push 17ch
        push 677c28h
        ; Exact mapped bytes E8 5A A2 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xa2
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eeaeb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4eeacb
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DC 38 04 00: call 0x5323de
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x4eeb1b
        __asm _emit 0x75
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B0 38 04 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 07 62 04 00: call 0x534d22
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A2 38 04 00: call 0x5323de
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x4eeb55
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 76 38 04 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD 61 04 00: call 0x534d22
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x61
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
