// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419C8D .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_00419c8d_00419C8D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], ecx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 4
        ; Exact mapped bytes E8 9E 07 00 00: call 0x41a460
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 4
        ; Exact mapped bytes E8 CA 07 00 00: call 0x41a4a0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 4]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 D9 0A 00 00: call 0x41a7c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x419d79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 14 0A 00 00: call 0x41a710
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 55: je 0x419d66
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [edx + 60h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 54h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 58h], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 168h]
        ; Exact mapped bytes 66 C7 42 5C 00 00: mov word ptr [edx + 0x5c], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x42
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        add eax, 150h
        push eax
        push 5a13e8h
        ; Exact mapped bytes E8 B2 5E 0B 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x5e
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 8
        push 0
        lea ecx, [ebp - 1ch]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 CC 09 00 00: call 0x41a740
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 62 FF FF FF: jmp 0x419cdb
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 58 EA 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xea
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
