// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054FDA0 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_0054fda0_0054FDA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 11fh
        push 67bf90h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 A1 A4 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0xf8
        __asm _emit 0xff
        push 120h
        push 67bf90h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 8E A4 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AD 64 F8 FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x64
        __asm _emit 0xf8
        __asm _emit 0xff
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x54fdff
        __asm _emit 0x74
        __asm _emit 0x15
        push 0
        push 0
        push 0bh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 B8 FD FF: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x54fe2c
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 19 29 01 00: call 0x56273b
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 77 1B 00 00: call 0x5519a3
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x54fe40
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0
        push 1
        push 0bh
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F9 B7 FD FF: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x54fe6a
        __asm _emit 0x74
        __asm _emit 0x14
        push 137h
        push 67bf90h
        ; Exact mapped bytes E8 DB 8E FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54fe6a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D0: jne 0x54fe40
        __asm _emit 0x75
        __asm _emit 0xd0
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
