// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005086D8 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_005086d8_005086D8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1A: je 0x508704
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 74 14: je 0x508704
        __asm _emit 0x74
        __asm _emit 0x14
        push 157h
        push 5cb374h
        ; Exact mapped bytes E8 01 C3 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x508704
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x5086e4
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EC 66 FE FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        neg ecx
        sbb ecx, ecx
        and ecx, 100000h
        add ecx, 100000h
        and eax, ecx
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x508732
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x5087b8
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 45 FF FF FF: call 0x508682
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 04: jne 0x50874a
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6E: jmp 0x5087b8
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 1C 26 5E 00: call dword ptr [0x5e261c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 0ffffh
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0e900h
        ; Exact mapped bytes 72 09: jb 0x508771
        __asm _emit 0x72
        __asm _emit 0x09
        cmp dword ptr [ebp - 4], 0e9ffh
        ; Exact mapped bytes 76 04: jbe 0x508775
        __asm _emit 0x76
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 43: jmp 0x5087b8
        __asm _emit 0xeb
        __asm _emit 0x43
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1C: jne 0x508797
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        sub eax, 0e900h
        xor edx, edx
        mov ecx, 10h
        div ecx
        add edx, 0ea00h
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 15: jmp 0x5087ac
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        sub edx, 0e900h
        shr edx, 4
        add edx, 0ea10h
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 29 61 FE FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
