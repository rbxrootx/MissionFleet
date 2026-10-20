// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00552B03 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_00552b03_00552B03() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f94ch
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
        mov dword ptr [eax], 58a35ch
        mov dword ptr [ebp - 4], 0
        push 43h
        push 5cfa08h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 21 86 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x86
        __asm _emit 0xfa
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6F 01 00 00: call 0x552cb8
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 18: je 0x552b6a
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 1ch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 8B 98 FF FF: call 0x54c3fd
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 0C B7 FD FF: call 0x52e283
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DB FA FF FF: call 0x552661
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xfa
        __asm _emit 0xff
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
