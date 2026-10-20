// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00556CDC .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_00556cdc_00556CDC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 61h
        push 67c630h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 6D 35 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 30h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 34: je 0x556d37
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 30h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 1C: jl 0x556d2e
        __asm _emit 0x7c
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        push edx
        ; Exact mapped bytes E8 44 51 FF FF: call 0x54be62
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 67c63ch
        ; Exact mapped bytes E8 EC 98 F4 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x98
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 09: jmp 0x556d37
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C3 51 FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
