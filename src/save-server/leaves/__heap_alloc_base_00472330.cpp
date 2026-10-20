// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00472330 .. +0x65 bytes.
extern "C" __declspec(naked) void __heap_alloc_base_00472330() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63f1b0h
        push 46d504h
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
        add esp, -0ch
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D 98 89 68 00 03: cmp dword ptr [0x688998], 3
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 75 57: jne 0x4723b3
        __asm _emit 0x75
        __asm _emit 0x57
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 84 89 68 00: cmp eax, dword ptr [0x688984]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 77 47: ja 0x4723ae
        __asm _emit 0x77
        __asm _emit 0x47
        push 9
        ; Exact mapped bytes E8 42 E5 FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 2F 11 00 00: call 0x4734b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 02 00 00 00: call 0x472395
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x4723a0
        __asm _emit 0xeb
        __asm _emit 0x0b
    }
}
