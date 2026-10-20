// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052E70D .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_0052e70d_0052E70D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 66 F2 00 00: call 0x53d98b
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x52e730
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x52e7da
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C6 06 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x06
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x52e7d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C1 64 FC FF: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x52e76a
        __asm _emit 0x75
        __asm _emit 0x14
        push 9ch
        push 5ccab0h
        ; Exact mapped bytes E8 9B 62 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52e76a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x52e750
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 0C ED 00 00: call 0x53d481
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 2B: je 0x52e7ab
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0E E8 00 00: call 0x53cf96
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 15: jne 0x52e7a2
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        push 40h
        push 36dh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3B D4 00 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x52e7ab
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 07: jmp 0x52e7b2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 1
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        neg ecx
        sbb ecx, ecx
        and ecx, 0fffffffch
        add ecx, 8
        push ecx
        push 36dh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 04 D4 00 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
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
