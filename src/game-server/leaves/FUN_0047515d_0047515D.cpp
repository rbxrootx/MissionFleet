// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047515D .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_0047515d_0047515D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 F3 16 00 00: call 0x476880
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 CF 15 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 C6 18 00 00: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x4751b7
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 29: jmp 0x4751e0
        __asm _emit 0xeb
        __asm _emit 0x29
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 31 18 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x4751de
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 EA FF FF: call 0x473bfb
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4751e0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 F6 35 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
