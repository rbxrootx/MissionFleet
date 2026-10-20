// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F31A .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_0054f31a_0054F31A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1d2h
        push 67bee8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 2C AF F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xaf
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 36: je 0x54f373
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 50: call dword ptr [eax + 0x50]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 1C: je 0x54f36d
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x54f348
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        add ecx, 14h
        ; Exact mapped bytes E8 D4 D3 F7 FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd3
        __asm _emit 0xf7
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
