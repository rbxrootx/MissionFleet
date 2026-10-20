// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047070E .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_0047070e_0047070E() {
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
        push 18h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 DD 88 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], 0
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes E8 50 E9 FC FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 08: je 0x47076d
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 11 6F FD FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6f
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 69 80 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
