// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005718A5 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_005718a5_005718A5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 39 F0 FF FF: call 0x5708f2
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x5718d6
        __asm _emit 0x75
        __asm _emit 0x14
        push 27eh
        push 5d0930h
        ; Exact mapped bytes E8 2F 31 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5718d6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5718bc
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 4]
        push ecx
        push 3
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
