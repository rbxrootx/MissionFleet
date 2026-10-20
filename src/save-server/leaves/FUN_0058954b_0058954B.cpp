// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0058954B .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_0058954b_0058954B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0d7h
        push 67aea0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 FB 0C F5 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x0c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx + 42h]
        test edx, edx
        ; Exact mapped bytes 74 27: je 0x589598
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 74 17: je 0x589591
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes FF 15 58 C2 68 00: call dword ptr [0x68c258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 42h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
