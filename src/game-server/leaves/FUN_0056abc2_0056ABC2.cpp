// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056ABC2 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_0056abc2_0056ABC2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 29bh
        push 5d053ch
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 7F 05 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x05
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x56ac0a
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 40 52 F6 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x52
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56ac0a
        __asm _emit 0x75
        __asm _emit 0x14
        push 29ch
        push 5d053ch
        ; Exact mapped bytes E8 FB 9D FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x9d
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56ac0a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x56abe1
        __asm _emit 0x75
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DF B8 FF FF: call 0x566515
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x56ac3e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4B: jmp 0x56ac89
        __asm _emit 0xeb
        __asm _emit 0x4b
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0F: jne 0x56ac53
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 2B: je 0x56ac84
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 25: je 0x56ac84
        __asm _emit 0x74
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0F 6E FD FF: call 0x541a7a
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 38 63 FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x63
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 C2 50 F9 FF: call 0x4ffd3a
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x50
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x56ac84
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 37 56 00 00: call 0x5702bb
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x56
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
