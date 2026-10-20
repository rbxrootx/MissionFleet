// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004760CE .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_004760ce_004760CE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 82 07 00 00: call 0x476880
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 5E 06 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 55 09 00 00: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x476128
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1B: jmp 0x476143
        __asm _emit 0xeb
        __asm _emit 0x1b
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 C0 08 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 05: je 0x476141
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 02: jmp 0x476143
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 93 26 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
