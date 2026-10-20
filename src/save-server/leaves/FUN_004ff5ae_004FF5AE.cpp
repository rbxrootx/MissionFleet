// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF5AE .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_004ff5ae_004FF5AE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 B6 0B 04 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x0b
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 108h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 36: jne 0x4ff606
        __asm _emit 0x75
        __asm _emit 0x36
        push -1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 E4 00 00 00: call dword ptr [eax + 0xe4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 108h], 0
        ; Exact mapped bytes 74 14: je 0x4ff600
        __asm _emit 0x74
        __asm _emit 0x14
        push 22ch
        push 6756ach
        ; Exact mapped bytes E8 45 97 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ff600
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4ff5e0
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 74 19: je 0x4ff628
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 A2 39 01 00: call 0x512fc0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 6ch], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0E 11 FD FF: call 0x4d073e
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x11
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
