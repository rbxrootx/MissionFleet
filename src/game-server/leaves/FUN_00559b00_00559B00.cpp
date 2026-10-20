// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00559B00 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_00559b00_00559B00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        ; Exact mapped bytes E8 F5 BA FD FF: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 23: je 0x559b37
        __asm _emit 0x74
        __asm _emit 0x23
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 0
        push 0e204h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x559b37
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 20: jmp 0x559b57
        __asm _emit 0xeb
        __asm _emit 0x20
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 0
        push 0e204h
        ; Exact mapped bytes E8 B7 B9 FD FF: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov esp, ebp
        pop ebp
        ret
    }
}
