// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054306F .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_0054306f_0054306F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 33: je 0x5430b1
        __asm _emit 0x74
        __asm _emit 0x33
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 5D A7 F4 FF: call 0x48d800
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa7
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 20 00 00 00: call 0x5430cf
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0C: jmp 0x5430bd
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1C 01 00 00: call 0x5431d9
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B6 01 00 00: call 0x54327f
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
