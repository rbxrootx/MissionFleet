// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056104C .. +0x9F bytes.
extern "C" __declspec(naked) void __1COleFrameHook__UAE_XZ_0056104C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f5d4h
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
        mov dword ptr [eax], 63cb44h
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 2E: je 0x5610af
        __asm _emit 0x74
        __asm _emit 0x2e
        push 31h
        push 67c6f0h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes E8 CC 91 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x91
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [edx + 68h]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 0D: jne 0x5610af
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [edx + 68h], 0
        push 36h
        push 67c6f0h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 A1 91 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x91
        __asm _emit 0xf7
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 3ch
        ; Exact mapped bytes E8 1E B8 F6 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xb8
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FE 5C F7 FF: call 0x4d6ddb
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5c
        __asm _emit 0xf7
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
