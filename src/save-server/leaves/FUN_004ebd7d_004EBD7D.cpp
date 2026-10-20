// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EBD7D .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_004ebd7d_004EBD7D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x4ebd9d
        __asm _emit 0x75
        __asm _emit 0x11
        push 48h
        push 675a74h
        ; Exact mapped bytes E8 A8 CF 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xcf
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ebd9d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4ebd86
        __asm _emit 0x75
        __asm _emit 0xe3
        lea ecx, [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 18 BE 68 00: call dword ptr [0x68be18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push 5
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 D8 BE 68 00: call dword ptr [0x68bed8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0F: jmp 0x4ebdd1
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 D8 BE 68 00: call dword ptr [0x68bed8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 61: je 0x4ebe38
        __asm _emit 0x74
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 08 BF 68 00: call dword ptr [0x68bf08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 0ffffh
        cmp eax, 0ffffh
        ; Exact mapped bytes 74 49: je 0x4ebe36
        __asm _emit 0x74
        __asm _emit 0x49
        push -10h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x4ebe36
        __asm _emit 0x74
        __asm _emit 0x34
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BD 63 04 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 B0 65 04 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 70 BF 68 00: call dword ptr [0x68bf70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 09 66 04 00: call 0x532436
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4ebe36
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 04: jmp 0x4ebe3a
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 8A: jmp 0x4ebdc2
        __asm _emit 0xeb
        __asm _emit 0x8a
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
