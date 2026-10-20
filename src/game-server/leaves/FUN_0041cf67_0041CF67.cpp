// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041CF67 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_0041cf67_0041CF67() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 0ch]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 3F 1C 00 00: call 0x41ebe0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        ; Exact mapped bytes E8 1B 1B 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 12 1E 00 00: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x41cfcb
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3C: jmp 0x41d007
        __asm _emit 0xeb
        __asm _emit 0x3c
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 7D 1D 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 26: je 0x41d005
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 0ch]
        add eax, 80h
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E2 B7 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb7
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x41d007
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 CE B7 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xb7
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
