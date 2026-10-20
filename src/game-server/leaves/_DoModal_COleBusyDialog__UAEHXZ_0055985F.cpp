// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055985F .. +0xCB bytes.
extern "C" __declspec(naked) void _DoModal_COleBusyDialog__UAEHXZ_0055985F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 D5 22 FE FF: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 07 41 FB FF: call 0x50d984
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x41
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 68h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 9D 8A F9 FF: call 0x4f232f
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x8a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        add edx, 60h
        push edx
        ; Exact mapped bytes E8 E2 F4 F6 FF: call 0x4c8d80
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf4
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 7B 8B F9 FF: call 0x4f2421
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x8b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 79 82 F9 FF: call 0x4f1b27
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0C: je 0x5598c0
        __asm _emit 0x74
        __asm _emit 0x0c
        push 1
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 84 26 5E 00: call dword ptr [0x5e2684]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 75 07: jne 0x5598cd
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 2
        ; Exact mapped bytes EB 59: jmp 0x559926
        __asm _emit 0xeb
        __asm _emit 0x59
        cmp dword ptr [ebp - 4], 75h
        ; Exact mapped bytes 75 0F: jne 0x5598e2
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], 1
        ; Exact mapped bytes EB 3F: jmp 0x559921
        __asm _emit 0xeb
        __asm _emit 0x3f
        cmp dword ptr [ebp - 4], 76h
        ; Exact mapped bytes 75 0F: jne 0x5598f7
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8ch], 2
        ; Exact mapped bytes EB 2A: jmp 0x559921
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp dword ptr [ebp - 4], 77h
        ; Exact mapped bytes 75 0F: jne 0x55990c
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 8ch], 3
        ; Exact mapped bytes EB 15: jmp 0x559921
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 04 FE FF FF: call 0x55971c
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8ch], eax
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
