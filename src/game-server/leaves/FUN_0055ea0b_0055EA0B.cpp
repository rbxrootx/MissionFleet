// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055EA0B .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_0055ea0b_0055EA0B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1adh
        push 5cff18h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 3B C7 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc7
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx + 42h]
        test edx, edx
        ; Exact mapped bytes 75 18: jne 0x55ea49
        __asm _emit 0x75
        __asm _emit 0x18
        push 0
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes FF 15 94 29 5E 00: call dword ptr [0x5e2994]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 42h], 1
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4ch], 3
        ; Exact mapped bytes 74 19: je 0x55ea6b
        __asm _emit 0x74
        __asm _emit 0x19
        push 3
        push 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4ch], 3
        mov esp, ebp
        pop ebp
        ret
    }
}
