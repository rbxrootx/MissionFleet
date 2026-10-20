// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005612B4 .. +0xED bytes.
extern "C" __declspec(naked) void FUN_005612b4_005612B4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        push 63ccf8h
        ; Exact mapped bytes E8 35 8F F7 FF: call 0x4da203
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x8f
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x561399
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 18 00 00: call 0x562b89
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 0ch]
        and edx, 10h
        test edx, edx
        ; Exact mapped bytes 74 65: je 0x561358
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 9B 61 FD FF: call 0x537499
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x61
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 53: jne 0x561356
        __asm _emit 0x75
        __asm _emit 0x53
        xor ecx, ecx
        cmp dword ptr [ebp + 8], 0
        setne cl
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 80h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 74 35: je 0x561356
        __asm _emit 0x74
        __asm _emit 0x35
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2F: je 0x561356
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        shl eax, 10h
        or edx, eax
        push edx
        push 11fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EA A2 FC FF: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 45: jmp 0x56139b
        __asm _emit 0xeb
        __asm _emit 0x45
        ; Exact mapped bytes EB 41: jmp 0x561399
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 74 35: je 0x561399
        __asm _emit 0x74
        __asm _emit 0x35
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2F: je 0x561399
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        shl ecx, 10h
        or eax, ecx
        push eax
        push 11fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A7 A2 FC FF: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x56139b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
