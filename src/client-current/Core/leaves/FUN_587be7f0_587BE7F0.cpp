// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BE7F0 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_587be7f0_587BE7F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be27ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 74 25: je 0x587be833
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 28 28 07 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x28
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 90h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 94h], 0
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x587be8cc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587be855
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 5ch]
        ; Exact mapped bytes 7D 45: jge 0x587be8a5
        __asm _emit 0x7d
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 31: je 0x587be8a3
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 BE 27 07 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x27
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes EB A7: jmp 0x587be84c
        __asm _emit 0xeb
        __asm _emit 0xa7
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 14h], ecx
        push 4
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 78 27 07 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x27
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
