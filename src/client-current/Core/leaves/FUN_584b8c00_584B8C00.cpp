// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B8C00 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_584b8c00_584B8C00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 62: je 0x584b8c71
        __asm _emit 0x74
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 4]
        add ecx, 6ch
        ; Exact mapped bytes E8 26 F6 FC FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf6
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x584b8c39
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        add ecx, 6ch
        ; Exact mapped bytes E8 67 14 00 00: call 0x584ba090
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 28 9B 16 00: call 0x58622760
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x9b
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 6ch
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 6ch
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 29 F4 FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        lea edx, [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 40 14 00 00: call 0x584ba0b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
