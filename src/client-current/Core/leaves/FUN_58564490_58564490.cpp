// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58564490 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_58564490_58564490() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 88h], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 168h], 0
        ; Exact mapped bytes 74 24: je 0x585644d5
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5B 78 F2 FF: call 0x5848bd20
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x78
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4C C6 F4 FF: call 0x584b0b20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xc6
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
