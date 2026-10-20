// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10043D10 .. +0x13A bytes.
extern "C" __declspec(naked) void FUN_10043d10_10043D10() {
    __asm {
        push -1
        push 1016e743h
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
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 18h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 28h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ebp
        push ecx
        push edx
        push eax
        mov ecx, esi
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes E8 E0 EF FF FF: call 0x10042d30
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, 2dh
        xor eax, eax
        lea edi, [esi + 17ch]
        mov dword ptr [esi], 1017596ch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        xor ebx, ebx
        mov ecx, 1200h
        lea edi, [esi + 3d0h]
        mov dword ptr [esi + 70h], ebx
        ; Exact mapped bytes 66 89 9E 3C 02 00 00: mov word ptr [esi + 0x23c], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 240h], ebx
        mov dword ptr [esi + 244h], ebx
        mov dword ptr [esi + 3c4h], ebx
        mov dword ptr [esi + 310h], ebx
        mov dword ptr [esi + 25ch], ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 2bh
        lea edi, [esi + 260h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, 2bh
        lea edi, [esi + 314h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, 0aaaaaaaah
        push 58h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi + 30ch], eax
        mov dword ptr [esi + 3c0h], eax
        ; Exact mapped bytes E8 CE 89 12 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x89
        __asm _emit 0x12
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 23: je 0x10043e07
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 66 8B 4E 26: mov cx, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x26
        mov edx, dword ptr [esp + 2ch]
        push ecx
        push ebx
        push ebx
        push ebp
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B7 AB 0B 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xab
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10043e09
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 3c8h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [esi + 24ch], ebx
        mov dword ptr [esi + 250h], ebx
        mov dword ptr [esi + 254h], ebx
        mov dword ptr [esi + 258h], ebx
        mov dword ptr [esi + 3cch], ebx
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
