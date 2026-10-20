// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00521083 .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_00521083_00521083() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f228h
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
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffff0fbfh
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x5210c4
        __asm _emit 0x74
        __asm _emit 0x14
        push 2d9h
        push 5cc9cch
        ; Exact mapped bytes E8 41 39 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5210c4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x5210a4
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp + 8]
        and edx, 40h
        test edx, edx
        ; Exact mapped bytes 74 21: je 0x5210f5
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 64h]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x5210f5
        __asm _emit 0x74
        __asm _emit 0x14
        push 2dbh
        push 5cc9cch
        ; Exact mapped bytes E8 10 39 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5210f5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x5210ca
        __asm _emit 0x75
        __asm _emit 0xcf
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 68h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 74h], 0
        ; Exact mapped bytes 75 55: jne 0x521162
        __asm _emit 0x75
        __asm _emit 0x55
        push 2dfh
        push 5cc9cch
        push 0b0h
        ; Exact mapped bytes E8 12 BF FC FF: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 11: je 0x521145
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 34 AC FF FF: call 0x51bd74
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x52114c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 74h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 13: jne 0x52117e
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 20h], eax
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
