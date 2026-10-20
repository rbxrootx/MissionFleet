// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561268 .. +0x4C bytes.
extern "C" __declspec(naked) void _OnContextHelp_COleFrameHook__UAEHH_Z_00561268() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 78h
        push 67c6f0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E1 8F F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x8f
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 0E: je 0x561296
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        mov ecx, dword ptr [eax + 5ch]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 07: je 0x56129d
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 11: jmp 0x5612ae
        __asm _emit 0xeb
        __asm _emit 0x11
        push 56186ch
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 04 00 00: call 0x5616c8
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
