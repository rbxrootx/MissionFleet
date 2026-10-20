// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004754D9 .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_004754d9_004754D9() {
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
        ; Exact mapped bytes E8 74 13 00 00: call 0x476880
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 50 12 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 47 15 00 00: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x475536
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5D: jmp 0x475593
        __asm _emit 0xeb
        __asm _emit 0x5d
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 B2 14 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 3E: je 0x475591
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [edx + 54h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 60h], 0
        mov edx, dword ptr [ebp - 0ch]
        add edx, 150h
        push edx
        push 5bb398h
        ; Exact mapped bytes E8 8E A6 05 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x475593
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 43 32 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x32
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
