// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B5430 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_587b5430_587B5430() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 6E: je 0x587b54b7
        __asm _emit 0x74
        __asm _emit 0x6e
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 2ch], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 25: jne 0x587b5482
        __asm _emit 0x75
        __asm _emit 0x25
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A7 F2 D0 FF: call 0x584c4710
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf2
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 1A: jmp 0x587b549c
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 30h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 77: emms
        __asm _emit 0x0f
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 8F BB 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xbb
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
