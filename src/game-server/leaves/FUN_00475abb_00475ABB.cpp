// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00475ABB .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_00475abb_00475ABB() {
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
        ; Exact mapped bytes E8 95 0D 00 00: call 0x476880
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 4
        ; Exact mapped bytes E8 71 0C 00 00: call 0x476770
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 68 0F 00 00: call 0x476a70
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x475b15
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1B: jmp 0x475b30
        __asm _emit 0xeb
        __asm _emit 0x1b
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 D3 0E 00 00: call 0x4769f0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 E9 FF FF: call 0x4744cc
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 A6 2C 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x2c
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
