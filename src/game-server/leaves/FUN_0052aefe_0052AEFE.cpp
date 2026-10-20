// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052AEFE .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_0052aefe_0052AEFE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 46: je 0x52af5a
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes E8 29 A6 00 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 D8 27 5E 00: call dword ptr [0x5e27d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 27: jne 0x52af5a
        __asm _emit 0x75
        __asm _emit 0x27
        push 5c9008h
        push 5c9038h
        ; Exact mapped bytes E8 D3 4C FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x4c
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 90 AC 00 00 00: call dword ptr [eax + 0xac]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x52afea
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0ach
        ; Exact mapped bytes E8 91 2B FC FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x2b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 D0 0B 01 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ecx + 0ch]
        sub eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ecx + 8]
        sub eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 21 75 FC FF: call 0x4f24dc
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x75
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x52afe5
        __asm _emit 0x75
        __asm _emit 0x26
        push 5c903ch
        push 5c9064h
        ; Exact mapped bytes E8 47 4C FA FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x4c
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x52afe1
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 64 25 5E 00: call dword ptr [0x5e2564]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x52afea
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
