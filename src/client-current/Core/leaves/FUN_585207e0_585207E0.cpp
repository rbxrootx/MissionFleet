// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585207E0 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_585207e0_585207E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 32: je 0x58520823
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 05 0D 00 00: call 0x58521500
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes E8 E7 9F F8 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x9f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 97 A7 FE FF: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 0B: je 0x5852082e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        ; Exact mapped bytes EB 12: jmp 0x58520840
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 49 4C FE FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 5], al
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 4], 1
        mov ecx, dword ptr [ebp - 4]
        movzx eax, byte ptr [ecx + 5]
        mov esp, ebp
        pop ebp
        ret
    }
}
