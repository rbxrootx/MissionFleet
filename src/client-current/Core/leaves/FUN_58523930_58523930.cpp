// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58523930 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_58523930_58523930() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 35: je 0x5852397d
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DA 40 F6 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x40
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0F: je 0x58523974
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 21 FE FF FF: call 0x58523790
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x5852397b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB C5: jmp 0x58523942
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
