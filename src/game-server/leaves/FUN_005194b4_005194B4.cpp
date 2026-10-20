// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005194B4 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_005194b4_005194B4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 64h]
        and ah, 0f0h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C8 CC FF FF: call 0x5161a9
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], ecx
        mov edx, dword ptr [ebp - 4]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 19: je 0x51950d
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 18h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x519503
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0A: jmp 0x51950d
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 42 30 02 00: call 0x53c54f
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
