// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D23DF .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_004d23df_004D23DF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 48h
        push 5cb220h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 65 8D 02 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 70h]
        and edx, 10h
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x4d2419
        __asm _emit 0x75
        __asm _emit 0x11
        push 49h
        push 5cb220h
        ; Exact mapped bytes E8 EC 25 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d2419
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DC: jne 0x4d23fb
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 75 11: jne 0x4d2439
        __asm _emit 0x75
        __asm _emit 0x11
        push 4ah
        push 5cb220h
        ; Exact mapped bytes E8 CC 25 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d2439
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4d241f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 10 E2 01 00: call 0x4f0657
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 60h], eax
        mov edx, dword ptr [ebp - 8]
        add edx, 5ch
        push edx
        ; Exact mapped bytes E8 B3 67 FF FF: call 0x4c8c0c
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 68 E2 01 00: call 0x4f06cc
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 08: je 0x4d2472
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4d2479
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 2
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
