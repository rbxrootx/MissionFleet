// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ECFB9 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_004ecfb9_004ECFB9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e229h
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
        mov dword ptr [eax], 6399cch
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 8B 31 05 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x31
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0c0h]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 0F: jne 0x4ed004
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes E8 7B 31 05 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x31
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [eax + 0c0h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 0F: je 0x4ed01c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes E8 CE 50 00 00: call 0x4f20ea
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 34 36 FE FF: call 0x4d065f
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x36
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
