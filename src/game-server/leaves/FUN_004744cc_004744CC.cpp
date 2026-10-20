// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004744CC .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_004744cc_004744CC() {
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
        ; Exact mapped bytes E8 5F 5F FA FF: call 0x41a460
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x5f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 4
        ; Exact mapped bytes E8 8B 5F FA FF: call 0x41a4a0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x5f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 4]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 9A 62 FA FF: call 0x41a7c0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x62
        __asm _emit 0xfa
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 64: je 0x474593
        __asm _emit 0x74
        __asm _emit 0x64
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 D9 61 FA FF: call 0x41a710
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x61
        __asm _emit 0xfa
        __asm _emit 0xff
        add eax, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 37: je 0x474583
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 168h]
        mov dword ptr [edx + 60h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 54h], 0
        mov edx, dword ptr [ebp - 0ch]
        add edx, 150h
        push edx
        push 5bb32ch
        ; Exact mapped bytes E8 95 B6 05 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 8
        push 0
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 AF 61 FA FF: call 0x41a740
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x61
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 87: jmp 0x47451a
        __asm _emit 0xeb
        __asm _emit 0x87
        mov eax, 1
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 3E 42 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x42
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
