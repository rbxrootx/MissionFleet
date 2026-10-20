// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58487CA0 .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_58487ca0_58487CA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 18h], 4
        ; Exact mapped bytes 76 07: jbe 0x58487cb9
        __asm _emit 0x76
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x58487d55
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ch
        mov dword ptr [ebp - 14h], ecx
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A4 03 00 00: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 17: jmp 0x58487cf6
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        lea eax, [ebp - 20h]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 93 FD FF FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 0ch
        mov dword ptr [ebp - 18h], edx
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 85 04 00 00: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 BC FC FF FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 2D: je 0x58487d48
        __asm _emit 0x74
        __asm _emit 0x2d
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 1D FD FF FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 50 82 01 00: call 0x5849ff90
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 97: jmp 0x58487cdf
        __asm _emit 0xeb
        __asm _emit 0x97
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18h], 4
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
