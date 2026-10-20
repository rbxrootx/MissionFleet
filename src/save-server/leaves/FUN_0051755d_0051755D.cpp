// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051755D .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_0051755d_0051755D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 74 02: je 0x517571
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 7F: jmp 0x5175f0
        __asm _emit 0xeb
        __asm _emit 0x7f
        ; Exact mapped bytes E8 FF 8B 02 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 75 0E: jne 0x51759a
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes 74 52: je 0x5175ec
        __asm _emit 0x74
        __asm _emit 0x52
        lea edx, [ebp - 0ch]
        push edx
        push 4
        push 12h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 90 B9 68 00: call dword ptr [0x68b990]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        and edx, 40h
        test edx, edx
        ; Exact mapped bytes 74 0E: je 0x5175c6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        or ecx, 40h
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x5175d1
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        and al, 0bfh
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [eax + 4], edx
        mov eax, 1
        ; Exact mapped bytes EB 06: jmp 0x5175f2
        __asm _emit 0xeb
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x5175f2
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
