// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B6C50 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_587b6c50_587B6C50() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e060h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 2
        ; Exact mapped bytes 74 43: je 0x587b6cc1
        __asm _emit 0x74
        __asm _emit 0x43
        push 587b6870h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx - 4]
        push edx
        push 40h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 64 B0 07 00: call 0x58831cf9
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb0
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1
        ; Exact mapped bytes 74 1C: je 0x587b6cb9
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx - 4]
        shl eax, 6
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 4
        push ecx
        ; Exact mapped bytes E8 CE AE 07 00: call 0x58831b84
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xae
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 10h]
        sub eax, 4
        ; Exact mapped bytes EB 21: jmp 0x587b6ce2
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A7 FB FF FF: call 0x587b6870
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        and edx, 1
        ; Exact mapped bytes 74 0E: je 0x587b6cdf
        __asm _emit 0x74
        __asm _emit 0x0e
        push 40h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 58 A3 07 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xa3
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
