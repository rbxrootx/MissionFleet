// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041A718 .. +0x102 bytes.
extern "C" __declspec(naked) void FUN_0041a718_0041A718() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        push dword ptr [eax - 0a0h]
        xor esi, esi
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes FF 15 C0 C3 43 00: call dword ptr [0x43c3c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        push 3
        push edi
        ; Exact mapped bytes FF 15 24 C0 43 00: call dword ptr [0x43c024]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov bl, byte ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], esi
        test bl, 4
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes 74 54: je 0x41a7a2
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [ebp + 0ch]
        push 2
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 14h]
        push eax
        push edi
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes FF 15 80 C0 43 00: call dword ptr [0x43c080]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        test bl, 2
        ; Exact mapped bytes 74 1F: je 0x41a78d
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 10h]
        sub eax, dword ptr [ebp - 14h]
        sub ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp + 0ch], eax
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes DB 45 0C: fild dword ptr [ebp + 0xc]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x0c
        mov dword ptr [ebp + 10h], ecx
        ; Exact mapped bytes D9 18: fstp dword ptr [eax]
        __asm _emit 0xd9
        __asm _emit 0x18
        ; Exact mapped bytes DB 45 10: fild dword ptr [ebp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes EB 10: jmp 0x41a79d
        __asm _emit 0xeb
        __asm _emit 0x10
        test bl, 1
        ; Exact mapped bytes 74 67: je 0x41a7f9
        __asm _emit 0x74
        __asm _emit 0x67
        ; Exact mapped bytes DB 45 F4: fild dword ptr [ebp - 0xc]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xf4
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes D9 18: fstp dword ptr [eax]
        __asm _emit 0xd9
        __asm _emit 0x18
        ; Exact mapped bytes DB 45 F8: fild dword ptr [ebp - 8]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes D9 58 04: fstp dword ptr [eax + 4]
        __asm _emit 0xd9
        __asm _emit 0x58
        __asm _emit 0x04
        ; Exact mapped bytes EB 5E: jmp 0x41a800
        __asm _emit 0xeb
        __asm _emit 0x5e
        test bl, 8
        ; Exact mapped bytes 74 52: je 0x41a7f9
        __asm _emit 0x74
        __asm _emit 0x52
        mov esi, dword ptr [ebp + 10h]
        ; Exact mapped bytes D9 06: fld dword ptr [esi]
        __asm _emit 0xd9
        __asm _emit 0x06
        ; Exact mapped bytes E8 0B 6D 00 00: call 0x4214bc
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 46 04: fld dword ptr [esi + 4]
        __asm _emit 0xd9
        __asm _emit 0x46
        __asm _emit 0x04
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 00 6D 00 00: call 0x4214bc
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 14h]
        push 2
        push eax
        push edi
        ; Exact mapped bytes FF 15 84 C0 43 00: call dword ptr [0x43c084]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        test bl, 2
        ; Exact mapped bytes 74 13: je 0x41a7e4
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 10: jmp 0x41a7f4
        __asm _emit 0xeb
        __asm _emit 0x10
        test bl, 1
        ; Exact mapped bytes 74 10: je 0x41a7f9
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 07: jmp 0x41a800
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 80070057h
        mov eax, dword ptr [ebp + 8]
        push edi
        push dword ptr [eax - 0a0h]
        ; Exact mapped bytes FF 15 C4 C3 43 00: call dword ptr [0x43c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
