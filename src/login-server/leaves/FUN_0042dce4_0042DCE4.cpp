// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DCE4 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_0042dce4_0042DCE4() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, ecx
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [edi]
        cmp ecx, eax
        ; Exact mapped bytes 74 39: je 0x42dd2d
        __asm _emit 0x74
        __asm _emit 0x39
        cmp dword ptr [ecx - 0ch], 0
        ; Exact mapped bytes 7D 0B: jge 0x42dd05
        __asm _emit 0x7d
        __asm _emit 0x0b
        add ecx, -0ch
        ; Exact mapped bytes 3B 0D 10 9B 44 00: cmp ecx, dword ptr [0x449b10]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 06: jne 0x42dd0b
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [eax - 0ch], 0
        ; Exact mapped bytes 7D 0D: jge 0x42dd18
        __asm _emit 0x7d
        __asm _emit 0x0d
        push eax
        mov ecx, esi
        push dword ptr [eax - 8]
        ; Exact mapped bytes E8 A1 FF FF FF: call 0x42dcb7
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x42dd2d
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, esi
        ; Exact mapped bytes E8 C3 FD FF FF: call 0x42dae2
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi]
        mov dword ptr [esi], eax
        add eax, -0ch
        push eax
        ; Exact mapped bytes FF 15 14 C2 43 00: call dword ptr [0x43c214]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
