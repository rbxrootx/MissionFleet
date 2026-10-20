// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED96F .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_004ed96f_004ED96F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 71 35 04 00: call 0x530ef1
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 11: je 0x4ed997
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 61 F5 FB FF: call 0x4acef0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xf5
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4ed99e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 32: je 0x4ed9dc
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        shl edx, 1
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 FB FF FF: call 0x4ed519
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
        ; Exact mapped bytes E8 C6 0B 00 00: call 0x4ee595
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push -1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 57 07 00 00: call 0x4ee133
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
