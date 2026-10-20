// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D30C8 .. +0x69 bytes.
extern "C" __declspec(naked) void _EnableScrollBarCtrl_CWnd__QAEXHH_Z_004D30C8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 3
        ; Exact mapped bytes 75 1E: jne 0x4d30f5
        __asm _emit 0x75
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E3 FF FF FF: call 0x4d30c8
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D5 FF FF FF: call 0x4d30c8
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 36: jmp 0x4d312b
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0E: je 0x4d311b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 80 37 00 00: call 0x4d6899
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x4d312b
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AC 96 05 00: call 0x52c7d7
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x96
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
