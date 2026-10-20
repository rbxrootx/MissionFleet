// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587058D0 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_587058d0_587058D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, 47h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        add eax, ecx
        mov ecx, 1
        imul edx, ecx, 0
        add eax, edx
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x58705995
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x58705995
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 47h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        add ecx, edx
        mov edx, 1
        imul eax, edx, 0
        add ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        sub eax, 47h
        cmp ecx, eax
        ; Exact mapped bytes 77 17: ja 0x58705950
        __asm _emit 0x77
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        sub edx, 47h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0a4h], edx
        ; Exact mapped bytes EB 26: jmp 0x58705976
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, 47h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a0h]
        add ecx, edx
        mov edx, 1
        imul eax, edx, 0
        add ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a4h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EC 6D DE FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x6d
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
