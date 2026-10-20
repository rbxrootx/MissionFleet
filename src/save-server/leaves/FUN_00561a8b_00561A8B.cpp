// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00561A8B .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_00561a8b_00561A8B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1adh
        push 67c6f0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 BB 87 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x87
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx + 42h]
        test edx, edx
        ; Exact mapped bytes 75 18: jne 0x561ac9
        __asm _emit 0x75
        __asm _emit 0x18
        push 0
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes FF 15 2C C2 68 00: call dword ptr [0x68c22c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 42h], 1
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4ch], 3
        ; Exact mapped bytes 74 19: je 0x561aeb
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
