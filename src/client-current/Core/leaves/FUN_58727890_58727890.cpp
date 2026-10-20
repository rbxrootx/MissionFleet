// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58727890 .. +0x9E bytes.
extern "C" __declspec(naked) void FUN_58727890_58727890() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        movzx eax, byte ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 7C 12: jl 0x587278b3
        __asm _emit 0x7c
        __asm _emit 0x12
        movzx ecx, byte ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0adh]
        cmp ecx, eax
        ; Exact mapped bytes 7C 06: jl 0x587278b9
        __asm _emit 0x7c
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 75: jmp 0x5872792c
        __asm _emit 0xeb
        __asm _emit 0x75
        ; Exact mapped bytes EB 73: jmp 0x5872792c
        __asm _emit 0xeb
        __asm _emit 0x73
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x587278d2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0ach]
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 49: jge 0x5872792a
        __asm _emit 0x7d
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 0b0h], 0
        ; Exact mapped bytes 74 37: je 0x58727928
        __asm _emit 0x74
        __asm _emit 0x37
        movzx eax, byte ptr [ebp + 8]
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 75 25: jne 0x5872791f
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 3d4h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F5 92 09 00: call 0x587c0c10
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 0F: jmp 0x5872792c
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes EB 09: jmp 0x58727928
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 9F: jmp 0x587278c9
        __asm _emit 0xeb
        __asm _emit 0x9f
        xor eax, eax
        mov esp, ebp
    }
}
