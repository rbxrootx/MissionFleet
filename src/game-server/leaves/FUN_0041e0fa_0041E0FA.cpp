// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E0FA .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_0041e0fa_0041E0FA() {
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
        ; Exact mapped bytes E8 B6 0A 00 00: call 0x41ebe0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 92 09 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 89 0C 00 00: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x41e154
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2F: jmp 0x41e183
        __asm _emit 0xeb
        __asm _emit 0x2f
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 F4 0B 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C BA FF FF: call 0x419bca
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 53 A6 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa6
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
