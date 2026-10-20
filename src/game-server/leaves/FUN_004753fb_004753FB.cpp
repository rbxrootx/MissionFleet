// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004753FB .. +0xDE bytes.
extern "C" __declspec(naked) void FUN_004753fb_004753FB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 52 14 00 00: call 0x476880
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 2E 13 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 25 16 00 00: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x475458
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 71: jmp 0x4754c9
        __asm _emit 0xeb
        __asm _emit 0x71
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 90 15 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 52: je 0x4754c7
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 54h], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 60h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 0B D2 00 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        add eax, 150h
        push eax
        push 5bb378h
        ; Exact mapped bytes E8 58 A7 05 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xa7
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4754c9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 0D 33 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
