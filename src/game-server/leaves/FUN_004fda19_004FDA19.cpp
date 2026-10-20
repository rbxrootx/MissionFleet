// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FDA19 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_004fda19_004FDA19() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e0adh
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
        sub esp, 10h
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 586a0ch
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0F: je 0x4fda6b
        __asm _emit 0x74
        __asm _emit 0x0f
        push 3
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4A 0C 00 00: call 0x4fe6b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4fda72
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1ch
        ; Exact mapped bytes E8 CB FD FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 10h
        ; Exact mapped bytes E8 BC FD FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 0ch
        ; Exact mapped bytes E8 AA FD FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfd
        __asm _emit 0xfe
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
