// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00476349 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_00476349_00476349() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 4
        ; Exact mapped bytes E8 FD 04 00 00: call 0x476880
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 4
        ; Exact mapped bytes E8 D9 03 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 D0 06 00 00: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x4763ad
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 58: jmp 0x476405
        __asm _emit 0xeb
        __asm _emit 0x58
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 3B 06 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 42: je 0x476403
        __asm _emit 0x74
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1A: je 0x4763ed
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 F8 23 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x4763f4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 4
        ; Exact mapped bytes E8 1D 04 00 00: call 0x476820
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        pop esi
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 D0 23 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x23
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
