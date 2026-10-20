// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58508D10 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_58508d10_58508D10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        xor eax, eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        and edx, 2
        ; Exact mapped bytes 74 0B: je 0x58508d3a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        and ecx, 20h
        ; Exact mapped bytes 74 53: je 0x58508d8d
        __asm _emit 0x74
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FE 2C 00 00: call 0x5850ba40
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x58508d8d
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 2C 00 00: call 0x5850b9b0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 1ch], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 2C 00 00: call 0x5850ba40
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 4]
        add eax, 38h
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 AE 0B FA FF: call 0x584a9920
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x0b
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [eax]
        sub edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DB 21 00 00: call 0x5850af60
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 3C: jmp 0x58508dc9
        __asm _emit 0xeb
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        and ecx, 4
        ; Exact mapped bytes 75 31: jne 0x58508dc9
        __asm _emit 0x75
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 00 26 00 00: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x58508dc9
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 74 21 00 00: call 0x5850af20
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 21 00 00: call 0x5850af40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
