// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00515D97 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_00515d97_00515D97() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d4a8h
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
        mov dword ptr [eax], 637a1ch
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 45 00 00 00: call 0x515e10
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 44h], 0
        ; Exact mapped bytes 74 0D: je 0x515de1
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 44h]
        push eax
        ; Exact mapped bytes FF 15 00 BA 68 00: call dword ptr [0x68ba00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 84h
        ; Exact mapped bytes E8 F9 6A FB FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 58 7D FB FF: call 0x4cdb5a
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x7d
        __asm _emit 0xfb
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
