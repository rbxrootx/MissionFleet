// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411D2E .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_00411d2e_00411D2E() {
    __asm {
        mov eax, 43a47ch
        ; Exact mapped bytes E8 D0 D8 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ecx
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], eax
        and dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 0B: je 0x411d5a
        __asm _emit 0x74
        __asm _emit 0x0b
        push dword ptr [ebp + 14h]
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DA BF 01 00: call 0x42dd34
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes 8B 1D 60 C2 43 00: mov ebx, dword ptr [0x43c260]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [ebp - 10h]
        push edi
        mov edi, 43d574h
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push eax
        push edi
        push esi
        ; Exact mapped bytes E8 EB D8 00 00: call 0x41f661
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x411d81
        __asm _emit 0x74
        __asm _emit 0x04
        xor esi, esi
        ; Exact mapped bytes EB 7F: jmp 0x411e00
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 10h]
        push edi
        mov esi, dword ptr [eax - 8]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        sub esi, eax
        lea eax, [ebp + 14h]
        push esi
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 CC A8 01 00: call 0x42c665
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 10h]
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 3E BF 01 00: call 0x42dce4
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        and byte ptr [ebp - 4], 0
        lea ecx, [ebp + 14h]
        ; Exact mapped bytes E8 F9 BD 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        xor esi, esi
        cmp dword ptr [ebp + 8], esi
        ; Exact mapped bytes 74 21: je 0x411dda
        __asm _emit 0x74
        __asm _emit 0x21
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x411dda
        __asm _emit 0x74
        __asm _emit 0x18
        push 43d5ech
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 52 C1 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 47 C1 01 00: call 0x42df21
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        xor eax, eax
        cmp dword ptr [ebp + 0ch], esi
        ; Exact mapped bytes 74 03: je 0x411de4
        __asm _emit 0x74
        __asm _emit 0x03
        push 1
        pop eax
        cmp dword ptr [ebp + 10h], esi
        ; Exact mapped bytes 74 02: je 0x411deb
        __asm _emit 0x74
        __asm _emit 0x02
        or al, 2
        cmp dword ptr [ebp + 18h], esi
        ; Exact mapped bytes 74 02: je 0x411df2
        __asm _emit 0x74
        __asm _emit 0x02
        or al, 4
        mov ecx, dword ptr [ebp - 14h]
        push eax
        push dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov esi, eax
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 9F BD 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
