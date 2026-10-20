// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00462B40 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_00462b40_00462B40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 30h
        mov dword ptr [ebp - 8], eax
        push 2a2h
        push 67ca48h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 FE 76 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x76
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 20h]
        add ecx, 0d8h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax + 0d8h]
        push ecx
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 05: je 0x462b97
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 2B: jmp 0x462bc2
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AA ED FF FF: call 0x461949
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1A: je 0x462bbf
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        add eax, 1ch
        push eax
        push 641498h
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
