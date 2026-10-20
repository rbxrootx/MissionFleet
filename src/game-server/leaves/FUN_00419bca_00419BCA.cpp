// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419BCA .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_00419bca_00419BCA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], ecx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 4
        ; Exact mapped bytes E8 61 08 00 00: call 0x41a460
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 4
        ; Exact mapped bytes E8 8D 08 00 00: call 0x41a4a0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 4]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 9C 0B 00 00: call 0x41a7c0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x419c78
        __asm _emit 0x74
        __asm _emit 0x4b
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 DB 0A 00 00: call 0x41a710
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1E: je 0x419c68
        __asm _emit 0x74
        __asm _emit 0x1e
        push 0
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CA D5 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xd5
        __asm _emit 0x06
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 CA 0A 00 00: call 0x41a740
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A0: jmp 0x419c18
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov eax, 1
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 59 EB 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xeb
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
