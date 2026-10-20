// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AC5E0 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_004ac5e0_004AC5E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x4ac61a
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58c274h
        push 0
        push 77h
        push 58c258h
        push 2
        ; Exact mapped bytes E8 1F 45 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ac61a
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4ac5f6
        __asm _emit 0x75
        __asm _emit 0xd6
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        and eax, 83h
        test eax, eax
        ; Exact mapped bytes 74 5B: je 0x4ac68a
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 68 C0 00 00: call 0x4b86a0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 19 BF 00 00: call 0x4b8560
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 DA BD 00 00: call 0x4b8430
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 7D 09: jge 0x4ac666
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes EB 24: jmp 0x4ac68a
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 1B: je 0x4ac68a
        __asm _emit 0x74
        __asm _emit 0x1b
        push 2
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 43 E6 FF FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 1ch], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], 0
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
