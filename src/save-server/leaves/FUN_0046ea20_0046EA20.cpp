// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046EA20 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_0046ea20_0046EA20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 0E: je 0x46ea3b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 0F BE 42 08: movsx eax, byte ptr [edx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x46ea45
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x46ead2
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 74 24: je 0x46ea77
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        add edx, 8
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        add ecx, 8
        push ecx
        ; Exact mapped bytes E8 44 37 00 00: call 0x4721b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x46ea77
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5B: jmp 0x46ead2
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x46ea8f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        and edx, 8
        test edx, edx
        ; Exact mapped bytes 74 39: je 0x46eac8
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x46eaa7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x46eac8
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x46eabf
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x46eac8
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x46eacf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
