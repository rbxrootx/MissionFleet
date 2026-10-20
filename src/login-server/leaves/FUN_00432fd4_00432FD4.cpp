// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432FD4 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_00432fd4_00432FD4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push edi
        mov ebx, ecx
        push 10h
        ; Exact mapped bytes E8 09 A9 FF FF: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 0D: je 0x432ff5
        __asm _emit 0x74
        __asm _emit 0x0d
        push -1
        mov ecx, eax
        ; Exact mapped bytes E8 7C FF FF FF: call 0x432f6d
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x432ff7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push esi
        ; Exact mapped bytes 8B 35 DC C0 43 00: mov esi, dword ptr [0x43c0dc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xdc
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push 2
        push 0
        lea eax, [ebp - 4]
        push 0
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push eax
        push dword ptr [ebx + 4]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push eax
        ; Exact mapped bytes FF 15 00 C1 43 00: call dword ptr [0x43c100]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        pop esi
        ; Exact mapped bytes 75 1B: jne 0x433037
        __asm _emit 0x75
        __asm _emit 0x1b
        test edi, edi
        ; Exact mapped bytes 74 09: je 0x433029
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [edi]
        push 1
        mov ecx, edi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        push 0
        ; Exact mapped bytes FF 15 C0 C1 43 00: call dword ptr [0x43c1c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 37 07 00 00: call 0x43376e
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 4], eax
        mov eax, dword ptr [ebx + 8]
        mov dword ptr [edi + 8], eax
        mov eax, edi
        pop edi
        pop ebx
        leave
        ret
    }
}
