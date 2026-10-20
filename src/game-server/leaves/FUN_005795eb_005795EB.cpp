// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005795EB .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_005795eb_005795EB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0d7h
        push 5ce6c8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 5B 1B F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x1b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx + 42h]
        test edx, edx
        ; Exact mapped bytes 74 27: je 0x579638
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 74 17: je 0x579631
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes FF 15 10 2A 5E 00: call dword ptr [0x5e2a10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x2a
        __asm _emit 0x5e
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
