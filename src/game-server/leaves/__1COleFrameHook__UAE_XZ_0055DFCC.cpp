// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055DFCC .. +0x9F bytes.
extern "C" __declspec(naked) void __1COleFrameHook__UAE_XZ_0055DFCC() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57faf4h
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
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58a51ch
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 2E: je 0x55e02f
        __asm _emit 0x74
        __asm _emit 0x2e
        push 31h
        push 5cff18h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes E8 4C D1 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [edx + 68h]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 0D: jne 0x55e02f
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [edx + 68h], 0
        push 36h
        push 5cff18h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 21 D1 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 FE F7 F8 FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DE 9C F9 FF: call 0x4f7d3b
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x9c
        __asm _emit 0xf9
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
