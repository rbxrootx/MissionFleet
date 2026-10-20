// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004755A3 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_004755a3_004755A3() {
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
        ; Exact mapped bytes E8 AA 12 00 00: call 0x476880
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 86 11 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 7D 14 00 00: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x475600
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 4C: jmp 0x47564c
        __asm _emit 0xeb
        __asm _emit 0x4c
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 E8 13 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 2D: je 0x47564a
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 0ch]
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
        ; Exact mapped bytes E8 72 D0 00 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x47564c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 8A 31 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x31
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
