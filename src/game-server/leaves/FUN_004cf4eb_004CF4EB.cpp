// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CF4EB .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_004cf4eb_004CF4EB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        lea eax, [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 78 F0 FD FF: call 0x4ae570
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 06: je 0x4cf50a
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 26: jne 0x4cf530
        __asm _emit 0x75
        __asm _emit 0x26
        push 5c4ef8h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 5c4ee8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 55 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D8 57 06 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x57
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 ED 55 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 2B: jmp 0x4cf55b
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 18h], 0
        push 5c4f04h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 5c4efch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CE 55 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C7 55 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C0 55 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x55
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
