// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004401A0 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_004401a0_004401A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 8]
        sub edx, dword ptr [ecx]
        sar edx, 2
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 30: je 0x4401f8
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 10h]
        shl edx, 2
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 80h
        ; Exact mapped bytes 76 0E: jbe 0x4401e8
        __asm _emit 0x76
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 C6 C2 08 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes EB 10: jmp 0x4401f8
        __asm _emit 0xeb
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 7B 3F FF FF: call 0x434170
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
