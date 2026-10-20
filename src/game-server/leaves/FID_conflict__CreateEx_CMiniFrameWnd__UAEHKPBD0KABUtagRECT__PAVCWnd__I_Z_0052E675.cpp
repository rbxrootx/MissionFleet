// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052E675 .. +0x98 bytes.
extern "C" __declspec(naked) void FID_conflict__CreateEx_CMiniFrameWnd__UAEHKPBD0KABUtagRECT__PAVCWnd__I_Z_0052E675() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c8h
        ; Exact mapped bytes E8 6D F4 FB FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 08: je 0x52e69e
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 1C: jmp 0x52e6ba
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 0
        push 0
        push 7f00h
        push 0
        ; Exact mapped bytes FF 15 68 26 5E 00: call dword ptr [0x5e2668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        push 8
        ; Exact mapped bytes E8 21 51 FC FF: call 0x4f37d8
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov ecx, dword ptr [ebp + 1ch]
        ; Exact mapped bytes E8 84 D4 00 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [eax + 0ch]
        sub edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp + 18h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 3D FC FF: call 0x4f24dc
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
