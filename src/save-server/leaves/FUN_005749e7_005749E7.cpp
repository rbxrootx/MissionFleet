// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005749E7 .. +0x1A1 bytes.
extern "C" __declspec(naked) void FUN_005749e7_005749E7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 4dfh
        push 67cd14h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 5A 58 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x58
        __asm _emit 0xf6
        __asm _emit 0xff
        push 4e0h
        push 67cd14h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 47 58 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x58
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E1 CA FB FF: call 0x531502
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xca
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 4e4h
        push 67cd14h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 29 58 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x58
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 80 B6 FD FF: call 0x5500cd
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 70: je 0x574ac6
        __asm _emit 0x74
        __asm _emit 0x70
        push 1
        push 0e900h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DC 77 FB FF: call 0x52c241
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x77
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 58: je 0x574ac6
        __asm _emit 0x74
        __asm _emit 0x58
        push 636f20h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 15 57 F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x57
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x574a93
        __asm _emit 0x75
        __asm _emit 0x14
        push 4efh
        push 67cd14h
        ; Exact mapped bytes E8 B2 42 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x42
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x574a93
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x574a6e
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F8 7F FB FF: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x7f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E2 17 F6 FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x17
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 0c8h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 38 18 F6 FF: call 0x4d62f5
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x18
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 0cch], eax
        xor eax, eax
        cmp dword ptr [ebp - 8], 0
        sete al
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 80 F7 FF: call 0x4ecb52
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x80
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 07: jne 0x574af0
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x574b7f
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 21: je 0x574b17
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F6 01 00 00: call 0x574cfc
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        push 0
        push 200h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C6 18 F6 FF: call 0x4d63dd
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x18
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0c4h], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 15: jne 0x574b3e
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        push 50bh
        push 67cd14h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 0F 57 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xf6
        __asm _emit 0xff
        push 63d820h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 32 56 F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x56
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x574b76
        __asm _emit 0x75
        __asm _emit 0x14
        push 50ch
        push 67cd14h
        ; Exact mapped bytes E8 CF 41 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x41
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x574b76
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x574b51
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 14h]
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
