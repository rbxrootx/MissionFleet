// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00519F84 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_00519f84_00519F84() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 52: je 0x519fe5
        __asm _emit 0x74
        __asm _emit 0x52
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0B: je 0x519fa4
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 07: jmp 0x519fab
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 7fffh
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x519fba
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 7fffh
        ; Exact mapped bytes EB 09: jmp 0x519fc3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 6D B6 01 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 14: jmp 0x519ff9
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ecx + 7ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
