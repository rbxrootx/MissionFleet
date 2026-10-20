// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005892B0 .. +0x7E bytes.
extern "C" __declspec(naked) void __1CWinThread__UAE_XZ_005892B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c68ah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 635824h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 28h], 0
        ; Exact mapped bytes 74 0D: je 0x5892f4
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 28h]
        push eax
        ; Exact mapped bytes FF 15 C4 B7 68 00: call dword ptr [0x68b7c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 CB 73 FB FF: call 0x5406c4
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x73
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 0A: jne 0x589311
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BB DA F4 FF: call 0x4d6ddb
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xda
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
