// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF53B .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_004ff53b_004FF53B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 83 DC 02 00: call 0x52d1d3
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xdc
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 05: jne 0x4ff55a
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 4E: jmp 0x4ff5a8
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 64h]
        and edx, 10h
        test edx, edx
        ; Exact mapped bytes 74 0A: je 0x4ff571
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A2 76 FB FF: call 0x4b6c13
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x76
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 20 D5 02 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x4ff5a6
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 6ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes E8 0C E4 02 00: call 0x52d9b2
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
