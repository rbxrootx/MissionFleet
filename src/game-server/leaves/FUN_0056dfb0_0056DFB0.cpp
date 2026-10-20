// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056DFB0 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_0056dfb0_0056DFB0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fef5h
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
        push ecx
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d8h
        mov dword ptr [ebp - 1ch], eax
        push 897h
        push 5d053ch
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 70 D1 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xd1
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EC E4 FD FF: call 0x54c4e4
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0B B9 FF FF: call 0x569919
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], edx
        push 8a1h
        push 5d053ch
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 36 D1 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xd1
        __asm _emit 0xf8
        __asm _emit 0xff
        push 58a178h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 59 D0 F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xd0
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 19: jne 0x56e059
        __asm _emit 0x75
        __asm _emit 0x19
        push 8a2h
        push 5d053ch
        ; Exact mapped bytes E8 B1 69 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 01: je 0x56e059
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CB: jne 0x56e02a
        __asm _emit 0x75
        __asm _emit 0xcb
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        ; Exact mapped bytes EB 4B: jmp 0x56e0bb
        __asm _emit 0xeb
        __asm _emit 0x4b
        push 584850h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 13 D0 F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd0
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56e095
        __asm _emit 0x75
        __asm _emit 0x14
        push 8a5h
        push 5d053ch
        ; Exact mapped bytes E8 70 69 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56e095
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
    }
}
