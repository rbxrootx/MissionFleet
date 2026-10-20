// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588758F6 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_588758f6_588758F6() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        cmp edi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 51: je 0x58875957
        __asm _emit 0x74
        __asm _emit 0x51
        mov esi, edi
        mov ebx, dword ptr [esi]
        test ebx, ebx
        ; Exact mapped bytes 74 0E: je 0x5887591c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, ebx
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test al, al
        ; Exact mapped bytes 74 08: je 0x58875924
        __asm _emit 0x74
        __asm _emit 0x08
        add esi, 8
        cmp esi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 E4: jne 0x58875908
        __asm _emit 0x75
        __asm _emit 0xe4
        cmp esi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 2E: je 0x58875957
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp esi, edi
        ; Exact mapped bytes 74 26: je 0x58875953
        __asm _emit 0x74
        __asm _emit 0x26
        add esi, -4
        cmp dword ptr [esi - 4], 0
        ; Exact mapped bytes 74 13: je 0x58875949
        __asm _emit 0x74
        __asm _emit 0x13
        mov ebx, dword ptr [esi]
        test ebx, ebx
        ; Exact mapped bytes 74 0D: je 0x58875949
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0
        mov ecx, ebx
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        pop ecx
        sub esi, 8
        lea eax, [esi + 4]
        cmp eax, edi
        ; Exact mapped bytes 75 DD: jne 0x58875930
        __asm _emit 0x75
        __asm _emit 0xdd
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x58875959
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
