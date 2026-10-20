// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A5B4 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_0056a5b4_0056A5B4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 1e8h
        push 5d053ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 90 0B F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x0b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 34: je 0x56a610
        __asm _emit 0x74
        __asm _emit 0x34
        ; Exact mapped bytes FF 15 30 28 5E 00: call dword ptr [0x5e2830]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x56a610
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ach]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ach]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 09: je 0x56a610
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 7A 2E FE FF: call 0x54d48a
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0xff
        push 1f1h
        push 5d053ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 3D 0B F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x0b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
