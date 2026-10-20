// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051D1B8 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_0051d1b8_0051D1B8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 40h], ecx
        push -1
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 73 62 F8 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51d1e7
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fah
        push 6778d4h
        ; Exact mapped bytes E8 5E BB 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51d1e7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x51d1c4
        __asm _emit 0x75
        __asm _emit 0xd7
        push 3ch
        push 0
        lea edx, [ebp - 3ch]
        push edx
        ; Exact mapped bytes E8 C6 86 F4 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov byte ptr [ebp - 25h], 1
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 3ch], eax
        push 20h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 09 00 00 00: call 0x51d230
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
