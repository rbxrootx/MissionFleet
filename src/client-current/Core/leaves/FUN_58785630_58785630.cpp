// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58785630 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_58785630_58785630() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        xor edx, edx
        mov dword ptr [eax + 68h], ecx
        mov dword ptr [eax + 6ch], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 27: je 0x58785676
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 78h]
        mov eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1B 09 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 74 1F: je 0x5878569e
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes E8 26 F6 FF FF: call 0x58784cb0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F3 08 D0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x08
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
