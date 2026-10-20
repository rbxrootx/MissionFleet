// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00507FF9 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_00507ff9_00507FF9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e749h
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
        mov dword ptr [eax], 5873ach
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 0F: je 0x50803d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 3ch]
        ; Exact mapped bytes E8 FD 50 00 00: call 0x50d13a
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E3 A6 FE FF: call 0x4f272f
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xa6
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
