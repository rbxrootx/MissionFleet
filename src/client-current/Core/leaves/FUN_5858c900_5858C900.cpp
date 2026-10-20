// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858C900 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_5858c900_5858C900() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 204h], 0
        ; Exact mapped bytes 74 6B: je 0x5858c97e
        __asm _emit 0x74
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 214h], 2
        ; Exact mapped bytes 75 2E: jne 0x5858c94d
        __asm _emit 0x75
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 204h]
        ; Exact mapped bytes E8 73 FA FF FF: call 0x5858c3a0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 19: jne 0x5858c94b
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b8h], 28h
        ; Exact mapped bytes 7D 0D: jge 0x5858c94b
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 214h], 1
        ; Exact mapped bytes EB 31: jmp 0x5858c97e
        __asm _emit 0xeb
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 214h], 1
        ; Exact mapped bytes 75 25: jne 0x5858c97e
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b8h], 0
        ; Exact mapped bytes 7E 19: jle 0x5858c97e
        __asm _emit 0x7e
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b8h], 1eh
        ; Exact mapped bytes 7D 0D: jge 0x5858c97e
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 214h], 2
        mov esp, ebp
        pop ebp
        ret
    }
}
