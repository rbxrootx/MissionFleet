// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049059D .. +0x57 bytes.
extern "C" __declspec(naked) void _GetDlgItem_COleControlContainer__UBEXHPAPAUHWND_____Z_0049059D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes E8 97 B5 0A 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb5
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 D8 28 5E 00: call dword ptr [0x5e28d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 21: jne 0x4905e6
        __asm _emit 0x75
        __asm _emit 0x21
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 09: je 0x4905e6
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 20h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
