// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100238E0 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_100238e0_100238E0() {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov edx, dword ptr [ebp + 84h]
        inc edx
        mov dword ptr [ebp + 84h], edx
        mov eax, dword ptr [ebp + 5ch]
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x10023926
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp + 60h]
        sub ecx, eax
        sar ecx, 2
        ; Exact mapped bytes 74 22: je 0x10023926
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, ebp
        ; Exact mapped bytes E8 A5 00 00 00: call 0x100239b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 5ch]
        mov eax, dword ptr [ebp + 60h]
        cmp esi, eax
        ; Exact mapped bytes 74 11: je 0x10023926
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 14 DC FD FF: call 0x10001530
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 60h]
        add esi, 4
        cmp esi, eax
        ; Exact mapped bytes 75 EF: jne 0x10023915
        __asm _emit 0x75
        __asm _emit 0xef
        mov eax, dword ptr [ebp + 84h]
        xor edx, edx
        mov ecx, 32h
        div ecx
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x10023940
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, ebp
        ; Exact mapped bytes E8 10 0A 00 00: call 0x10024350
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 50h]
        cmp dword ptr [edx + 4], 0f4241h
        ; Exact mapped bytes 74 56: je 0x100239a2
        __asm _emit 0x74
        __asm _emit 0x56
        mov ebx, dword ptr [ebp + 5ch]
        mov eax, dword ptr [ebp + 60h]
        cmp ebx, eax
        ; Exact mapped bytes 74 41: je 0x10023997
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebx]
        mov edi, dword ptr [eax + 10h]
        mov ecx, dword ptr [eax + 14h]
        cmp edi, ecx
        ; Exact mapped bytes 74 2B: je 0x1002398d
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [edi]
        mov esi, dword ptr [eax + 0ch]
        mov ecx, dword ptr [eax + 10h]
        cmp esi, ecx
        ; Exact mapped bytes 74 15: je 0x10023983
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 8B E8 FD FF: call 0x10002200
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x100239a2
        __asm _emit 0x75
        __asm _emit 0x29
        mov eax, dword ptr [edi]
        add esi, 4
        cmp esi, dword ptr [eax + 10h]
        ; Exact mapped bytes 75 EB: jne 0x1002396e
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ecx, dword ptr [ebx]
        add edi, 4
        cmp edi, dword ptr [ecx + 14h]
        ; Exact mapped bytes 75 D5: jne 0x10023962
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 60h]
        add ebx, 4
        cmp ebx, eax
        ; Exact mapped bytes 75 BF: jne 0x10023956
        __asm _emit 0x75
        __asm _emit 0xbf
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 BE B3 04 00: call 0x1006ed60
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
