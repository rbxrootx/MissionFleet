// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C3870 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_587c3870_587C3870() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x587c391f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x587c391f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 8]
        push edx
        push 588d19b8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test eax, eax
        ; Exact mapped bytes 75 6C: jne 0x587c391f
        __asm _emit 0x75
        __asm _emit 0x6c
        mov dword ptr [ebp - 0ch], 1
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 5F: je 0x587c391f
        __asm _emit 0x74
        __asm _emit 0x5f
        lea eax, [ebp - 10h]
        push eax
        push -1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [edx + 24h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        nop
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 74 02: je 0x587c38e3
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 3A: jmp 0x587c391d
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 74 23: je 0x587c390f
        __asm _emit 0x74
        __asm _emit 0x23
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 68 00 00 00: call 0x587c3960
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 0E: jmp 0x587c391d
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 9B: jmp 0x587c38ba
        __asm _emit 0xeb
        __asm _emit 0x9b
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
