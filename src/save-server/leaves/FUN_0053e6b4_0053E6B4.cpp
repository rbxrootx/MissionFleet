// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053E6B4 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_0053e6b4_0053E6B4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 160h
        push 6722d0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 92 BB F9 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xbb
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 74 17: je 0x53e6f1
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ach]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0ach]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b8h], 0
        ; Exact mapped bytes 74 1C: je 0x53e719
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        push eax
        push 635700h
        push 635710h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 9F FB FF: call 0x4f86c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x9f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
