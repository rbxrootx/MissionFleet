// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CCA0F .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_004cca0f_004CCA0F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D1 82 05 00: call 0x524cf1
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x82
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 11: je 0x4cca37
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 51 C6 F9 FF: call 0x469080
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc6
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4cca3e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 32: je 0x4cca7c
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        shl edx, 1
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 FB FF FF: call 0x4cc5b9
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + eax + 1]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 C6 0B 00 00: call 0x4cd635
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push -1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 57 07 00 00: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
