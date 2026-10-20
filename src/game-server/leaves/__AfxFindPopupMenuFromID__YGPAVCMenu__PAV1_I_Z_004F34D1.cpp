// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F34D1 .. +0x9F bytes.
extern "C" __declspec(naked) void __AfxFindPopupMenuFromID__YGPAVCMenu__PAV1_I_Z_004F34D1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push 4cfh
        push 5c5574h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 76 7C 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 57 7E 04 00: call 0x53b349
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4f3507
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 59: jge 0x4f3568
        __asm _emit 0x7d
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 74 80 04 00: call 0x53b58f
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1D: je 0x4f3541
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 A0 FF FF FF: call 0x4f34d1
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 05: je 0x4f353f
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 2B: jmp 0x4f356a
        __asm _emit 0xeb
        __asm _emit 0x2b
        ; Exact mapped bytes EB 25: jmp 0x4f3566
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 45 7E 04 00: call 0x53b392
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 14: jne 0x4f3566
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 6E 81 00 00: call 0x4fb6cc
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 04: jmp 0x4f356a
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 96: jmp 0x4f34fe
        __asm _emit 0xeb
        __asm _emit 0x96
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
